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
#include "levels/sl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _sl_segment_7SegmentRomStart, _sl_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TRIANGLE, sl_geo_000390), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE, sl_geo_000360), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_CRACKED_ICE_CHUNK, sl_geo_000378), 
	LOAD_MODEL_FROM_GEO(MODEL_SL_SNOW_TREE, snow_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sl_area_1),
		WARP_NODE(241, LEVEL_SL, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_SL, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_SL, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_SL, 3, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_SL, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_SL, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_SL, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_SL, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_SL, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SL, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 60, WARP_NO_CHECKPOINT),
		OBJECT(140, -12, 32, -1613, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(0, 0, 1020, 4417, 0, -180, 0, 0x1e5a0000, bhvDeathWarp),
		OBJECT(0, 0, 200, -4909, 0, 0, 0, 0x640000, bhvDeathWarp),
		OBJECT(38, -4, 200, -5149, 0, 0, 0, 0xa0000, bhvDoorWarp),
		OBJECT(38, 1, -600, 2015, 0, 0, 0, 0x140000, bhvDoorWarp),
		OBJECT(137, 0, 1351, 3191, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(137, -5014, 696, -3539, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(0, 1, 1860, 2012, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(0, 1, 1860, 2012, 0, 0, 0, 0x320000, bhvFadingWarp),
		OBJECT(0, 1, 1860, 2012, 0, 0, 0, 0x3c0000, bhvFadingWarp),
		OBJECT(0, -2199, 1005, 3200, 0, 0, 0, 0x460000, bhvFadingWarp),
		OBJECT(0, 2193, 1000, 3197, 0, 0, 0, 0x500000, bhvFadingWarp),
		OBJECT(207, -6016, -400, -1593, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(118, 550, -40, -1613, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -555, -40, -1623, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 0, -40, -1073, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -4, -40, -2173, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 550, -40, -1613, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 550, -40, -1613, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 550, -40, -1613, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 550, -40, -1613, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -555, -40, -1623, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -555, -40, -1623, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -555, -40, -1623, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -555, -40, -1623, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 0, -40, -1073, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 0, -40, -1073, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 0, -40, -1073, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 0, -40, -1073, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -4, -40, -2173, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -4, -40, -2173, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -4, -40, -2173, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -4, -40, -2173, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, -6738, 200, -1589, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -6738, 200, -1789, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -6738, 200, -1389, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(124, 2701, 0, -1647, 0, -90, 0, 0x2b0000, bhvMessagePanel),
		OBJECT(124, 4684, 0, -3760, 0, 0, 0, 0x2c0000, bhvMessagePanel),
		OBJECT(124, 8142, 0, -1505, 0, -90, 0, 0x2d0000, bhvMessagePanel),
		OBJECT(124, 6061, 800, -2731, 0, 0, 0, 0x2e0000, bhvMessagePanel),
		OBJECT(124, 0, 0, -2842, 0, -180, 0, 0x380000, bhvMessagePanel),
		OBJECT(85, 4618, 330, 3042, 0, 0, 0, 0x10000, bhvMontyMole),
		OBJECT(85, 6310, 330, 3422, 0, 0, 0, 0x10000, bhvMontyMole),
		OBJECT(84, 3637, 1000, 2285, 0, 0, 0, 0x0, bhvMontyMoleHole),
		OBJECT(84, 3940, 1000, 4196, 0, 0, 0, 0x0, bhvMontyMoleHole),
		OBJECT(84, 5538, 1000, 4752, 0, 0, 0, 0x0, bhvMontyMoleHole),
		OBJECT(84, 7148, 1000, 3653, 0, 0, 0, 0x0, bhvMontyMoleHole),
		OBJECT(84, 6548, 1000, 2329, 0, 0, 0, 0x0, bhvMontyMoleHole),
		OBJECT(84, 5224, 1000, 1467, 0, 0, 0, 0x0, bhvMontyMoleHole),
		// OBJECT(215, -5026, 820, 4929, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -3596, 820, 3193, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -4588, 820, 1613, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -7610, 820, 4680, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -6707, 820, 1634, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -7581, 820, 2939, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -5522, 820, 3814, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(215, -5745, 820, 2334, 0, 0, 0, 0x14000e, bhvRedCoin),
		// OBJECT(122, 0, 1204, -6074, 0, 0, 0, 0x5000000, bhvStar),
		// OBJECT(122, 6094, 1174, -1597, 0, 0, 0, 0x0, bhvStar),
		// OBJECT(122, -7516, 1192, -1595, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(23, 4865, 1000, 4724, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 3648, 1000, 3537, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 5542, 1000, 1443, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 7009, 1000, 2361, 0, 0, 0, 0x0, bhvTree),
		OBJECT(23, 6735, 1000, 4254, 0, 0, 0, 0x0, bhvTree),
		OBJECT(0, 0, 1020, 5203, 0, 0, 0, 0x1e1e0000, bhvWarp),
		
		OBJECT(122, 6, 530, 1967, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 7503, 1042, 3818, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -2701, 526, 3205, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(sl_area_1_collision),
		MACRO_OBJECTS(sl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 48),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, sl_area_2),
		WARP_NODE(241, LEVEL_CASTLE, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_VCUTM, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_SL, 1, 20, WARP_NO_CHECKPOINT),
		OBJECT(38, 616, 0, 2, 0, -90, 0, 0xa0000, bhvDoorWarp),
		OBJECT(0, -2105, 0, 5, 0, 90, 0, 0x140000, bhvWarp),
		TERRAIN(sl_area_2_collision),
		MACRO_OBJECTS(sl_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, sl_area_3),
		WARP_NODE(241, LEVEL_SL, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_SL, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_SL, 3, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SL, 3, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 10, WARP_NO_CHECKPOINT),
		OBJECT(0, -601, -2800, 99, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 1786, 719, -1707, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(0, -1799, 0, -1701, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(207, -1823, 0, 1772, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(129, 0, -276, 0, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 200, -276, 0, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 400, -276, 0, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 400, -276, 200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 200, -276, 400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 0, -276, 400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -200, -276, 400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -400, -276, 200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -400, -276, 0, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -400, -276, -200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -200, -276, -400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -200, -276, -400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 0, -276, -400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 200, -276, -400, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 400, -276, -200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 200, -276, -200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 0, -276, -200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -200, -276, -200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -200, -276, 0, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -200, -276, 200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 0, -276, 200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 200, -276, 200, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(0, 0, -42, 0, 0, 0, 0, 0x4010000, bhvMrI),
		OBJECT(0, 0, 0, -2032, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),

		OBJECT(122, -2245, 876, 40, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(sl_area_3_collision),
		MACRO_OBJECTS(sl_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 22),
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
