#include "core_bazaar.h"
#include "core_map.h"
#include "core_npc.h"
#include "core_zone.h"
#include "core_luclin_models.h"
#include "_options.h"

// InitOptions is called during the initialization of this hook
void InitOptions() {
	if (areLuclinModelsDisabled) DisableLuclinModels();
	if (isMapWindowDisabled) DisableCMapViewWnd();
	if (areCustomZonesEnabled) InjectCustomZones();
	if (areCustomNPCsEnabled) {
		InjectCustomNPCs();
		InjectNPCIsAMount();
	}
	if (isBazaarWindowDisabled) DisableCBazaarSearchWnd();
}