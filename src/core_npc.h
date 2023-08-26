#pragma once

#include "MQ2Main.h"
#include "core_models.h"
#include "_options.h"

char* __fastcall InjectCustomNPCs_Trampoline(char* pThis, char* pPtr, int raceID, int genderID, const char* modelName, int raceMask, int dbStrID);
char* __fastcall InjectCustomNPCs_Detour(char*pThis, char* pPtr, int raceID, int genderID, const char* modelName, int raceMask, int dbStrID)
{
	
	
	if (!raceID) return InjectCustomNPCs_Trampoline(pThis, pPtr, raceID, genderID, modelName, raceMask, dbStrID);
	if (raceID == 723) {
		for (auto&& npc : NPCs) {
			char* modelNameUpper = _strdup(npc.modelName);
			DebugSpew("injecting race %s gender %d id %d", modelNameUpper, npc.genderID, npc.raceID);
			InjectCustomNPCs_Trampoline(pThis, pPtr, npc.raceID, npc.genderID, modelNameUpper, npc.raceMask, npc.dbStrID);
		}
	}
	DebugSpew("loaded race %s gender %d as id %d", modelName, genderID, raceID);
	return InjectCustomNPCs_Trampoline(pThis, pPtr, raceID, genderID, modelName, raceMask, dbStrID);
}
DETOUR_TRAMPOLINE_EMPTY(char* __fastcall InjectCustomNPCs_Trampoline(char* pThis, char* pPtr, int raceID, int genderID, const char* modelName, int raceMask, int dbStrID));
// Hooks to CRaceGenderInfoManager::AddRaceGender
void InjectCustomNPCs() { EzDetour((((DWORD)0x0050A440 - 0x400000) + baseAddress), InjectCustomNPCs_Detour, InjectCustomNPCs_Trampoline); };
//signed int __thiscall CRaceGenderInfoManager::AddRaceGender(signed int* this, int a2, int a3, const char* a4, int a5, int a6)

// Hooks to BOOL __thiscall PlayerBase::IsAMount(PlayerBase* this)
bool __fastcall InjectNPCIsAMount_Trampoline(char* pThis, int raceID);
bool __fastcall InjectNPCIsAMount_Detour(char* pThis, int raceID)
{
	for (auto&& npc : NPCs) {
		if (npc.raceID != raceID) {
			continue;
		}
		return npc.isMount;
	}
	return InjectNPCIsAMount_Trampoline(pThis, raceID);
}
DETOUR_TRAMPOLINE_EMPTY(bool __fastcall InjectNPCIsAMount_Trampoline(char* pThis, int raceID));

void InjectNPCIsAMount() { EzDetour((((DWORD)0x006C1940 - 0x400000) + baseAddress), InjectNPCIsAMount_Detour, InjectNPCIsAMount_Trampoline); };