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
#include "levels/cotmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_cotmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _cotmc_segment_7SegmentRomStart, _cotmc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, cotmc_area_1),
		WARP_NODE(241, LEVEL_COTMC, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_COTMC, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_COTMC, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_COTMC, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_COTMC, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_COTMC, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_WF, 1, 70, WARP_NO_CHECKPOINT),
		OBJECT(85, -2172, 1805, 5997, 0, 90, 0, 0x10000, bhvCapSwitch),
		OBJECT(195, -2359, 405, 5051, 0, 90, 0, 0x230000, bhvBobombBuddy),
		OBJECT(0, 1740, -87, -2171, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -688, -93, -218, 0, -56, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1967, 469, 3022, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1196, 825, 4865, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 4276, 685, 4604, 0, -180, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, 4560, 2925, 2915, 0, 0, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, 4524, 3205, 5421, 0, 0, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, 2103, 50, -2803, 0, 0, 0, 0x280000, bhvDeathWarp),
		OBJECT(31, -2591, 405, 5178, 0, 0, 0, 0x63000000, bhvDoor),
		OBJECT(137, -3290, 3516, -4402, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, -2909, 357, -3768, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, 2940, 219, -2976, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, 1998, 219, 2015, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, 4563, 603, 6563, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, 78, 1195, 5164, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(137, -6229, 285, 2597, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(0, -2455, 0, 6552, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, -3929, 3207, -3608, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(124, 1918, -195, -840, 0, -180, 0, 0x210000, bhvMessagePanel),
		// OBJECT(215, 2731, -195, -3645, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1592, -195, 1874, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 4280, 965, 2354, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2865, 2365, 6004, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -6214, 29, 3648, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -4674, -195, -193, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2853, -67, -5138, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 634, -155, 6285, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -2589, 405, 4979, 0, -180, 0, 0x3c0000, bhvSpinAirborneWarp),
		// OBJECT(122, 4551, 3605, 6002, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(0, -2592, 405, 5404, 0, 0, 0, 0x320000, bhvWarp),
		OBJECT(22, 2107, 50, -3317, 0, 0, 0, 0xa0000, bhvWarpPipe),
		
		OBJECT(122, -1341, 1335, 5999, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 2683, 3158 + 20, 311, 0, 0, 0, 0x1000000, bhvStar),

		TERRAIN(cotmc_area_1_collision),
		MACRO_OBJECTS(cotmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 7),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, cotmc_area_2),
		WARP_NODE(241, LEVEL_CASTLE, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_COTMC, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		WARP_NODE(21, LEVEL_CASTLE, 1, 0xa, WARP_NO_CHECKPOINT),
		OBJECT(41, -28, 0, -416, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(124, 699, 0, -1531, 0, 0, 0, 0x40000, bhvMessagePanel),
		OBJECT(0, 192, 0, -423, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 1132, 0, -1405, 0, 90, 0, 0x150000, bhvFadingWarp),
		OBJECT(0, 1132, 0, -1405, 0, 90, 0, 0x150000, bhvEmitter_MOP),
		TERRAIN(cotmc_area_2_collision),
		MACRO_OBJECTS(cotmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0),
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
