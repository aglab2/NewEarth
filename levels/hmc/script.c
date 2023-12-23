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
#include "levels/hmc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_hmc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _cave_yay0SegmentRomStart, _cave_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _hmc_segment_7SegmentRomStart, _hmc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _c6_skybox_mio0SegmentRomStart, _c6_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, hmc_area_1),
		WARP_NODE(241, LEVEL_HMC, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_HMC, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_HMC, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_HMC, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_HMC, 2, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_HMC, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_HMC, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_HMC, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 30, WARP_NO_CHECKPOINT),
		OBJECT(140, 6733, -222, 1206, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(188, 2667, -400, -8739, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(195, -2331, -31, 1491, 0, -180, 0, 0x20000, bhvBobombBuddy),
		OBJECT(195, -2766, -381, 915, 0, 0, 0, 0x10000, bhvBobombBuddy),
		OBJECT(195, -2158, -381, 632, 0, 0, 0, 0x30000, bhvBobombBuddy),
		OBJECT(88, -1584, -381, -4145, 0, 0, 0, 0x0, bhvClamShell),
		OBJECT(88, 2617, -894, -2012, 0, -180, 0, 0x0, bhvClamShell),
		OBJECT(88, 3907, 1097, 7760, 0, -180, 0, 0x0, bhvClamShell),
		OBJECT(88, -3065, -31, 2699, 0, -180, 0, 0x0, bhvClamShell),
		OBJECT(88, 6515, -381, -3026, 0, 0, 0, 0x0, bhvClamShell),
		OBJECT(0, -1303, 481, 4023, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 49, 777, 5777, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 5391, -31, 4046, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -2353, -31, 1044, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 3966, 310, 3679, 0, -8, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 7147, 244, 3503, 0, -18, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 6095, 860, 5861, 0, -26, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3542, -31, -310, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 479, -381, -542, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2225, -582, 4282, 0, -6, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3715, 1005, 5678, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4811, 904, 5516, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2681, -400, -10256, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2679, 2000, -9177, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -340, 554, -1665, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -701, 554, -3073, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -2001, -31, -178, 0, 90, 0, 0x280000, bhvDeathWarp),
		OBJECT(0, 7759, -31, 240, 0, 0, 0, 0x3c0000, bhvDeathWarp),
		OBJECT(0, 2325, -400, -11475, 0, 0, 0, 0x500000, bhvDeathWarp),
		OBJECT(41, 2332, -400, -11680, 0, 0, 0, 0x460000, bhvDoorWarp),
		OBJECT(137, 2666, 168, -7359, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(144, 5393, -7, 4043, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(144, -2357, -7, 1031, 0, 0, 0, 0x0, bhvFlame),
		OBJECT(207, 4331, 1097, 7049, 0, -22, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(207, 2423, 200, -11944, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		// OBJECT(0, -2349, -31, 1045, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, 7065, 119, -450, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8020, 127, -1044, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8349, 94, 35, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 7065, 227, -450, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8020, 228, -1044, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 8349, 194, 35, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, 5746, 48, -431, 0, 50, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 5376, 250, -749, 0, 50, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 5351, 694, -1841, 0, 50, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 5637, 958, -2165, 0, 50, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 350, -11328, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 550, -11128, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 750, -10928, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 750, -10728, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 950, -10528, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 950, -10328, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 950, -10128, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 950, -9328, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 950, -9128, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 1150, -8928, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2251, 1150, -8728, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2451, 1150, -8728, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2651, 1350, -8728, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 2851, 1550, -8728, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(124, 6342, -31, 0, 0, 90, 0, 0x360000, bhvMessagePanel),
		OBJECT(152, 2654, 2642, -10158, 0, 0, 0, 0x0, bhvShrink_Platform_MOP),
		OBJECT(152, 2654, 2896, -10497, 0, 0, 0, 0x0, bhvShrink_Platform_MOP),
		OBJECT(0, -2001, -31, -178, 0, 90, 0, 0x1e0000, bhvSpinAirborneWarp),
		// OBJECT(122, 6182, 1564, -2634, 0, 0, 0, 0x1000000, bhvStar),
		// OBJECT(122, -2726, 3643, -178, 0, 0, 0, 0x5000000, bhvStar),
		// OBJECT(122, 2660, 3415, -11002, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(0, -2532, 324, -176, 0, 0, 0, 0xa140000, bhvWarp),
		OBJECT(0, -2726, 3146, -178, 0, 0, 0, 0x320000, bhvWarp),
		OBJECT(22, 7785, -31, -240, 0, 0, 0, 0xa0000, bhvWarpPipe),
		
		OBJECT(122, 5393, -42, 4043, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 2633, 2015, -10744, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -2989, 2058, -601, 0, 0, 0, 0x4000000, bhvStar),

		TERRAIN(hmc_area_1_collision),
		MACRO_OBJECTS(hmc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 39),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, hmc_area_2),
		WARP_NODE(241, LEVEL_HMC, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_HMC, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_HMC, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_HMC, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		OBJECT(123, 0, 296, 0, 0, 0, 0, 0x870000, bhvNoteblock_MOP),
		OBJECT(123, 0, 7701, 0, 0, 0, 0, 0x640000, bhvNoteblock_MOP),
		// OBJECT(215, -1155, 2768, 0, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 0, 1148, 0, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 570, 3168, 986, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 573, 6264, -1002, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1019, 5176, 0, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1242, 3657, 0, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -1164, 4896, 0, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 577, 3744, -983, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -1140, 0, 0, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, -1571, 159, 0, 0, 0, 0, 0xa140000, bhvWarp),
		OBJECT(0, 0, 8850, 0, 0, 0, 0, 0x1e1e0000, bhvWarp),
		
		OBJECT(122, 1218, 2352, 10, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, 0, 7186, 0, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(hmc_area_2_collision),
		MACRO_OBJECTS(hmc_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 39),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, hmc_area_3),
		WARP_NODE(241, LEVEL_HMC, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_HMC, 1, 70, WARP_NO_CHECKPOINT),
		OBJECT(41, 445, -150, 2410, 0, -180, 0, 0xa0000, bhvDoorWarp),
		OBJECT(120, 184, -583, -288, 0, 0, 0, 0x0, bhvRecoveryHeart),
		// OBJECT(0, 0, -240, 0, 0, 0, 0, 0x3000000, bhvTreasureChestsJrb),
		
		OBJECT(122, -838, 615, 2522, 0, 0, 0, 0x5000000, bhvStar),

		TERRAIN(hmc_area_3_collision),
		MACRO_OBJECTS(hmc_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 46),
		TERRAIN_TYPE(TERRAIN_SPOOKY),
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
