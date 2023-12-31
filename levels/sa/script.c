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
#include "levels/sa/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_sa_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _sa_segment_7SegmentRomStart, _sa_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _void_skybox_mio0SegmentRomStart, _void_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(22, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM, geo_bitdw_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, geo_bitdw_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, sa_area_1),
		WARP_NODE(241, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SA, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		OBJECT(194, 11242, 9582, 516, 0, 0, 0, 0x0, bhvCirclingAmp),
		OBJECT(194, 12875, 9864, 433, 0, 0, 0, 0x0, bhvCirclingAmp),
		OBJECT(194, 11657, 10338, 2875, 0, 0, 0, 0x0, bhvCirclingAmp),
		OBJECT(0, -3050, -1171, -4867, 0, -10, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1470, 2478, 5396, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3316, 2486, 3602, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -6864, 4746, -8364, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -6864, 5610, -8364, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -6864, 6465, -8364, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(137, 832, 375, 278, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(180, -1495, -2433, -8845, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -1830, 2606, 3609, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -3628, 2804, 1889, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -2628, 4286, -6588, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 573, 7838, -7604, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 797, 7838, -5837, 0, 0, 0, 0x0, bhvFireSpitter),
		// OBJECT(122, 8316, 9408, -1341, 0, 0, 0, 0x0, bhvFlamethrower),
		OBJECT(89, -6545, 4494, -7379, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -6503, 7214, -10079, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(89, -4633, 7374, -8571, 0, 0, 0, 0x0, bhvHeaveHo),
		OBJECT(101, 1283, 8216, -2061, 0, 0, 0, 0x0, bhvScuttlebug),
		OBJECT(206, 645, -2772, -8665, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, -2785, -359, -1753, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, 4787, 414, 8233, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, -1331, 7958, -8532, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(0, 1094, -3243, -4136, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(54, 7680, 10582, 3599, 0, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, 8294, 10582, 4215, 180, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(54, 6802, 10582, 5147, 0, 0, 0, 0x0, bhvSquarishPathMoving),
		OBJECT(54, 7416, 10582, 5763, 180, 0, 0, 0x20000, bhvSquarishPathMoving),
		OBJECT(16, 7998, 10472, 3924, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(16, 7121, 10472, 5467, 0, 0, 0, 0x0, bhvStaticObject),
		OBJECT(22, 3913, 11044, 5494, 0, 90, 0, 0x140000, bhvWarpPipe),
		
		OBJECT(122, -2703, 1001, -1229, 0, 0, 0, 0x0000000, bhvStar),

		TERRAIN(sa_area_1_collision),
		MACRO_OBJECTS(sa_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 6),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, sa_area_2),
		WARP_NODE(241, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SA, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_SA, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, -9190, 787, -2166, 0, -180, 0, (1 << 16), bhvCheckpoint_Flag_MOP),
		OBJECT(MODEL_NONE, -8795, 1194, -2146, 0, -180, 0, (100 << 16), bhvSpinAirborneWarp),
		OBJECT(38, 9850, 7808, -10858, 0, 90, 0, 0x140000, bhvDoorWarp),
		OBJECT(137, -6922, 3983, -11901, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(207, -8982, 1387, -5015, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(129, -8753, 1446, -7113, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -8753, 1646, -7513, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -8753, 1846, -7913, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -8753, 2278, -9490, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -8753, 2678, -9890, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(129, -8753, 3078, -10290, 0, 0, 0, 0x0, bhvHiddenObject),
		OBJECT(0, 759, 7462, -7905, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(0, -159, 7528, -8921, 0, 0, 0, 0xff0000, bhvPoleGrabbing),
		OBJECT(22, -8765, 787, -1521, 0, -180, 0, 0xa0000, bhvWarpPipe),
		TERRAIN(sa_area_2_collision),
		MACRO_OBJECTS(sa_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 6),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, sa_area_3),
		WARP_NODE(241, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_SA, 3, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SA, 4, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_SA, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, 6465, 576, 524, 0, 0, 0, (2 << 16), bhvCheckpoint_Flag_MOP),
		OBJECT(MODEL_NONE, 6152, 969, 562, 0, 0, 0, (100 << 16), bhvSpinAirborneWarp),
		OBJECT(38, 0, 200, -3082, 0, 0, 0, 0xa0000, bhvDoorWarp),
		OBJECT(137, -4609, 990, -683, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(137, 6146, 2186, 2355, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(0, 6157, 1216, 5482, 0, -180, 0, 0x1e0000, bhvSpinAirborneWarp),
		OBJECT(0, 6156, 1216, 6195, 0, -180, 0, 0x1e140000, bhvWarp),
		
		OBJECT(122, 6151, 3378, 2041, 0, 0, 0, 0x1000000, bhvStar),

		TERRAIN(sa_area_3_collision),
		MACRO_OBJECTS(sa_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 6),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(4, sa_area_4),
		WARP_NODE(241, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_SA, 4, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_SA, 5, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SA, 3, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 4, 10, WARP_NO_CHECKPOINT),
		OBJECT(0, 4278, 1254, -2477, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 1044, 240, -1992, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 7536, 2640, -1997, 0, -90, 0, 0x280000, bhvSpinAirborneWarp),
		OBJECT(0, 319, 240, -2002, 0, 90, 0, 0x1e140000, bhvWarp),
		OBJECT(0, 8239, 2640, -1999, 0, -90, 0, 0x1e1e0000, bhvWarp),
		TERRAIN(sa_area_4_collision),
		MACRO_OBJECTS(sa_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 6),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(5, sa_area_5),
		WARP_NODE(241, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_CASTLE, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SA, 4, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 5, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(110, LEVEL_SA, 5, 111, WARP_NO_CHECKPOINT),
		WARP_NODE(111, LEVEL_SA, 5, 110, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, 11108, 2304, 4937, 0, 0, 0, (3 << 16), bhvCheckpoint_Flag_MOP),
		OBJECT(MODEL_NONE, 10592, 2707, 4951, 0, 0, 0, (100 << 16), bhvSpinAirborneWarp),
		OBJECT(0, 1376, 1016, 0, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2996, 3444, 6239, 0, 90, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2996, 4144, 6239, 0, 90, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2996, 4844, 6239, 0, 90, 0, 0x110000, bhvCoinFormation),
		OBJECT(38, 7771, 8816, 1279, 0, 90, 0, 0x7e000000, bhvDoor),
		OBJECT(38, 7771, 8816, 278, 0, 90, 0, 0x7e000000, bhvDoor),
		OBJECT(38, 7771, 8816, 780, 0, 90, 0, 0x7e000000, bhvDoor),
		OBJECT(38, 7771, 8816, 1780, 0, 90, 0, 0x7e000000, bhvDoor),
		OBJECT(137, -3857, 8082, 2054, 0, 0, 0, 0x30000, bhvExclamationBox),
		// OBJECT(124, 6971, 8816, 1039, 0, -90, 0, 0xa90000, bhvMessagePanel),
		OBJECT(124, 1532, 9378, 6435, 0, 90, 0, 0xa80000, bhvMessagePanel),
		OBJECT(120, 7366, 1585, 482, 0, 30, 0, 0x0, bhvRecoveryHeart),
		OBJECT(120, 10458, 2351, 3293, 0, 0, 0, 0x0, bhvRecoveryHeart),
		OBJECT(0, -451, 240, 0, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, 4960, 9170, 6446, 0, 0, 0, 0x0, bhvStar),
		OBJECT(0, -1161, 240, 0, 0, 90, 0, 0x1e140000, bhvWarp),
		OBJECT(0, 502, 8551, 6425, 0, 90, 0, 0x32280000, bhvWarp),
		OBJECT(MODEL_NONE, -4388, 1436, 4837, 0, 90, 0, (110 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -4764, 5430, 4837, 0, 90, 0, (111 << 16), bhvFadingWarp),
		
		OBJECT(122, -1642, 1662, 7, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(sa_area_5_collision),
		MACRO_OBJECTS(sa_area_5_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 6),
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
