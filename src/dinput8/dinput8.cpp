// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "dinput8.h"
#include "IDirectInput8Hook.h"
AddressLookupTable<void> ProxyAddressLookupTable = AddressLookupTable<void>();

DirectInput8CreateProc m_pDirectInput8Create;
DllCanUnloadNowProc m_pDllCanUnloadNow;
DllGetClassObjectProc m_pDllGetClassObject;
DllRegisterServerProc m_pDllRegisterServer;
DllUnregisterServerProc m_pDllUnregisterServer;
GetdfDIJoystickProc m_pGetdfDIJoystick;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	static HMODULE dinput8dll = nullptr;
	//CHAR szFilename[MAX_STRING] = { 0 };
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
		// Load dll
		char path[MAX_PATH];
		GetSystemDirectoryA(path, MAX_PATH);
		strcat_s(path, "\\dinput8.dll");
		dinput8dll = LoadLibraryA(path);

		//PCHAR szProcessName;
		//ghModule = (HMODULE)hModule;
		//ghInstance = (HINSTANCE)hModule;

		//GetModuleFileName(ghModule, szFilename, MAX_STRING);
		//szProcessName = strrchr(szFilename, '\\');
		//szProcessName[0] = '\0';
		//strcat(szFilename, "\\eqgame.ini");

		//GetModuleFileName(NULL, szFilename, MAX_STRING);

		//szProcessName = strrchr(szFilename, '.');
		//szProcessName[0] = '\0';
		//szProcessName = strrchr(szFilename, '\\') + 1;
		//InitHooks();


		// Get function addresses
		m_pDirectInput8Create =
			(DirectInput8CreateProc)GetProcAddress(dinput8dll,
				"DirectInput8Create");
		m_pDllCanUnloadNow =
			(DllCanUnloadNowProc)GetProcAddress(dinput8dll, "DllCanUnloadNow");
		m_pDllGetClassObject =
			(DllGetClassObjectProc)GetProcAddress(dinput8dll, "DllGetClassObject");
		m_pDllRegisterServer =
			(DllRegisterServerProc)GetProcAddress(dinput8dll, "DllRegisterServer");
		m_pDllUnregisterServer =
			(DllUnregisterServerProc)GetProcAddress(dinput8dll,
				"DllUnregisterServer");
		m_pGetdfDIJoystick =
			(GetdfDIJoystickProc)GetProcAddress(dinput8dll, "GetdfDIJoystick");
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:

		CoUninitialize();
		FreeLibrary(dinput8dll);
        break;
    }
    return TRUE;
}

