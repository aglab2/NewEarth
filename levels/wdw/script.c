#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wdw/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wdw_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wdw_segment_7SegmentRomStart, _wdw_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _c4_skybox_mio0SegmentRomStart, _c4_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_SQUARE_FLOATING_PLATFORM, wdw_geo_000580), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_ARROW_LIFT, wdw_geo_000598), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_WATER_LEVEL_DIAMOND, wdw_geo_0005C0), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_HIDDEN_PLATFORM, wdw_geo_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_EXPRESS_ELEVATOR, wdw_geo_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_RECTANGULAR_FLOATING_PLATFORM, wdw_geo_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_WDW_ROTATING_PLATFORM, wdw_geo_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wdw_area_1),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_WDW, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_WDW, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_WDW, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_WDW, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 1, 70, WARP_NO_CHECKPOINT),
		OBJECT(140, -1890, 353, 1063, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		// OBJECT(195, 6880, 168, 5034, 0, 0, 0, 0x480000, bhvBobombBuddy),
		// OBJECT(195, 4296, 145, -8912, 0, 0, 0, 0x470000, bhvBobombBuddy),
		OBJECT(0, 6438, 1200, -4903, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 4253, 1200, -5344, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3937, 1200, -6199, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2995, 1400, -1807, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1344, -353, -1545, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2589, -51, -2825, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 9351, 0, -3260, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 6231, 0, -9099, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -1476, 229, -6816, 0, 90, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 5999, 120, 6861, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 6006, 158, 2677, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2285, 1400, 44, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(0, 15216, -680, -3589, 0, -90, 0, 0x320000, bhvDeathWarp),
		OBJECT(41, 2290, 1400, -121, 0, 0, 0, 0x140000, bhvDoorWarp),
		// OBJECT(0, -1790, 433, 6264, 0, 0, 0, 0xe0000, bhvExclamationBox),
		OBJECT(118, -1802, 155, -549, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1810, 172, -848, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1816, 256, -1197, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1821, 358, -1627, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1827, 472, -2031, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1832, 610, -2448, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(124, 4570, 71, -5271, 0, 0, 0, 0x310000, bhvMessagePanel),
		OBJECT(124, 8080, 39, 930, 0, -180, 0, 0x580000, bhvMessagePanel),
		// OBJECT(215, 2676, 600, 2646, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 4574, 620, 3425, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 5887, 604, 4294, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 7350, 622, 3280, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 7219, 559, 7504, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1212, 583, 6282, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 3417, 506, 7904, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 4767, 608, 6294, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(122, 8082, 2618, 1064, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(0, 4311, 183, -4286, 0, 0, 0, 0xa0000, bhvWarp),
		OBJECT(22, 15564, -719, -3584, 0, -90, 0, 0x280000, bhvWarpPipe),
		
		OBJECT(122, 2290, 3213, -2585, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, -1608, 1619, -5495, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, 10267, 1201, 8454, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(wdw_area_1_collision),
		MACRO_OBJECTS(wdw_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x40),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, wdw_area_2),
		WARP_NODE(241, LEVEL_WDW, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(0, LEVEL_WDW, 2, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_WDW, 1, 20, WARP_NO_CHECKPOINT),
		OBJECT(0, 1921, 2700, -2243, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1457, 756, -1945, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(41, 1929, 2700, -3649, 0, -180, 0, 0xa0000, bhvDoorWarp),
		OBJECT(137, 2095, 26, -690, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(137, 620, 3257, -3115, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(207, 1189, -1056, -773, 0, 0, 0, 0x0, bhvFloorSwitchAnimatesObject),
		OBJECT(0, 2107, -3, -3202, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 2098, 1945, -709, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		
		OBJECT(122, 1457, 2326 - 50, -1945, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(wdw_area_2_collision),
		MACRO_OBJECTS(wdw_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x40),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, wdw_area_3),
		WARP_NODE(241, LEVEL_WDW, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_WDW, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_WDW, 1, 40, WARP_NO_CHECKPOINT),
		// OBJECT(122, 5443, 4244, 1450, 0, 0, 0, 0x4000000, bhvStar),
		OBJECT(22, -108, -381, 6755, 0, -179, 0, 0xa0000, bhvWarpPipe),
		OBJECT(22, 6009, 3968, 1447, 0, -90, 0, 0x140000, bhvWarpPipe),
		
		OBJECT(122, 3751, -286, -528, 0, 0, 0, 0x4000000, bhvStar),

		TERRAIN(wdw_area_3_collision),
		MACRO_OBJECTS(wdw_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x40),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
