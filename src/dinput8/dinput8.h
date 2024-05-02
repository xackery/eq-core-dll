#pragma once

#define INITGUID

#define DIRECTINPUT_VERSION 0x0800
#include <dinput.h>

class m_IDirectInput8A;
class m_IDirectInput8W;
class m_IDirectInputDevice8A;
class m_IDirectInputDevice8W;
class m_IDirectInputEffect;

#include "AddressLookupTable.h"

typedef HRESULT(WINAPI* DirectInput8CreateProc)(HINSTANCE, DWORD, REFIID, LPVOID*, LPUNKNOWN);
typedef HRESULT(WINAPI* DllCanUnloadNowProc)();
typedef	HRESULT(WINAPI* DllGetClassObjectProc)(REFCLSID, REFIID, LPVOID*);
typedef HRESULT(WINAPI* DllRegisterServerProc)();
typedef HRESULT(WINAPI* DllUnregisterServerProc)();
typedef	LPCDIDATAFORMAT(WINAPI* GetdfDIJoystickProc)();

void genericQueryInterface(REFIID CalledID, LPVOID* ppvObj);
extern AddressLookupTable<void> ProxyAddressLookupTable;

#include "IDirectInput8A.h"
#include "IDirectInput8W.h"
#include "IDirectInputDevice8A.h"
#include "IDirectInputDevice8W.h"
#include "IDirectInputEffect.h"
#include "IDirectInputEnumDevice.h"
#include "IDirectInputEnumEffect.h"
#include "IClassFactory.h"
