/*****************************************************************************
    MQ2Main.dll: MacroQuest2's extension DLL for EverQuest
    Copyright (C) 2002-2003 Plazmic, 2003-2005 Lax

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License, version 2, as published by
    the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
******************************************************************************/

namespace MQ2Globals
{
bool InitOffsets();

EQLIB_VAR DWORD baseAddress;
EQLIB_VAR DWORD eqGraphicsAddress;
EQLIB_VAR DWORD eqMainAddress;

/* BENCHMARK HANDLES */

EQLIB_API DWORD bmWriteChatColor;
EQLIB_API DWORD bmPluginsIncomingChat;
EQLIB_API DWORD bmPluginsPulse;
EQLIB_API DWORD bmPluginsOnZoned;
EQLIB_API DWORD bmPluginsCleanUI;
EQLIB_API DWORD bmPluginsReloadUI;
EQLIB_API DWORD bmPluginsDrawHUD;
EQLIB_API DWORD bmPluginsSetGameState;
EQLIB_API DWORD bmParseMacroParameter;
EQLIB_API DWORD bmUpdateSpawnSort;
EQLIB_API DWORD bmUpdateSpawnCaptions;
EQLIB_API DWORD bmCalculate;
EQLIB_API DWORD bmBeginZone; 
EQLIB_API DWORD bmEndZone;

/* OTHER */

#ifndef ISXEQ
LEGACY_VAR PDATAVAR pGlobalVariables;
LEGACY_VAR PDATAVAR pMacroVariables;
#endif

EQLIB_VAR BOOL bAllErrorsFatal;
EQLIB_VAR BOOL bAllErrorsDumpStack;
EQLIB_VAR BOOL bAllErrorsLog;
EQLIB_API CHAR DataTypeTemp[MAX_STRING];

EQLIB_API CHAR gszVersion[32];


EQLIB_API DWORD gGameState;
EQLIB_API ePVPServer PVPServer;

EQLIB_VAR BOOL g_Loaded;
EQLIB_VAR DWORD ThreadID;

EQLIB_VAR BOOL gStringTableFixed;
EQLIB_VAR DWORD gMaxSpawnCaptions;
EQLIB_VAR BOOL gMQCaptions;

EQLIB_VAR HMODULE ghModule;
EQLIB_VAR HINSTANCE ghInstance;
EQLIB_VAR BOOL gbEQWLoaded;
//EQLIB_VAR PHOTKEY pHotkey;
EQLIB_VAR BOOL gbUnload;
EQLIB_VAR DWORD gpHook;
#ifndef ISXEQ
LEGACY_VAR PMACROBLOCK gMacroBlock;
LEGACY_VAR PMACROSTACK gMacroStack;
LEGACY_VAR map<string,PMACROBLOCK> gMacroSubLookupMap; 
LEGACY_VAR PEVENTQUEUE gEventQueue;
LEGACY_VAR PMACROBLOCK gEventFunc[NUM_EVENTS];
#endif
EQLIB_VAR UCHAR gLastFind;
EQLIB_VAR BOOL gInClick;
EQLIB_VAR DOUBLE gZFilter;
EQLIB_VAR DOUBLE gFaceAngle;
EQLIB_VAR DOUBLE gLookAngle;
EQLIB_VAR CHAR gszEQPath[MAX_STRING];
EQLIB_VAR CHAR gszMacroPath[MAX_STRING];
EQLIB_VAR CHAR gszLogPath[MAX_STRING];
EQLIB_VAR CHAR gszINIPath[MAX_STRING];
EQLIB_VAR CHAR gszINIFilename[MAX_STRING];
EQLIB_VAR CHAR gszItemDB[MAX_STRING];
EQLIB_VAR CHAR gszMacroName[MAX_STRING];
EQLIB_VAR CHAR szLastCommand[MAX_STRING];

EQLIB_VAR CHAR gszLastNormalError[MAX_STRING];// QUIT USING THIS DIRECTLY, USE MacroError, FatalError, ETC
EQLIB_VAR CHAR gszLastSyntaxError[MAX_STRING];
EQLIB_VAR CHAR gszLastMQ2DataError[MAX_STRING];

EQLIB_VAR PSPAWNINFO pNamingSpawn;
EQLIB_VAR CHAR gszSpawnNPCName[MAX_STRING];
EQLIB_VAR CHAR gszSpawnPlayerName[7][MAX_STRING];
EQLIB_VAR CHAR gszSpawnPetName[MAX_STRING];
EQLIB_VAR CHAR gszSpawnCorpseName[MAX_STRING];

EQLIB_VAR DWORD DrawHUDParams[4];

EQLIB_VAR DWORD gEventChat;
EQLIB_VAR DWORD gRunning;
EQLIB_VAR BOOL gbMoving;
EQLIB_VAR DWORD gMaxTurbo;
EQLIB_VAR BOOL gReturn;

EQLIB_VAR PCHATBUF gDelayedCommands;

EQLIB_VAR BOOL gbInZone;
EQLIB_VAR BOOL gZoning;
EQLIB_VAR BOOL WereWeZoning;
EQLIB_VAR BOOL gbInDInput;
EQLIB_VAR BOOL gbInDState;
EQLIB_VAR BOOL gbInDAcquire;
EQLIB_VAR BOOL gbInChat;
EQLIB_VAR BOOL gFilterSkillsAll;
EQLIB_VAR BOOL gFilterSkillsIncrease;
EQLIB_VAR BOOL gFilterTarget;
EQLIB_VAR BOOL gFilterDebug;
EQLIB_VAR BOOL gFilterMoney;
EQLIB_VAR BOOL gFilterFood;
//EQLIB_VAR DWORD gUseMQChatWnd;
EQLIB_VAR BOOL gFilterMQ;
EQLIB_VAR BOOL gFilterMacro;
EQLIB_VAR BOOL gFilterEncumber;
EQLIB_VAR BOOL gFilterCustom;
EQLIB_VAR BOOL gSpewToFile;
EQLIB_VAR BOOL gbDoAutoRun;
EQLIB_VAR BOOL gMQPauseOnChat;
EQLIB_VAR BOOL gKeepKeys;
EQLIB_VAR BOOL gLClickedObject;
EQLIB_VAR SWHOFILTER gFilterSWho;

EQLIB_VAR BOOL gbHUDUnderUI;
EQLIB_VAR BOOL gbAlwaysDrawMQHUD;

EQLIB_VAR BOOL gFilterMQ2DataErrors;

EQLIB_VAR DOUBLE DegToRad;
EQLIB_VAR DOUBLE PI;
#define ZoneShift             0

#ifndef ISXEQ
LEGACY_VAR Blech *pMQ2Blech;
LEGACY_VAR CHAR EventMsg[MAX_STRING];
#ifdef USEBLECHEVENTS
LEGACY_VAR Blech *pEventBlech;
#endif
LEGACY_VAR PEVENTLIST pEventList;
#endif

//EQLIB_VAR PKEYPRESS gKeyStack;
EQLIB_VAR PMQTIMER gTimer;
EQLIB_VAR LONG gDelay;
EQLIB_VAR CHAR gDelayCondition[MAX_STRING];
EQLIB_VAR PALERTLIST gpAlertList;
EQLIB_VAR BOOL gMacroPause;
EQLIB_VAR SPAWNINFO EnviroTarget;
EQLIB_VAR PGROUNDITEM pGroundTarget;
EQLIB_VAR SPAWNINFO DoorEnviroTarget;
EQLIB_VAR PDOOR pDoorTarget;
EQLIB_VAR PITEMDB gItemDB;
EQLIB_VAR BOOL bRunNextCommand;
EQLIB_VAR BOOL bAllowCommandParse;
EQLIB_VAR BOOL gTurbo;
EQLIB_VAR PDEFINE pDefines;
//EQLIB_VAR CHAR gLastFindSlot[MAX_STRING];
//EQLIB_VAR CHAR gLastError[MAX_STRING];
//EQLIB_VAR HWND ghWnd;
EQLIB_VAR PFILTER gpFilters;

EQLIB_VAR map<string,unsigned long> ItemSlotMap;

EQLIB_VAR BOOL g_bInDXMouse;
EQLIB_VAR PMOUSESPOOF gMouseData;

EQLIB_VAR DIKEYID gDiKeyID[];
EQLIB_VAR PCHAR gDiKeyName[256];


EQLIB_VAR DWORD ManaGained;
EQLIB_VAR DWORD HealthGained;
EQLIB_VAR DWORD EnduranceGained;

EQLIB_VAR DWORD gGameState;
EQLIB_VAR BOOL gbMQ2LoadingMsg;
EQLIB_VAR BOOL gbExactSearchCleanNames;

EQLIB_VAR DWORD EQADDR_CONVERTITEMTAGS;

EQLIB_VAR DWORD EQADDR_MEMCHECK0;
EQLIB_VAR DWORD EQADDR_MEMCHECK1;
EQLIB_VAR DWORD EQADDR_MEMCHECK2;
EQLIB_VAR DWORD EQADDR_MEMCHECK3;
EQLIB_VAR DWORD EQADDR_MEMCHECK4;
EQLIB_VAR PCHAR EQADDR_SERVERHOST;
EQLIB_VAR PCHAR EQADDR_SERVERNAME;
EQLIB_VAR DWORD EQADDR_HWND;

EQLIB_VAR _SKILLMGR **ppSkillMgr;
#define pSkillMgr (*ppSkillMgr)

EQLIB_VAR PCMDLIST EQADDR_CMDLIST;

EQLIB_VAR PBYTE EQADDR_ATTACK;
EQLIB_VAR PBYTE EQADDR_NOTINCHATMODE;
EQLIB_VAR PBYTE EQADDR_RUNWALKSTATE;
EQLIB_VAR PCHAR EQADDR_LASTTELL;
EQLIB_VAR PVOID EQADDR_GWORLD;
EQLIB_VAR PDWORD EQADDR_DOABILITYLIST;
//EQLIB_VAR PBYTE EQADDR_DOABILITYAVAILABLE;
EQLIB_VAR PBYTE pTributeActive;

EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD0;
EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD1;
EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD2;
EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD3;
EQLIB_VAR PBYTE EQADDR_ENCRYPTPAD4;

EQLIB_VAR PMOUSEINFO EQADDR_MOUSE;
EQLIB_VAR PMOUSECLICK EQADDR_MOUSECLICK;

EQLIB_VAR PMAPLABEL *ppCurrentMapLabel;
#define pCurrentMapLabel (*ppCurrentMapLabel)

EQLIB_VAR PCHAR gpbRangedAttackReady;
#define gbRangedAttackReady (*gpbRangedAttackReady)
EQLIB_VAR PCHAR gpbAltTimerReady;
#define gbAltTimerReady (*gpbAltTimerReady)
EQLIB_VAR PCHAR gpbShowNetStatus;
#define gbShowNetStatus (*gpbShowNetStatus)
EQLIB_VAR DWORD *gpShowNames;
#define gShowNames (*gpShowNames)
EQLIB_VAR DWORD *gpPCNames;
#define gPCNames (*gpPCNames)
EQLIB_VAR PBYTE gpAutoFire;
#define gAutoFire (*gpAutoFire)
EQLIB_VAR PBYTE gpShiftKeyDown;
#define gShiftKeyDown (*gpShiftKeyDown)
EQLIB_VAR DWORD *gpMouseEventTime;
#define gMouseEventTime (*gpMouseEventTime)

EQLIB_VAR DWORD *g_ppDrawHandler;
#define g_pDrawHandler (*g_ppDrawHandler)

EQLIB_VAR PCHAR *EQMappableCommandList;
EQLIB_VAR DWORD gnNormalEQMappableCommands;

#ifndef ISXEQ
EQLIB_VAR DWORD EQADDR_DIMAIN;
EQLIB_VAR IDirectInputDevice8A **EQADDR_DIKEYBOARD;
EQLIB_VAR IDirectInputDevice8A **EQADDR_DIMOUSE;
#endif

EQLIB_VAR DWORD EQADDR_EQLABELS;

EQLIB_VAR BOOL gMouseClickInProgress[8];
EQLIB_VAR BOOL bDetMouse;

// ***************************************************************************
// String arrays
// ***************************************************************************
EQLIB_VAR PCHAR szEQMappableCommands[nEQMappableCommands];

EQLIB_VAR PCHAR szHeading[];
EQLIB_VAR PCHAR szHeadingShort[];
EQLIB_VAR PCHAR szHeadingNormal[];
EQLIB_VAR PCHAR szHeadingNormalShort[];
EQLIB_VAR PCHAR szSize[];
EQLIB_VAR PCHAR szSpawnType[];
EQLIB_VAR PCHAR szGuildStatus[];
EQLIB_VAR PCHAR szGender[];
EQLIB_VAR PCHAR szDeityTeam[];
EQLIB_VAR PCHAR szLights[];
EQLIB_VAR BYTE LightBrightness[];
EQLIB_VAR PCHAR szSkills[];
EQLIB_VAR PCHAR szInnates[];
EQLIB_VAR PCHAR szCombineTypes[];
EQLIB_VAR PCHAR szItemTypes[];

EQLIB_VAR PCHAR szWornLoc[];


EQLIB_VAR fEQCommand         cmdHelp;
EQLIB_VAR fEQCommand         cmdWho;
EQLIB_VAR fEQCommand         cmdWhoTarget;
EQLIB_VAR fEQCommand         cmdLocation;
EQLIB_VAR fEQCommand         cmdFace;
EQLIB_VAR fEQCommand         cmdTarget;
EQLIB_VAR fEQCommand         cmdCharInfo;
EQLIB_VAR fEQCommand         cmdFilter;
EQLIB_VAR fEQCommand         cmdDoAbility;
EQLIB_VAR fEQCommand         cmdCast;


EQLIB_VAR fEQNewUIINI        NewUIINI;
EQLIB_VAR fEQProcGameEvts    ProcessGameEvents;
EQLIB_VAR fEQExecuteCmd         ExecuteCmd;
EQLIB_VAR fEQGetMelee    get_melee_range;

EQLIB_VAR PCHAR szItemName[];
EQLIB_VAR PCHAR szItemName4xx[];
EQLIB_VAR ACTORDEFENTRY ActorDefList[];
//EQLIB_VAR PCHAR szTheme[]; 
EQLIB_VAR PCHAR szDmgBonusType[];
EQLIB_VAR PCHAR szBodyType[];
EQLIB_VAR PCHAR szAugRestrictions[];
EQLIB_VAR PCHAR szItemSlot[];
EQLIB_VAR PCHAR szExpansions[];

EQLIB_VAR BOOL bLaxColor;
EQLIB_VAR PCHAR szColorAdjective[];
EQLIB_VAR PCHAR szColorAdjectiveYou[];
EQLIB_VAR PCHAR szColorExpletive[];
EQLIB_VAR PCHAR szColorSyntaxError[];
EQLIB_VAR PCHAR szColorMacroError[];
EQLIB_VAR PCHAR szColorMQ2DataError[];
EQLIB_VAR PCHAR szColorFatalError[];
EQLIB_VAR DWORD nColorAdjective;
EQLIB_VAR DWORD nColorAdjectiveYou;
EQLIB_VAR DWORD nColorExpletive;
EQLIB_VAR DWORD nColorSyntaxError;
EQLIB_VAR DWORD nColorMacroError;
EQLIB_VAR DWORD nColorMQ2DataError;
EQLIB_VAR DWORD nColorFatalError;

EQLIB_VAR PALIAS pAliases;
EQLIB_VAR PSUB pSubs;
EQLIB_VAR PMQCOMMAND pCommands;
EQLIB_VAR PMQPLUGIN pPlugins;
EQLIB_VAR PMQXMLFILE pXMLFiles;

EQLIB_VAR fGetLabelFromEQ GetLabelFromEQ;

EQLIB_VAR map<string,PSPAWNINFO> SpawnByName;
//EQLIB_VAR EQPlayer **ppEQP_IDArray;
EQLIB_VAR MQRANK EQP_DistArray[3000];
EQLIB_VAR DWORD gSpawnCount;
//#define ppEQP_IDArray (*pppEQP_IDArray)

EQLIB_VAR StringTable **ppStringTable;
#define pStringTable (*ppStringTable)

EQLIB_VAR CDBStr **ppCDBStr;
#define pCDBStr (*ppCDBStr)
EQLIB_VAR EQMisc *pEQMisc;
EQLIB_VAR CSkillMgr **ppCSkillMgr;
#define pCSkillMgr (*ppCSkillMgr)
EQLIB_VAR CGuild *pGuild;

EQLIB_VAR CEverQuest **ppEverQuest;
#define pEverQuest (*ppEverQuest)
EQLIB_VAR CDisplay **ppDisplay;
#define pDisplay (*ppDisplay)
EQLIB_VAR EQ_PC **ppPCData;
#define pPCData (*ppPCData)
EQLIB_VAR EQ_Character **ppCharData;
#define pCharData (*ppCharData)
#define pCharData1 ((EQ_Character1 *)&GetCharInfo()->vtable2)
EQLIB_VAR EQPlayer **ppCharSpawn;
#define pCharSpawn (*ppCharSpawn)
EQLIB_VAR EQPlayer **ppActiveMerchant;
#define pActiveMerchant (*ppActiveMerchant)
EQLIB_VAR EQPlayerManager **ppSpawnManager;
#define pSpawnManager (*ppSpawnManager)
#define pSpawnList (((struct _SPAWNMANAGER *)pSpawnManager)->FirstSpawn)
#define pChatService ((CChatService*)((PEVERQUEST)pEverQuest)->ChatService)
#define pPlayerPointManager ((PlayerPointManager*)&GetCharInfo()->PlayerPointManager)

EQLIB_VAR EQPlayer **ppLocalPlayer;
#define pLocalPlayer (*ppLocalPlayer)
EQLIB_VAR EQPlayer **ppControlledPlayer;
#define pControlledPlayer (*ppControlledPlayer)



EQLIB_VAR EQWorldData **ppWorldData;
#define pWorldData (*ppWorldData)
EQLIB_VAR SpellManager **ppSpellMgr;
#define pSpellMgr (*ppSpellMgr)
EQLIB_VAR EQPlayer **ppTarget;
#define pTarget (*ppTarget)
EQLIB_VAR EqSwitchManager **ppSwitchMgr;
#define pSwitchMgr (*ppSwitchMgr)
EQLIB_VAR EQItemList **ppItemList;
#define pItemList (*ppItemList)
EQLIB_VAR EQZoneInfo *pZoneInfo;
EQLIB_VAR PGUILDS pGuildList;
EQLIB_VAR PEQSOCIAL   pSocialList;

EQLIB_VAR PBYTE pgHotkeyPage;
#define gHotkeyPage (*pgHotkeyPage)

EQLIB_VAR EQPlayer **ppTradeTarget;
#define pTradeTarget (*ppTradeTarget)
EQLIB_VAR EQPlayer **ppActiveBanker;
#define pActiveBanker (*ppActiveBanker)
EQLIB_VAR EQPlayer **ppActiveGMaster;
#define pActiveGMaster (*ppActiveGMaster)
EQLIB_VAR EQPlayer **ppActiveCorpse;
#define pActiveCorpse (*ppActiveCorpse)

EQLIB_VAR CSidlManager **ppSidlMgr;
#define pSidlMgr (*ppSidlMgr)

EQLIB_VAR CXWndManager **ppWndMgr;
#define pWndMgr (*ppWndMgr)

EQLIB_VAR KeypressHandler **ppKeypressHandler;
#define pKeypressHandler (*ppKeypressHandler)

EQLIB_VAR PEQRAID pRaid;
EQLIB_VAR DZMEMBER **ppDZMember;
EQLIB_VAR TASKMEMBER **ppTaskMember;
EQLIB_VAR DZTIMERINFO **ppDZTimerInfo;
EQLIB_VAR DYNAMICZONE *pDynamicZone;

EQLIB_VAR PINT pgCurrentSocial;
#define gCurrentSocial (*pgCurrentSocial)

EQLIB_VAR DWORD *pScreenX;
#define ScreenX (*pScreenX)
EQLIB_VAR DWORD *pScreenY;
#define ScreenY (*pScreenY)
EQLIB_VAR DWORD *pScreenXMax;
#define ScreenXMax (*pScreenXMax)
EQLIB_VAR DWORD *pScreenYMax;
#define ScreenYMax (*pScreenYMax)
EQLIB_VAR DWORD *pScreenMode;
#define ScreenMode (*pScreenMode)
EQLIB_VAR CHAR  *pMouseLook;
#define bMouseLook (*pMouseLook)

EQLIB_VAR SPELLFAVORITE *pSpellSets;
EQLIB_VAR AltAdvManager** ppAltAdvManager;
#define pAltAdvManager (*ppAltAdvManager)

EQLIB_VAR PCONNECTION_T *ppConnection;
#define pConnection (*ppConnection)
EQLIB_VAR AURAMGR **ppAuraMgr;
#define pAuraMgr (*ppAuraMgr)

EQLIB_VAR EQCHATMGR **ppEQChatMgr;
#define pChatMgr (*ppEQChatMgr)

EQLIB_VAR MERCENARYINFO **ppMercInfo;
#define pMercInfo (*ppMercInfo)

EQLIB_VAR AGGROINFO **ppAggroInfo;
#define pAggroInfo (*ppAggroInfo)

/* WINDOW INSTANCES */ 
EQLIB_VAR CContextMenuManager **ppContextMenuManager;
EQLIB_VAR CCursorAttachment **ppCursorAttachment;
EQLIB_VAR CSocialEditWnd **ppSocialEditWnd;
EQLIB_VAR CContainerMgr **ppContainerMgr;
EQLIB_VAR CChatManager **ppChatManager;
EQLIB_VAR CConfirmationDialog **ppConfirmationDialog;
EQLIB_VAR CFacePick **ppFacePick;
EQLIB_VAR CInvSlotMgr **ppInvSlotMgr;
//EQLIB_VAR CPopupWndManager **ppPopupWndManager;
EQLIB_VAR CNoteWnd **ppNoteWnd;
EQLIB_VAR CHelpWnd **ppHelpWnd;
EQLIB_VAR CTipWnd **ppTipWnd;
EQLIB_VAR CTipWnd **ppTipWnd;
EQLIB_VAR CBookWnd **ppBookWnd;
EQLIB_VAR CFriendsWnd **ppFriendsWnd;
EQLIB_VAR CMusicPlayerWnd **ppMusicPlayerWnd;
EQLIB_VAR CAlarmWnd **ppAlarmWnd;
EQLIB_VAR CLoadskinWnd **ppLoadskinWnd;
EQLIB_VAR CPetInfoWnd **ppPetInfoWnd;
EQLIB_VAR CTrainWnd **ppTrainWnd;
EQLIB_VAR CSkillsWnd **ppSkillsWnd;
EQLIB_VAR CSkillsSelectWnd **ppSkillsSelectWnd;
//EQLIB_VAR CCombatSkillSelectWnd **ppCombatSkillSelectWnd;
EQLIB_VAR CAAWnd **ppAAWnd;
EQLIB_VAR CGroupWnd **ppGroupWnd;
//EQLIB_VAR CSystemInfoDialogBox **ppSystemInfoDialogBox;
EQLIB_VAR CGroupSearchWnd **ppGroupSearchWnd;
EQLIB_VAR CGroupSearchFiltersWnd **ppGroupSearchFiltersWnd;
EQLIB_VAR CRaidWnd **ppRaidWnd;
EQLIB_VAR CRaidOptionsWnd **ppRaidOptionsWnd;
EQLIB_VAR CBreathWnd **ppBreathWnd;
EQLIB_VAR CMapToolbarWnd **ppMapToolbarWnd;
EQLIB_VAR CMapViewWnd **ppMapViewWnd;
EQLIB_VAR CEditLabelWnd **ppEditLabelWnd;
EQLIB_VAR COptionsWnd **ppOptionsWnd;
EQLIB_VAR CBuffWindow **ppBuffWindowNORMAL;
EQLIB_VAR CBuffWindow **ppBuffWindowSHORT;
EQLIB_VAR CTargetWnd **ppTargetWnd;
EQLIB_VAR CColorPickerWnd **ppColorPickerWnd;
EQLIB_VAR CHotButtonWnd **ppHotButtonWnd;
EQLIB_VAR CPlayerWnd **ppPlayerWnd;
EQLIB_VAR CCastingWnd **ppCastingWnd;
EQLIB_VAR CCastSpellWnd **ppCastSpellWnd;
EQLIB_VAR CSpellBookWnd **ppSpellBookWnd;
EQLIB_VAR CInventoryWnd **ppInventoryWnd;
EQLIB_VAR CBankWnd **ppBankWnd;
EQLIB_VAR CQuantityWnd **ppQuantityWnd;
EQLIB_VAR CTextEntryWnd **ppTextEntryWnd;
EQLIB_VAR CFileSelectionWnd **ppFileSelectionWnd;
EQLIB_VAR CLootWnd **ppLootWnd;
EQLIB_VAR CPetInfoWnd **ppPetInfoWnd;
EQLIB_VAR CActionsWnd **ppActionsWnd;
EQLIB_VAR CCombatAbilityWnd **ppCombatAbilityWnd;
EQLIB_VAR CMerchantWnd **ppMerchantWnd;
EQLIB_VAR CTradeWnd **ppTradeWnd;
EQLIB_VAR CBazaarWnd **ppBazaarWnd;
EQLIB_VAR CBazaarSearchWnd **ppBazaarSearchWnd;
EQLIB_VAR CGiveWnd **ppGiveWnd;
EQLIB_VAR CSelectorWnd **ppSelectorWnd;
EQLIB_VAR CTrackingWnd **ppTrackingWnd;
EQLIB_VAR CInspectWnd **ppInspectWnd;
EQLIB_VAR CFeedbackWnd **ppFeedbackWnd;
EQLIB_VAR CBugReportWnd **ppBugReportWnd;
EQLIB_VAR CVideoModesWnd **ppVideoModesWnd;
EQLIB_VAR CCompassWnd **ppCompassWnd;
EQLIB_VAR CPlayerNotesWnd **ppPlayerNotesWnd;
EQLIB_VAR CGemsGameWnd **ppGemsGameWnd;
EQLIB_VAR CStoryWnd **ppStoryWnd;
//EQLIB_VAR CFindLocationWnd **ppFindLocationWnd;
//EQLIB_VAR CAdventureRequestWnd **ppAdventureRequestWnd;
//EQLIB_VAR CAdventureMerchantWnd **ppAdventureMerchantWnd;
//EQLIB_VAR CAdventureStatsWnd **ppAdventureStatsWnd;
//EQLIB_VAR CAdventureLeaderboardWnd **ppAdventureLeaderboardWnd;
//EQLIB_VAR CLeadershipWindow **ppLeadershipWindow;
EQLIB_VAR CBodyTintWnd **ppBodyTintWnd;
EQLIB_VAR CGuildMgmtWnd **ppGuildMgmtWnd;
EQLIB_VAR CJournalTextWnd **ppJournalTextWnd;
EQLIB_VAR CJournalCatWnd **ppJournalCatWnd;
//EQLIB_VAR CTributeBenefitWnd **ppTributeBenefitWnd;
//EQLIB_VAR CTributeMasterWnd **ppTributeMasterWnd;
EQLIB_VAR CPetitionQWnd **ppPetitionQWnd;
EQLIB_VAR CSoulmarkWnd **ppSoulmarkWnd;
EQLIB_VAR CTimeLeftWnd **ppTimeLeftWnd;
EQLIB_VAR CTextOverlay **ppTextOverlay;
EQLIB_VAR CPotionBeltWnd **ppPotionBeltWnd;


#define pContextMenuManager (*ppContextMenuManager)
#define pCursorAttachment (*ppCursorAttachment)
#define pSocialEditWnd (*ppSocialEditWnd)
#define pContainerMgr (*ppContainerMgr)
#define pChatManager (*ppChatManager)
#define pConfirmationDialog (*ppConfirmationDialog)
#define pFacePick (*ppFacePick)
#define pInvSlotMgr (*ppInvSlotMgr)
#define pPopupWndManager (*ppPopupWndManager)
#define pNoteWnd (*ppNoteWnd)
#define pHelpWnd (*ppHelpWnd)
#define pTipWnd (*ppTipWnd)
#define pTipWnd (*ppTipWnd)
#define pBookWnd (*ppBookWnd)
#define pFriendsWnd (*ppFriendsWnd)
#define pMusicPlayerWnd (*ppMusicPlayerWnd)
#define pAlarmWnd (*ppAlarmWnd)
#define pLoadskinWnd (*ppLoadskinWnd)
#define pPetInfoWnd (*ppPetInfoWnd)
#define pTrainWnd (*ppTrainWnd)
#define pSkillsWnd (*ppSkillsWnd)
#define pSkillsSelectWnd (*ppSkillsSelectWnd)
#define pCombatSkillSelectWnd (*ppCombatSkillSelectWnd)
#define pAAWnd (*ppAAWnd)
#define pGroupWnd (*ppGroupWnd)
#define pSystemInfoDialogBox (*ppSystemInfoDialogBox)
#define pGroupSearchWnd (*ppGroupSearchWnd)
#define pGroupSearchFiltersWnd (*ppGroupSearchFiltersWnd)
#define pRaidWnd (*ppRaidWnd)
#define pRaidOptionsWnd (*ppRaidOptionsWnd)
#define pBreathWnd (*ppBreathWnd)
#define pMapToolbarWnd (*ppMapToolbarWnd)
#define pMapViewWnd (*ppMapViewWnd)
#define pEditLabelWnd (*ppEditLabelWnd)
#define pOptionsWnd (*ppOptionsWnd)
#define pBuffWnd (*ppBuffWindowNORMAL)
#define pSongWnd (*ppBuffWindowSHORT)
#define pTargetWnd (*ppTargetWnd)
#define pColorPickerWnd (*ppColorPickerWnd)
#define pHotButtonWnd (*ppHotButtonWnd)
#define pPlayerWnd (*ppPlayerWnd)
#define pCastingWnd (*ppCastingWnd)
#define pCastSpellWnd (*ppCastSpellWnd)
#define pSpellBookWnd (*ppSpellBookWnd)
#define pInventoryWnd (*ppInventoryWnd)
#define pBankWnd (*ppBankWnd)
#define pQuantityWnd (*ppQuantityWnd)
#define pTextEntryWnd (*ppTextEntryWnd)
#define pFileSelectionWnd (*ppFileSelectionWnd)
#define pLootWnd (*ppLootWnd)
#define pPetInfoWnd (*ppPetInfoWnd)
#define pActionsWnd (*ppActionsWnd)
#define pCombatAbilityWnd (*ppCombatAbilityWnd)
#define pMerchantWnd (*ppMerchantWnd)
#define pTradeWnd (*ppTradeWnd)
#define pBazaarWnd (*ppBazaarWnd)
#define pBazaarSearchWnd (*ppBazaarSearchWnd)
#define pGiveWnd (*ppGiveWnd)
#define pSelectorWnd (*ppSelectorWnd)
#define pTrackingWnd (*ppTrackingWnd)
#define pInspectWnd (*ppInspectWnd)
#define pFeedbackWnd (*ppFeedbackWnd)
#define pBugReportWnd (*ppBugReportWnd)
#define pVideoModesWnd (*ppVideoModesWnd)
#define pCompassWnd (*ppCompassWnd)
#define pPlayerNotesWnd (*ppPlayerNotesWnd)
#define pGemsGameWnd (*ppGemsGameWnd)
#define pStoryWnd (*ppStoryWnd)
#define pFindLocationWnd (*ppFindLocationWnd)
#define pAdventureRequestWnd (*ppAdventureRequestWnd)
#define pAdventureMerchantWnd (*ppAdventureMerchantWnd)
#define pAdventureStatsWnd (*ppAdventureStatsWnd)
#define pAdventureLeaderboardWnd (*ppAdventureLeaderboardWnd)
#define pLeadershipWindow (*ppLeadershipWindow)
#define pBodyTintWnd (*ppBodyTintWnd)
#define pGuildMgmtWnd (*ppGuildMgmtWnd)
#define pJournalTextWnd (*ppJournalTextWnd)
#define pJournalCatWnd (*ppJournalCatWnd)
#define pTributeBenefitWnd (*ppTributeBenefitWnd)
#define pTributeMasterWnd (*ppTributeMasterWnd)
#define pPetitionQWnd (*ppPetitionQWnd)
#define pSoulmarkWnd (*ppSoulmarkWnd)
#define pTimeLeftWnd (*ppTimeLeftWnd)
#define pTextOverlay (*ppTextOverlay)
#define pPotionBeltWnd (*ppPotionBeltWnd)
#define pDZMember (*ppDZMember)
#define pDZTimerInfo (*ppDZTimerInfo)
#define pTaskMember (*ppTaskMember)

EQLIB_VAR DWORD __ActualVersionDate;
EQLIB_VAR DWORD __ActualVersionTime;
EQLIB_VAR DWORD __MemChecker0;
EQLIB_VAR DWORD __MemChecker1;
EQLIB_VAR DWORD __MemChecker2;
EQLIB_VAR DWORD __MemChecker3;
EQLIB_VAR DWORD __MemChecker4;
EQLIB_VAR DWORD __EncryptPad0;
EQLIB_VAR DWORD __EncryptPad1;
EQLIB_VAR DWORD __EncryptPad2;
EQLIB_VAR DWORD __EncryptPad3;
EQLIB_VAR DWORD __EncryptPad4;
EQLIB_VAR DWORD __AC1;
EQLIB_VAR DWORD __AC2;
EQLIB_VAR DWORD __AC3;
EQLIB_VAR DWORD __AC4;
EQLIB_VAR DWORD __AC5;
EQLIB_VAR DWORD __AC6;
EQLIB_VAR DWORD __AC7;
EQLIB_VAR DWORD DI8__Main;
EQLIB_VAR DWORD DI8__Keyboard;
EQLIB_VAR DWORD DI8__Mouse;
EQLIB_VAR DWORD __AltTimerReady;
EQLIB_VAR DWORD __Attack;
EQLIB_VAR DWORD __Autofire;
EQLIB_VAR DWORD __BindList;
EQLIB_VAR DWORD __Clicks;
EQLIB_VAR DWORD __CommandList;
EQLIB_VAR DWORD __CurrentMapLabel;
EQLIB_VAR DWORD __CurrentSocial;
EQLIB_VAR DWORD __DoAbilityList;
EQLIB_VAR DWORD __do_loot;
EQLIB_VAR DWORD __DrawHandler;
EQLIB_VAR DWORD __Guilds;
EQLIB_VAR DWORD __gWorld;
EQLIB_VAR DWORD __HotkeyPage;
EQLIB_VAR DWORD __HWnd;
EQLIB_VAR DWORD __InChatMode;
EQLIB_VAR DWORD __LastTell;
EQLIB_VAR DWORD __LMouseHeldTime;
EQLIB_VAR DWORD __Mouse;
EQLIB_VAR DWORD __MouseLook;
EQLIB_VAR DWORD __MouseEventTime;
EQLIB_VAR DWORD __NetStatusToggle;
EQLIB_VAR DWORD __PCNames;
EQLIB_VAR DWORD __RangeAttackReady;
EQLIB_VAR DWORD __RMouseHeldTime;
EQLIB_VAR DWORD __RunWalkState;
EQLIB_VAR DWORD __ScreenMode;
EQLIB_VAR DWORD __ScreenX;
EQLIB_VAR DWORD __ScreenY;
EQLIB_VAR DWORD __ScreenXMax;
EQLIB_VAR DWORD __ScreenYMax;
EQLIB_VAR DWORD __ServerHost;
EQLIB_VAR DWORD __ServerName;
EQLIB_VAR DWORD __ShiftKeyDown;
EQLIB_VAR DWORD __ShowNames;
EQLIB_VAR DWORD __Socials;

EQLIB_VAR DWORD instCRaid;
EQLIB_VAR DWORD instEQZoneInfo;
EQLIB_VAR DWORD instKeypressHandler;
EQLIB_VAR DWORD pinstActiveBanker;
EQLIB_VAR DWORD pinstActiveCorpse;
EQLIB_VAR DWORD pinstActiveGMaster;
EQLIB_VAR DWORD pinstActiveMerchant;
EQLIB_VAR DWORD pinstAggroInfo;
EQLIB_VAR DWORD pinstAltAdvManager;
EQLIB_VAR DWORD pinstAuraMgr;
EQLIB_VAR DWORD pinstBandageTarget;
EQLIB_VAR DWORD pinstCamActor;
EQLIB_VAR DWORD pinstCDBStr;
EQLIB_VAR DWORD pinstCDisplay;
EQLIB_VAR DWORD pinstCEverQuest;
EQLIB_VAR DWORD pinstCharData;
EQLIB_VAR DWORD pinstCharSpawn;
EQLIB_VAR DWORD pinstControlledMissile;
EQLIB_VAR DWORD pinstControlledPlayer;
EQLIB_VAR DWORD pinstCSidlManager;
EQLIB_VAR DWORD pinstCXWndManager;
EQLIB_VAR DWORD instDynamicZone;
EQLIB_VAR DWORD pinstDZMember;
EQLIB_VAR DWORD pinstDZTimerInfo;
EQLIB_VAR DWORD pinstEQItemList;
EQLIB_VAR DWORD instEQMisc;
EQLIB_VAR DWORD pinstEQSoundManager;
EQLIB_VAR DWORD instExpeditionLeader;
EQLIB_VAR DWORD instExpeditionName;
EQLIB_VAR DWORD pinstGroup;
EQLIB_VAR DWORD pinstImeManager;
EQLIB_VAR DWORD pinstLocalPlayer;
EQLIB_VAR DWORD pinstMercenaryData;
EQLIB_VAR DWORD pinstModelPlayer;
EQLIB_VAR DWORD pinstPCData;
EQLIB_VAR DWORD pinstSkillMgr;
EQLIB_VAR DWORD pinstSpawnManager;
EQLIB_VAR DWORD pinstSpellManager;
EQLIB_VAR DWORD pinstSpellSets;
EQLIB_VAR DWORD pinstStringTable;
EQLIB_VAR DWORD pinstSwitchManager;
EQLIB_VAR DWORD pinstTarget;
EQLIB_VAR DWORD pinstTargetObject;
EQLIB_VAR DWORD pinstTargetSwitch;
EQLIB_VAR DWORD pinstTaskMember;
EQLIB_VAR DWORD pinstTrackTarget;
EQLIB_VAR DWORD pinstTradeTarget;
EQLIB_VAR DWORD instTributeActive;
EQLIB_VAR DWORD pinstViewActor;
EQLIB_VAR DWORD pinstWorldData;

EQLIB_VAR DWORD pinstCTextOverlay;
EQLIB_VAR DWORD pinstCAudioTriggersWindow;
EQLIB_VAR DWORD pinstCCharacterSelect;
EQLIB_VAR DWORD pinstCFacePick;
EQLIB_VAR DWORD pinstCNoteWnd;
EQLIB_VAR DWORD pinstCBookWnd;
EQLIB_VAR DWORD pinstCPetInfoWnd;
EQLIB_VAR DWORD pinstCTrainWnd;
EQLIB_VAR DWORD pinstCSkillsWnd;
EQLIB_VAR DWORD pinstCSkillsSelectWnd;
EQLIB_VAR DWORD pinstCCombatSkillSelectWnd;
EQLIB_VAR DWORD pinstCFriendsWnd;
EQLIB_VAR DWORD pinstCAuraWnd;
EQLIB_VAR DWORD pinstCRespawnWnd;
EQLIB_VAR DWORD pinstCBandolierWnd;
EQLIB_VAR DWORD pinstCPotionBeltWnd;
EQLIB_VAR DWORD pinstCAAWnd;
EQLIB_VAR DWORD pinstCGroupSearchFiltersWnd;
EQLIB_VAR DWORD pinstCLoadskinWnd;
EQLIB_VAR DWORD pinstCAlarmWnd;
EQLIB_VAR DWORD pinstCMusicPlayerWnd;
EQLIB_VAR DWORD pinstCMailWnd;
EQLIB_VAR DWORD pinstCMailCompositionWnd;
EQLIB_VAR DWORD pinstCMailAddressBookWnd;
EQLIB_VAR DWORD pinstCRaidWnd;
EQLIB_VAR DWORD pinstCRaidOptionsWnd;
EQLIB_VAR DWORD pinstCBreathWnd;
EQLIB_VAR DWORD pinstCMapViewWnd;
EQLIB_VAR DWORD pinstCMapToolbarWnd;
EQLIB_VAR DWORD pinstCEditLabelWnd;
EQLIB_VAR DWORD pinstCTargetWnd;
EQLIB_VAR DWORD pinstCColorPickerWnd;
EQLIB_VAR DWORD pinstCPlayerWnd;
EQLIB_VAR DWORD pinstCOptionsWnd;
EQLIB_VAR DWORD pinstCBuffWindowNORMAL;
EQLIB_VAR DWORD pinstCBuffWindowSHORT;
EQLIB_VAR DWORD pinstCharacterCreation;
EQLIB_VAR DWORD pinstCCursorAttachment;
EQLIB_VAR DWORD pinstCCastingWnd;
EQLIB_VAR DWORD pinstCCastSpellWnd;
EQLIB_VAR DWORD pinstCSpellBookWnd;
EQLIB_VAR DWORD pinstCInventoryWnd;
EQLIB_VAR DWORD pinstCBankWnd;
EQLIB_VAR DWORD pinstCQuantityWnd;
EQLIB_VAR DWORD pinstCLootWnd;
EQLIB_VAR DWORD pinstCActionsWnd;
EQLIB_VAR DWORD pinstCCombatAbilityWnd;
EQLIB_VAR DWORD pinstCMerchantWnd;
EQLIB_VAR DWORD pinstCTradeWnd;
EQLIB_VAR DWORD pinstCSelectorWnd;
EQLIB_VAR DWORD pinstCBazaarWnd;
EQLIB_VAR DWORD pinstCBazaarSearchWnd;
EQLIB_VAR DWORD pinstCGiveWnd;
EQLIB_VAR DWORD pinstCTrackingWnd;
EQLIB_VAR DWORD pinstCInspectWnd;
EQLIB_VAR DWORD pinstCSocialEditWnd;
EQLIB_VAR DWORD pinstCFeedbackWnd;
EQLIB_VAR DWORD pinstCBugReportWnd;
EQLIB_VAR DWORD pinstCVideoModesWnd;
EQLIB_VAR DWORD pinstCTextEntryWnd;
EQLIB_VAR DWORD pinstCFileSelectionWnd;
EQLIB_VAR DWORD pinstCCompassWnd;
EQLIB_VAR DWORD pinstCPlayerNotesWnd;
EQLIB_VAR DWORD pinstCGemsGameWnd;
EQLIB_VAR DWORD pinstCTimeLeftWnd;
EQLIB_VAR DWORD pinstCPetitionQWnd;
EQLIB_VAR DWORD pinstCSoulmarkWnd;
EQLIB_VAR DWORD pinstCStoryWnd;
EQLIB_VAR DWORD pinstCJournalTextWnd;
EQLIB_VAR DWORD pinstCJournalCatWnd;
EQLIB_VAR DWORD pinstCBodyTintWnd;
EQLIB_VAR DWORD pinstCServerListWnd;
EQLIB_VAR DWORD pinstCAvaZoneWnd;
EQLIB_VAR DWORD pinstCBlockedBuffWnd;
EQLIB_VAR DWORD pinstCBlockedPetBuffWnd;
EQLIB_VAR DWORD pinstCInvSlotMgr;
EQLIB_VAR DWORD pinstCContainerMgr;
EQLIB_VAR DWORD pinstCAdventureLeaderboardWnd;
EQLIB_VAR DWORD pinstCAdventureRequestWnd;
EQLIB_VAR DWORD pinstCAltStorageWnd;
EQLIB_VAR DWORD pinstCAdventureStatsWnd;
EQLIB_VAR DWORD pinstCBarterMerchantWnd;
EQLIB_VAR DWORD pinstCBarterSearchWnd;
EQLIB_VAR DWORD pinstCBarterWnd;
EQLIB_VAR DWORD pinstCChatManager;
EQLIB_VAR DWORD pinstCDynamicZoneWnd;
EQLIB_VAR DWORD pinstCEQMainWnd;
EQLIB_VAR DWORD pinstCFellowshipWnd;
EQLIB_VAR DWORD pinstCFindLocationWnd;
EQLIB_VAR DWORD pinstCGroupSearchWnd;
EQLIB_VAR DWORD pinstCGroupWnd;
EQLIB_VAR DWORD pinstCGuildBankWnd;
EQLIB_VAR DWORD pinstCGuildMgmtWnd;
EQLIB_VAR DWORD pinstCHotButtonWnd;
EQLIB_VAR DWORD pinstCHotButtonWnd1;
EQLIB_VAR DWORD pinstCHotButtonWnd2;
EQLIB_VAR DWORD pinstCHotButtonWnd3;
EQLIB_VAR DWORD pinstCHotButtonWnd4;
EQLIB_VAR DWORD pinstCItemDisplayManager;
EQLIB_VAR DWORD pinstCItemExpTransferWnd;
EQLIB_VAR DWORD pinstCLFGuildWnd;
EQLIB_VAR DWORD pinstCMIZoneSelectWnd;
EQLIB_VAR DWORD pinstCConfirmationDialog;
EQLIB_VAR DWORD pinstCPopupWndManager;
EQLIB_VAR DWORD pinstCProgressionSelectionWnd;
EQLIB_VAR DWORD pinstCPvPStatsWnd;
EQLIB_VAR DWORD pinstCSystemInfoDialogBox;
EQLIB_VAR DWORD pinstCTargetOfTargetWnd;
EQLIB_VAR DWORD pinstCTaskTemplateSelectWnd;
EQLIB_VAR DWORD pinstCTaskWnd;
EQLIB_VAR DWORD pinstCTipWndOFDAY;
EQLIB_VAR DWORD pinstCTipWndCONTEXT;
EQLIB_VAR DWORD pinstCTitleWnd;
EQLIB_VAR DWORD pinstCContextMenuManager;
EQLIB_VAR DWORD pinstCVoiceMacroWnd;
EQLIB_VAR DWORD pinstCHtmlWnd;

EQLIB_VAR DWORD __CastRay;
EQLIB_VAR DWORD __ConvertItemTags;
EQLIB_VAR DWORD __ExecuteCmd;
EQLIB_VAR DWORD __EQGetTime;
EQLIB_VAR DWORD __get_melee_range;
EQLIB_VAR DWORD __GetGaugeValueFromEQ;
EQLIB_VAR DWORD __GetLabelFromEQ;
EQLIB_VAR DWORD __GetXTargetType;
EQLIB_VAR DWORD __LoadFrontEnd;
EQLIB_VAR DWORD __NewUIINI;
EQLIB_VAR DWORD __ProcessGameEvents;
EQLIB_VAR DWORD CrashDetected;
EQLIB_VAR DWORD DrawNetStatus;
EQLIB_VAR DWORD Util__FastTime;
EQLIB_VAR DWORD Expansion_HoT;

EQLIB_VAR DWORD AltAdvManager__GetCalculatedTimer;
EQLIB_VAR DWORD AltAdvManager__IsAbilityReady;
EQLIB_VAR DWORD AltAdvManager__GetAltAbility;

EQLIB_VAR DWORD CharacterZoneClient__HasSkill;

EQLIB_VAR DWORD CBankWnd__GetNumBankSlots;

EQLIB_VAR DWORD CBazaarSearchWnd__HandleBazaarMsg;

EQLIB_VAR DWORD CButtonWnd__SetCheck;

EQLIB_VAR DWORD CChatManager__GetRGBAFromIndex;
EQLIB_VAR DWORD CChatManager__InitContextMenu;

EQLIB_VAR DWORD CChatService__GetNumberOfFriends;
EQLIB_VAR DWORD CChatService__GetFriendName;

EQLIB_VAR DWORD CRaces_AddModel;

EQLIB_VAR DWORD CChatWindow__CChatWindow;
EQLIB_VAR DWORD CChatWindow__Clear;
EQLIB_VAR DWORD CChatWindow__WndNotification;

EQLIB_VAR DWORD CComboWnd__DeleteAll;
EQLIB_VAR DWORD CComboWnd__Draw;
EQLIB_VAR DWORD CComboWnd__GetCurChoice;
EQLIB_VAR DWORD CComboWnd__GetListRect;
EQLIB_VAR DWORD CComboWnd__GetTextRect;
EQLIB_VAR DWORD CComboWnd__InsertChoice;
EQLIB_VAR DWORD CComboWnd__SetColors;
EQLIB_VAR DWORD CComboWnd__SetChoice;

EQLIB_VAR DWORD CContainerWnd__HandleCombine;
EQLIB_VAR DWORD CContainerWnd__vftable;

EQLIB_VAR DWORD CDisplay__CleanGameUI;
EQLIB_VAR DWORD CDisplay__GetClickedActor;
EQLIB_VAR DWORD CDisplay__GetUserDefinedColor;
EQLIB_VAR DWORD CDisplay__GetWorldFilePath;
EQLIB_VAR DWORD CDisplay__is3dON;
EQLIB_VAR DWORD CDisplay__ReloadUI;
EQLIB_VAR DWORD CDisplay__WriteTextHD2;

EQLIB_VAR DWORD CEditBaseWnd__SetSel;

EQLIB_VAR DWORD CEditWnd__DrawCaret;
EQLIB_VAR DWORD CEditWnd__GetCharIndexPt;
EQLIB_VAR DWORD CEditWnd__GetDisplayString;
EQLIB_VAR DWORD CEditWnd__GetHorzOffset;
EQLIB_VAR DWORD CEditWnd__GetLineForPrintableChar;
EQLIB_VAR DWORD CEditWnd__GetSelStartPt;
EQLIB_VAR DWORD CEditWnd__GetSTMLSafeText;
EQLIB_VAR DWORD CEditWnd__PointFromPrintableChar;
EQLIB_VAR DWORD CEditWnd__SelectableCharFromPoint;
EQLIB_VAR DWORD CEditWnd__SetEditable;

EQLIB_VAR DWORD CEverQuest__ClickedPlayer;
EQLIB_VAR DWORD CEverQuest__DoTellWindow;
EQLIB_VAR DWORD CEverQuest__DropHeldItemOnGround;
EQLIB_VAR DWORD CEverQuest__dsp_chat;
EQLIB_VAR DWORD CEverQuest__Emote;
EQLIB_VAR DWORD CEverQuest__EnterZone;
EQLIB_VAR DWORD CEverQuest__GetBodyTypeDesc;
EQLIB_VAR DWORD CEverQuest__GetClassDesc;
EQLIB_VAR DWORD CEverQuest__GetClassThreeLetterCode;
EQLIB_VAR DWORD CEverQuest__GetDeityDesc;
EQLIB_VAR DWORD CEverQuest__GetLangDesc;
EQLIB_VAR DWORD CEverQuest__GetRaceDesc;
EQLIB_VAR DWORD CEverQuest__InterpretCmd;
EQLIB_VAR DWORD CEverQuest__LeftClickedOnPlayer;
EQLIB_VAR DWORD CEverQuest__LMouseUp;
EQLIB_VAR DWORD CEverQuest__RightClickedOnPlayer;
EQLIB_VAR DWORD CEverQuest__RMouseUp;
EQLIB_VAR DWORD CEverQuest__SetGameState;
EQLIB_VAR DWORD CEverQuest__UPCNotificationFlush;

EQLIB_VAR DWORD CGaugeWnd__CalcFillRect;
EQLIB_VAR DWORD CGaugeWnd__CalcLinesFillRect;
EQLIB_VAR DWORD CGaugeWnd__Draw;

EQLIB_VAR DWORD CGuild__FindMemberByName;

EQLIB_VAR DWORD CHotButtonWnd__DoHotButton;

EQLIB_VAR DWORD CInvSlotMgr__FindInvSlot;
EQLIB_VAR DWORD CInvSlotMgr__MoveItem;

EQLIB_VAR DWORD CInvSlot__HandleRButtonUp;
EQLIB_VAR DWORD CInvSlot__SliderComplete;
EQLIB_VAR DWORD CInvSlot__GetItemBase;

EQLIB_VAR DWORD CInvSlotWnd__DrawTooltip;

EQLIB_VAR DWORD CItemDisplayWnd__SetSpell;
EQLIB_VAR DWORD CItemDisplayWnd__UpdateStrings;

EQLIB_VAR DWORD CLabel__Draw;

EQLIB_VAR DWORD CListWnd__AddColumn;
EQLIB_VAR DWORD CListWnd__AddColumn1;
EQLIB_VAR DWORD CListWnd__AddLine;
EQLIB_VAR DWORD CListWnd__AddString;
EQLIB_VAR DWORD CListWnd__CalculateFirstVisibleLine;
EQLIB_VAR DWORD CListWnd__CalculateVSBRange;
EQLIB_VAR DWORD CListWnd__ClearAllSel;
EQLIB_VAR DWORD CListWnd__CloseAndUpdateEditWindow;
EQLIB_VAR DWORD CListWnd__Compare;
EQLIB_VAR DWORD CListWnd__Draw;
EQLIB_VAR DWORD CListWnd__DrawColumnSeparators;
EQLIB_VAR DWORD CListWnd__DrawHeader;
EQLIB_VAR DWORD CListWnd__DrawItem;
EQLIB_VAR DWORD CListWnd__DrawLine;
EQLIB_VAR DWORD CListWnd__DrawSeparator;
EQLIB_VAR DWORD CListWnd__EnsureVisible;
EQLIB_VAR DWORD CListWnd__ExtendSel;
EQLIB_VAR DWORD CListWnd__GetColumnMinWidth;
EQLIB_VAR DWORD CListWnd__GetColumnWidth;
EQLIB_VAR DWORD CListWnd__GetCurSel;
EQLIB_VAR DWORD CListWnd__GetItemAtPoint;
EQLIB_VAR DWORD CListWnd__GetItemAtPoint1;
EQLIB_VAR DWORD CListWnd__GetItemData;
EQLIB_VAR DWORD CListWnd__GetItemHeight;
EQLIB_VAR DWORD CListWnd__GetItemIcon;
EQLIB_VAR DWORD CListWnd__GetItemRect;
EQLIB_VAR DWORD CListWnd__GetItemText;
EQLIB_VAR DWORD CListWnd__GetSelList;
EQLIB_VAR DWORD CListWnd__GetSeparatorRect;
EQLIB_VAR DWORD CListWnd__RemoveLine;
EQLIB_VAR DWORD CListWnd__SetColors;
EQLIB_VAR DWORD CListWnd__SetColumnJustification;
EQLIB_VAR DWORD CListWnd__SetColumnWidth;
EQLIB_VAR DWORD CListWnd__SetCurSel;
EQLIB_VAR DWORD CListWnd__SetItemColor;
EQLIB_VAR DWORD CListWnd__SetItemData;
EQLIB_VAR DWORD CListWnd__SetItemText;
EQLIB_VAR DWORD CListWnd__ShiftColumnSeparator;
EQLIB_VAR DWORD CListWnd__Sort;
EQLIB_VAR DWORD CListWnd__ToggleSel;

EQLIB_VAR DWORD CMapViewWnd__CMapViewWnd;

EQLIB_VAR DWORD CMerchantWnd__DisplayBuyOrSellPrice;
EQLIB_VAR DWORD CMerchantWnd__RequestBuyItem;
EQLIB_VAR DWORD CMerchantWnd__RequestSellItem;
EQLIB_VAR DWORD CMerchantWnd__SelectBuySellSlot;

EQLIB_VAR DWORD CObfuscator__doit;

EQLIB_VAR DWORD CSidlManager__FindScreenPieceTemplate1;
EQLIB_VAR DWORD CSidlManager__CreateLabel;

EQLIB_VAR DWORD CSidlScreenWnd__CalculateHSBRange;
EQLIB_VAR DWORD CSidlScreenWnd__CalculateVSBRange;
EQLIB_VAR DWORD CSidlScreenWnd__ConvertToRes;
EQLIB_VAR DWORD CSidlScreenWnd__CreateChildrenFromSidl;
EQLIB_VAR DWORD CSidlScreenWnd__CSidlScreenWnd1;
EQLIB_VAR DWORD CSidlScreenWnd__CSidlScreenWnd2;
EQLIB_VAR DWORD CSidlScreenWnd__dCSidlScreenWnd;
EQLIB_VAR DWORD CSidlScreenWnd__DrawSidlPiece;
EQLIB_VAR DWORD CSidlScreenWnd__EnableIniStorage;
EQLIB_VAR DWORD CSidlScreenWnd__GetSidlPiece;
EQLIB_VAR DWORD CSidlScreenWnd__Init1;
EQLIB_VAR DWORD CSidlScreenWnd__LoadIniInfo;
EQLIB_VAR DWORD CSidlScreenWnd__LoadIniListWnd;
EQLIB_VAR DWORD CSidlScreenWnd__LoadSidlScreen;
EQLIB_VAR DWORD CSidlScreenWnd__StoreIniInfo;
EQLIB_VAR DWORD CSidlScreenWnd__StoreIniVis;
EQLIB_VAR DWORD CSidlScreenWnd__WndNotification;
EQLIB_VAR DWORD CSidlScreenWnd__GetChildItem;

EQLIB_VAR DWORD CSkillMgr__IsAvailable;
EQLIB_VAR DWORD CSkillMgr__GetSkillCap;

EQLIB_VAR DWORD CSliderWnd__GetValue;
EQLIB_VAR DWORD CSliderWnd__SetValue;
EQLIB_VAR DWORD CSliderWnd__SetNumTicks;

EQLIB_VAR DWORD CSpellBookWnd__MemorizeSet;

EQLIB_VAR DWORD CStmlWnd__AppendSTML;
EQLIB_VAR DWORD CStmlWnd__CalculateHSBRange;
EQLIB_VAR DWORD CStmlWnd__CalculateVSBRange;
EQLIB_VAR DWORD CStmlWnd__CanBreakAtCharacter;
EQLIB_VAR DWORD CStmlWnd__FastForwardToEndOfTag;
EQLIB_VAR DWORD CStmlWnd__ForceParseNow;
EQLIB_VAR DWORD CStmlWnd__GetNextTagPiece;
EQLIB_VAR DWORD CStmlWnd__GetSTMLText;
EQLIB_VAR DWORD CStmlWnd__GetVisibleText;
EQLIB_VAR DWORD CStmlWnd__InitializeWindowVariables;
EQLIB_VAR DWORD CStmlWnd__MakeStmlColorTag;
EQLIB_VAR DWORD CStmlWnd__MakeWndNotificationTag;
EQLIB_VAR DWORD CStmlWnd__SetSTMLText;
EQLIB_VAR DWORD CStmlWnd__StripFirstSTMLLines;
EQLIB_VAR DWORD CStmlWnd__UpdateHistoryString;

EQLIB_VAR DWORD CTabWnd__Draw;
EQLIB_VAR DWORD CTabWnd__DrawCurrentPage;
EQLIB_VAR DWORD CTabWnd__DrawTab;
EQLIB_VAR DWORD CTabWnd__GetCurrentPage;
EQLIB_VAR DWORD CTabWnd__GetPageInnerRect;
EQLIB_VAR DWORD CTabWnd__GetTabInnerRect;
EQLIB_VAR DWORD CTabWnd__GetTabRect;
EQLIB_VAR DWORD CTabWnd__InsertPage;
EQLIB_VAR DWORD CTabWnd__SetPage;
EQLIB_VAR DWORD CTabWnd__SetPageRect;
EQLIB_VAR DWORD CTabWnd__UpdatePage;

EQLIB_VAR DWORD CTextOverlay__DisplayText;

EQLIB_VAR DWORD CTextureFont__DrawWrappedText;

EQLIB_VAR DWORD CXMLDataManager__GetXMLData;

EQLIB_VAR DWORD CXMLSOMDocumentBase__XMLRead;

EQLIB_VAR DWORD CXStr__CXStr;
EQLIB_VAR DWORD CXStr__CXStr1;
EQLIB_VAR DWORD CXStr__CXStr3;
EQLIB_VAR DWORD CXStr__dCXStr;
EQLIB_VAR DWORD CXStr__operator_equal;
EQLIB_VAR DWORD CXStr__operator_equal1;
EQLIB_VAR DWORD CXStr__operator_plus_equal1;

EQLIB_VAR DWORD CXWnd__BringToTop;
EQLIB_VAR DWORD CXWnd__Center;
EQLIB_VAR DWORD CXWnd__ClrFocus;
EQLIB_VAR DWORD CXWnd__DoAllDrawing;
EQLIB_VAR DWORD CXWnd__DrawChildren;
EQLIB_VAR DWORD CXWnd__DrawColoredRect;
EQLIB_VAR DWORD CXWnd__DrawTooltip;
EQLIB_VAR DWORD CXWnd__DrawTooltipAtPoint;
EQLIB_VAR DWORD CXWnd__GetBorderFrame;
EQLIB_VAR DWORD CXWnd__GetChildWndAt;
EQLIB_VAR DWORD CXWnd__GetClientClipRect;
EQLIB_VAR DWORD CXWnd__GetScreenClipRect;
EQLIB_VAR DWORD CXWnd__GetScreenRect;
EQLIB_VAR DWORD CXWnd__GetTooltipRect;
EQLIB_VAR DWORD CXWnd__GetWindowTextA;
EQLIB_VAR DWORD CXWnd__IsActive;
EQLIB_VAR DWORD CXWnd__IsDescendantOf;
EQLIB_VAR DWORD CXWnd__IsReallyVisible;
EQLIB_VAR DWORD CXWnd__IsType;
EQLIB_VAR DWORD CXWnd__Move;
EQLIB_VAR DWORD CXWnd__Move1;
EQLIB_VAR DWORD CXWnd__ProcessTransition;
EQLIB_VAR DWORD CXWnd__Refade;
EQLIB_VAR DWORD CXWnd__Resize;
EQLIB_VAR DWORD CXWnd__Right;
EQLIB_VAR DWORD CXWnd__SetFocus;
EQLIB_VAR DWORD CXWnd__SetFont;
EQLIB_VAR DWORD CXWnd__SetKeyTooltip;
EQLIB_VAR DWORD CXWnd__SetMouseOver;
EQLIB_VAR DWORD CXWnd__StartFade;
EQLIB_VAR DWORD CXWnd__GetChildItem;

EQLIB_VAR DWORD CXWndManager__DrawCursor;
EQLIB_VAR DWORD CXWndManager__DrawWindows;
EQLIB_VAR DWORD CXWndManager__GetKeyboardFlags;
EQLIB_VAR DWORD CXWndManager__HandleKeyboardMsg;
EQLIB_VAR DWORD CXWndManager__RemoveWnd;

EQLIB_VAR DWORD CDBStr__GetString;

EQLIB_VAR DWORD EQ_Character__CastRay;
EQLIB_VAR DWORD EQ_Character__CastSpell;
EQLIB_VAR DWORD EQ_Character__Cur_HP;
EQLIB_VAR DWORD EQ_Character__GetAACastingTimeModifier;
EQLIB_VAR DWORD EQ_Character__GetCharInfo2;
EQLIB_VAR DWORD EQ_Character__GetFocusCastingTimeModifier;
EQLIB_VAR DWORD EQ_Character__GetFocusRangeModifier;
EQLIB_VAR DWORD EQ_Character__Max_Endurance;
EQLIB_VAR DWORD EQ_Character__Max_HP;
EQLIB_VAR DWORD EQ_Character__Max_Mana;
EQLIB_VAR DWORD EQ_Character__doCombatAbility;
EQLIB_VAR DWORD EQ_Character__UseSkill;
EQLIB_VAR DWORD EQ_Character__GetConLevel;
EQLIB_VAR DWORD EQ_Character__IsExpansionFlag;
EQLIB_VAR DWORD EQ_Character__TotalEffect;

EQLIB_VAR DWORD EQ_Item__CanDrop;
EQLIB_VAR DWORD EQ_Item__CreateItemTagString;
EQLIB_VAR DWORD EQ_Item__IsStackable;

EQLIB_VAR DWORD EQ_LoadingS__SetProgressBar;
EQLIB_VAR DWORD EQ_LoadingS__Array;

EQLIB_VAR DWORD EQ_PC__DestroyHeldItemOrMoney;
EQLIB_VAR DWORD EQ_PC__GetAltAbilityIndex;
EQLIB_VAR DWORD EQ_PC__GetCombatAbility;
EQLIB_VAR DWORD EQ_PC__GetCombatAbilityTimer;
EQLIB_VAR DWORD EQ_PC__GetItemTimerValue;
EQLIB_VAR DWORD EQ_PC__HasLoreItem;

EQLIB_VAR DWORD EQItemList__EQItemList;
EQLIB_VAR DWORD EQItemList__add_item;
EQLIB_VAR DWORD EQItemList__delete_item;
EQLIB_VAR DWORD EQItemList__FreeItemList;

EQLIB_VAR DWORD EQMisc__GetActiveFavorCost;

EQLIB_VAR DWORD EQPlayer__ChangeBoneStringSprite;
EQLIB_VAR DWORD EQPlayer__dEQPlayer;
EQLIB_VAR DWORD EQPlayer__DoAttack;
EQLIB_VAR DWORD EQPlayer__EQPlayer;
EQLIB_VAR DWORD EQPlayer__SetNameSpriteState;
EQLIB_VAR DWORD EQPlayer__SetNameSpriteTint;
EQLIB_VAR DWORD EQPlayer__IsBodyType_j;
EQLIB_VAR DWORD EQPlayer__IsTargetable;

EQLIB_VAR DWORD EQPlayerManager__GetSpawnByID;
EQLIB_VAR DWORD EQPlayerManager__GetSpawnByName;

EQLIB_VAR DWORD KeypressHandler__AttachAltKeyToEqCommand;
EQLIB_VAR DWORD KeypressHandler__AttachKeyToEqCommand;
EQLIB_VAR DWORD KeypressHandler__ClearCommandStateArray;
EQLIB_VAR DWORD KeypressHandler__HandleKeyDown;
EQLIB_VAR DWORD KeypressHandler__HandleKeyUp;
EQLIB_VAR DWORD KeypressHandler__SaveKeymapping;

EQLIB_VAR DWORD MapViewMap__Clear;
EQLIB_VAR DWORD MapViewMap__SaveEx;

EQLIB_VAR DWORD PlayerPointManager__GetAltCurrency;

EQLIB_VAR DWORD StringTable__getString;

EQLIB_VAR DWORD PcZoneClient__GetPcSkillLimit;


}
using namespace MQ2Globals;


