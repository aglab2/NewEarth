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
#include "levels/bits/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bits_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bits_skybox_yay0SegmentRomStart, _bits_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bits_segment_7SegmentRomStart, _bits_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_15), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bits_geo_000430), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, bits_geo_000448), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, bits_geo_000460), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, bits_geo_000478), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, bits_geo_000490), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, bits_geo_0004A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, bits_geo_0004C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, bits_geo_0004D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, bits_geo_0004F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, bits_geo_000508), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, bits_geo_000520), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, bits_geo_000538), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, bits_geo_000550), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, bits_geo_000568), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, bits_geo_000580), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, bits_geo_000598), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, bits_geo_0005B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, bits_geo_0005C8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_SLIDING_PLATFORM, bits_geo_0005E0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_TWIN_SLIDING_PLATFORMS, bits_geo_0005F8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_OCTAGONAL_PLATFORM, bits_geo_000610), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_BLUE_PLATFORM, bits_geo_000628), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_FERRIS_WHEEL_AXLE, bits_geo_000640), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_ARROW_PLATFORM, bits_geo_000658), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_SEESAW_PLATFORM, bits_geo_000670), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_TILTING_W_PLATFORM, bits_geo_000688), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE, bits_geo_0006A0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME1, bits_geo_0006B8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME2, bits_geo_0006D0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME3, bits_geo_0006E8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_STAIRCASE_FRAME4, bits_geo_000700), 
	LOAD_MODEL_FROM_GEO(MODEL_BITS_WARP_PIPE, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bits_area_1),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 4, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_BITS, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_BOWSER_3, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 4, 30, WARP_NO_CHECKPOINT),
		OBJECT(0, -1702, 5246, -3669, 0, 0, 0, 0x0, bhvBowserCourseRedCoinStar),
		OBJECT(0, -10264, 539, 7843, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -10853, 800, 5662, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -9516, 1284, 4062, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -10191, 1356, -1361, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -9394, 1356, -1361, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -10191, 2100, -1361, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -9394, 2100, -1361, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -5616, 1309, 2065, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -3447, 1330, 1153, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -755, 1356, 4466, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -755, 2100, 4466, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 47, 2100, 4446, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 4135, 600, 4058, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 5527, 2400, -2351, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3336, 2130, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 3336, 2980, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 3336, 3830, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 3336, 4680, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2541, 4680, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 1737, 4680, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 142, 4680, -4138, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -2266, 4808, -2750, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(137, -14495, 2211, 3873, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(0, -3315, 4808, -2747, 0, 90, 0, 0x140000, bhvFadingWarp),
		OBJECT(180, -10837, 1359, 4055, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -13201, 1803, 408, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -13592, 2008, 2414, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 5742, 1052, 2776, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 5729, 1232, 843, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, -3473, 723, 2468, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(124, -7882, 1200, -1119, 0, 0, 0, 0x420000, bhvMessagePanel),
		OBJECT(124, -10270, 400, 8765, 0, 0, 0, 0x500000, bhvMessagePanel),
		OBJECT(215, -8979, 1176, 7125, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -5044, 2000, 4065, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -11587, 2052, 1580, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -3058, 200, 874, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -2074, 2400, 4468, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6632, 3341, 811, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 943, 2528, -4140, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -1100, 4408, -1915, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -10270, 400, 9969, 0, -180, 0, 0xa0000, bhvSpinAirborneWarp),
		TERRAIN(bits_area_1_collision),
		MACRO_OBJECTS(bits_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 37),
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
