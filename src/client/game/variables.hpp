#pragma once

#define WEAK __declspec(selectany)

constexpr auto MAX_STRING_CHARS = 1024;
constexpr auto MAX_WEAPONS = 64;

constexpr auto CVAR_ARCHIVE = 1;
constexpr auto CVAR_LATCH = 32;

constexpr auto KEYCATCH_CONSOLE = 0x0001;
constexpr auto KEYCATCH_UI = 0x0002;
constexpr auto KEYCATCH_MESSAGE = 0x0004;
constexpr auto KEYCATCH_CGAME = 0x0008;

constexpr auto YAW = 1;

constexpr auto EF_MG42_ACTIVE = 0xc000;

namespace game
{
	WEAK symbol<int> cls_keyCatchers{ 0, 0x0155f2c4 };
	WEAK symbol<int> ping{ 0, 0x41405d };
	WEAK symbol<HWND> hWnd{ 0, 0x16C35E8 };
	WEAK symbol<int> cmd_argc{ 0, 0x008930f0 };
	WEAK symbol<char*> cmd_argv{ 0, 0x00890bf0 };
	WEAK symbol<float> viewangles{ 0, 0x0143a9a0 };
	WEAK symbol<float> cg_zoomSensitivity{ 0, 0x3020b5f4, BASE_CGAME_MP };
	WEAK symbol<float> ads_progress{ 0, 0x30207214, BASE_CGAME_MP }; // Between 0 and 1
	WEAK symbol<float> fov_visible{ 0, 0x3020958c, BASE_CGAME_MP }; // Not the cg_fov cvar value
	WEAK symbol<float> cg_fov_value{ 0, 0x30298c68, BASE_CGAME_MP };
	WEAK symbol<pmove_t*> pm{ 0, 0x3019d570, BASE_CGAME_MP };
	WEAK symbol<weaponInfo_t[MAX_WEAPONS]> cg_weapons{ 0, 0x300eef3c, BASE_CGAME_MP };
	WEAK symbol<qboolean> refreshActive{ 0, 0x401EA698, BASE_UI_MP };
	WEAK symbol<qboolean> clc_demoplaying{ 0, 0x015ef004 };
	WEAK symbol<vm_t*> cgvm{ 0, 0x01617348 };

	WEAK symbol<int> vidWidth{ 0, 0x16C3AE4 };
	WEAK symbol<int> vidHeight{ 0, 0x16C3AE8 };
	WEAK symbol<int> glconfig_vidWidth{ 0, 0x15CA614 };
	WEAK symbol<int> glconfig_vidHeight{ 0, 0x15CA618 };

	//WEAK symbol<connstate_t> cls_state{ 0, 0x155F2C0 };
	//WEAK symbol<vm_t*> uivm{ 0, 0x0161747c };
}