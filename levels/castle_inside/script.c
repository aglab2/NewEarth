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
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x05, _group7_yay0SegmentRomStart, _group7_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group7_geoSegmentRomStart, _group7_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _c4_skybox_mio0SegmentRomStart, _c4_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_8), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_HMC_METAL_DOOR, metal_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_CASTLE, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_ENDING, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 1, 0, WARP_NO_CHECKPOINT),
		// OBJECT(195, -363, 0, 1903, 0, 0, 0, 0x4d0000, bhvBobombBuddy),
		// OBJECT(195, 249, 0, 2362, 0, 0, 0, 0x4c0000, bhvBobombBuddy),
		// OBJECT(195, -24, 80, -716, 0, 0, 0, 0x520000, bhvBobombBuddy),
		OBJECT(0, -34, 0, 3875, 0, -180, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(0, -34, 0, 3875, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, -49, 361, -122, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(22, -9, 0, -4136, 0, 0, 0, 0x140000, bhvWarpPipe),
		
		TERRAIN(castle_inside_area_1_collision),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 58),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, castle_inside_area_2),
		WARP_NODE(241, LEVEL_CASTLE, 2, 110, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(150, LEVEL_CASTLE, 2, 150, WARP_NO_CHECKPOINT),
		WARP_NODE(140, LEVEL_CASTLE, 2, 140, WARP_NO_CHECKPOINT),
		WARP_NODE(130, LEVEL_CASTLE, 2, 130, WARP_NO_CHECKPOINT),
		WARP_NODE(120, LEVEL_BITFS, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(110, LEVEL_CASTLE, 2, 110, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_CASTLE, 2, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_DDD, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_CASTLE_COURTYARD, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_CASTLE_COURTYARD, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_SL, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_SSL, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_LLL, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_HMC, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_CASTLE_COURTYARD, 5, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 5, 40, WARP_NO_CHECKPOINT),
		OBJECT(188, 4577, 1572, 605, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(195, -6897, 1800, -5309, 0, 0, 0, 0x530000, bhvBobombBuddy),
		OBJECT(0, 2817, 2855, 2893, 0, 103, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8724, 1657, -8164, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 5421, 1745, -10227, 0, -48, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -144, 1635, -2982, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -2984, 1702, -564, 0, 67, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 936, 2893, 3714, 0, -45, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 5598, 2135, 1990, 0, -57, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2967, 1472, -974, 0, 0, 0, 0x6e0000, bhvDeathWarp),
		OBJECT(0, 2728, 1840, -6062, 0, 0, 0, 0x820000, bhvDeathWarp),
		OBJECT(0, -3285, 1472, -5920, 0, 0, 0, 0x960000, bhvDeathWarp),
		OBJECT(31, -5033, 1702, -3354, 0, 90, 0, 0x28000000, bhvDoor),
		OBJECT(38, 4922, 1600, -3384, 0, -90, 0, 0x28000000, bhvDoor),
		OBJECT(37, 12732, 1600, -4006, 0, -90, 0, 0xa0000, bhvDoorWarp),
		OBJECT(37, 12731, 1600, -3858, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(37, -3354, 1472, -6120, 0, 0, 0, 0x1460000, bhvDoorWarp),
		OBJECT(37, -3207, 1472, -6120, 0, -180, 0, 0x1500000, bhvDoorWarp),
		OBJECT(38, 4122, 1600, -3386, 0, -90, 0, 0x3c0000, bhvDoorWarp),
		OBJECT(137, 4122, 3158, -3383, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(144, 7965, 2344, -3615, 0, 90, 0, 0x0, bhvFlame),
		OBJECT(0, 1159, 1472, -3979, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 146, 1472, -6229, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(0, 5550, 1600, -5559, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(86, -311, 1608, -422, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, 479, 1608, -1832, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, -1492, 1702, -3440, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(86, -5565, 1702, -2360, 0, 0, 0, 0x0, bhvMrBlizzard),
		OBJECT(123, 2798, 1684, -3376, 0, 0, 0, 0x320000, bhvNoteblock_MOP),
		// OBJECT(215, -69, 3069, 7015, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 10606, 2902, -3275, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 6740, 1831, -8138, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 2730, 3520, -7504, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2517, 2194, -1879, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 4122, 2704, -3383, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -482, 1216, -8406, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -7071, 1324, -6102, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(100, 4129, 1472, -934, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 1962, 1472, -1734, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 6124, 1600, -1594, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, -465, 1472, -5291, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 1946, 1600, -5438, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, -2125, 1472, -6238, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 1084, 1600, -7726, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, -4072, 1472, -5276, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, -6148, 1805, -6354, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 5728, 1600, -4921, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 4652, 1600, -5701, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(100, 3621, 1600, -9085, 0, 0, 0, 0x0, bhvSmallBomp),
		OBJECT(0, -4878, 1702, -3357, 0, 90, 0, 0x640000, bhvSpinAirborneWarp),
		OBJECT(0, 2728, 1840, -6062, 0, 0, 0, 0x8c0000, bhvSpinAirborneWarp),
		OBJECT(0, -5307, 1702, -3357, 0, 0, 0, 0x5a0000, bhvWarp),
		OBJECT(0, 2734, 1840, -6746, 0, 0, 0, 0x1e780000, bhvWarp),
		OBJECT(22, 8831, 2320, -2191, 0, 0, 0, 0x1e0000, bhvWarpPipe),
		OBJECT(22, 7128, 2056, -10563, 0, 0, 0, 0x280000, bhvWarpPipe),
		OBJECT(22, 17, 3254, 5505, 0, 0, 0, 0x320000, bhvWarpPipe),
		
		OBJECT(122, -3217, 1654, -2090, 0, 0, 0, 0x4000000, bhvStar),
		OBJECT(122, 4304, 3878, 6914, 0, 0, 0, 0x5000000, bhvStar),

		TERRAIN(castle_inside_area_2_collision),
		MACRO_OBJECTS(castle_inside_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 58),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, castle_inside_area_3),
		WARP_NODE(241, LEVEL_CASTLE, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 10, WARP_NO_CHECKPOINT),
		OBJECT(0, 0, 0, 693, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, 0, 354, -693, 0, 0, 0, 0x3000000, bhvStar),
		TERRAIN(castle_inside_area_3_collision),
		MACRO_OBJECTS(castle_inside_area_3_macro_objs),
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
