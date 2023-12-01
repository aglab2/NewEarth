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
#include "levels/ddd/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ddd_segment_7SegmentRomStart, _ddd_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB_DOOR, ddd_geo_000478), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_BOWSER_SUB, ddd_geo_0004A0), 
	LOAD_MODEL_FROM_GEO(MODEL_DDD_POLE, ddd_geo_000450), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ddd_area_1),
		WARP_NODE(241, LEVEL_DDD, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_DDD, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_DDD, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_DDD, 3, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_DDD, 3, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_DDD, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_DDD, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_DDD, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_DDD, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 100, WARP_NO_CHECKPOINT),
		OBJECT(101, 5064, 517, -1976, 0, 90, 0, 0x1000000, bhvBigChillBully),
		OBJECT(140, 7724, 56, -28, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(195, -190, 256, -3402, 0, 0, 0, 0x450000, bhvBobombBuddy),
		OBJECT(195, -7727, 2551, -7578, 0, 0, 0, 0x440000, bhvBobombBuddy),
		OBJECT(0, -8536, 688, 4426, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -9597, 688, -857, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6753, 688, -6490, 0, 70, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -5020, 1085, 1486, 0, 50, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6543, 1606, -2030, 0, 50, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -7047, 2298, -5572, 0, -20, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -4405, 2689, -6397, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -513, 280, -3852, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 1315, -261, 1575, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -2105, 362, 3148, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 722, -355, 3171, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(0, -497, 256, -4560, 0, 0, 0, 0x500000, bhvDeathWarp),
		OBJECT(0, -6813, 688, 4417, 0, 90, 0, 0x5a0000, bhvDeathWarp),
		OBJECT(41, -7061, 688, 4414, 0, 90, 0, 0xa0000, bhvDoorWarp),
		OBJECT(41, -1753, 256, -3274, 0, -180, 0, 0x320000, bhvDoorWarp),
		OBJECT(41, 726, 256, -3056, 0, -180, 0, 0x3c0000, bhvDoorWarp),
		OBJECT(41, -441, 256, -5122, 0, -180, 0, 0x460000, bhvDoorWarp),
		OBJECT(144, -513, 280, -3852, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(144, -7695, 2551, -7292, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(0, -3131, 509, 3416, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 1010, -212, 1307, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, 7962, 57, -1251, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8200, 57, -884, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8440, 57, -1273, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8545, 57, 912, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8302, 57, 510, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8786, 57, 516, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(124, -6332, 688, 3962, 0, 0, 0, 0x3e0000, bhvMessagePanel),
		OBJECT(116, 4670, 56, 2163, 0, 0, 0, 0x0, bhvMoneybagHidden),
		OBJECT(85, 8659, 224, -5498, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 8283, 224, -5036, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 7833, 224, -5526, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 8237, 224, -6024, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -7277, 688, 5803, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -7921, 688, 2860, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -5022, 688, -3234, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -4160, 688, 421, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -1326, 300, 2009, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -2933, 491, -1629, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, -2204, 256, -6314, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 951, 256, -5233, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 3150, 56, -4590, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 8137, 56, -2292, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 7002, 56, 1574, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(85, 1725, -354, 3500, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(87, 8334, 224, -5642, 0, 0, 0, 0x0, bhvSmallPenguin),
		// OBJECT(122, -4115, 3476, -8078, 0, 0, 0, 0x0, bhvStar),
		OBJECT(87, -9140, 688, -6212, 0, 90, 0, 0x2000000, bhvTuxiesMother),
		OBJECT(0, 238, -524, 3585, 0, 0, 0, 0x32140000, bhvWarp),
		OBJECT(0, -2814, 297, -7489, 0, 0, 0, 0x280000, bhvWarp),
		
		OBJECT(122, 991, 817, 3689, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 5066, 120, -1980, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -9136, 741, -6215, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(ddd_area_1_collision),
		MACRO_OBJECTS(ddd_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 8),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ddd_area_2),
		WARP_NODE(241, LEVEL_DDD, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_DDD, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		OBJECT(0, -10200, 1566, 0, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 9289, 408, -5, 0, 0, 0, 0x1e140000, bhvWarp),
		
		OBJECT(122, -3990, 1434, -1334, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(ddd_area_2_collision),
		MACRO_OBJECTS(ddd_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 40),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ddd_area_3),
		WARP_NODE(241, LEVEL_DDD, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_DDD, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_DDD, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_DDD, 1, 50, WARP_NO_CHECKPOINT),
		OBJECT(195, 3027, 168, 414, 0, 0, 0, 0x460000, bhvBobombBuddy),
		OBJECT(41, 2623, 0, -1147, 0, 0, 0, 0xa0000, bhvDoorWarp),
		OBJECT(41, -2417, 0, -826, 0, 0, 0, 0x140000, bhvDoorWarp),
		OBJECT(41, -96, 0, 1893, 0, 0, 0, 0x1e0000, bhvDoorWarp),
		OBJECT(137, -609, 497, 2570, 0, 0, 0, 0x20000, bhvExclamationBox),
		// OBJECT(215, -72, -1008, -1711, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -1047, -1008, -357, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2084, -1008, 1648, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 260, -1008, 631, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 922, -1008, -370, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1607, -1008, 1644, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -76, -1008, 2661, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 2178, 224, 260, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(122, -406, -880, 1635, 0, 0, 0, 0x5000000, bhvStar),
		
		OBJECT(122, 2618, 1417, 1224, 0, 0, 0, 0x4000000, bhvStar),
	
		TERRAIN(ddd_area_3_collision),
		MACRO_OBJECTS(ddd_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 53),
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
