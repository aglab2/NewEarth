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
#include "levels/ttm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group6_yay0SegmentRomStart, _group6_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group6_geoSegmentRomStart, _group6_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ttm_segment_7SegmentRomStart, _ttm_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _c4_skybox_mio0SegmentRomStart, _c4_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_7), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_SLIDE_EXIT_PODIUM, ttm_geo_000DF4), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_ROLLING_LOG, ttm_geo_000730), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_CAGE, ttm_geo_000710), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_BLUE_SMILEY, ttm_geo_000D14), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_YELLOW_SMILEY, ttm_geo_000D4C), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_STAR_SMILEY, ttm_geo_000D84), 
	LOAD_MODEL_FROM_GEO(MODEL_TTM_MOON_SMILEY, ttm_geo_000DBC), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ttm_geo_000748), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ttm_geo_000778), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, ttm_geo_0007A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, ttm_geo_0007D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, ttm_geo_000808), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, ttm_geo_000830), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, ttm_geo_000858), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, ttm_geo_000880), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, ttm_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, ttm_geo_0008D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, ttm_geo_0008F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, ttm_geo_000920), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, ttm_geo_000948), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, ttm_geo_000970), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, ttm_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, ttm_geo_0009C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, ttm_geo_0009F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, ttm_geo_000A18), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16, ttm_geo_000A40), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttm_area_1),
		WARP_NODE(241, LEVEL_CASTLE_COURTYARD, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_TTM, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_TTM, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_TTM, 3, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_TTM, 2, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_TTM, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE_COURTYARD, 1, 40, WARP_NO_CHECKPOINT),
		OBJECT(140, 1573, 3307, 1005, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		// OBJECT(195, -3929, 3307, -81, 0, -90, 0, 0x4a0000, bhvBobombBuddy),
		OBJECT(0, -3973, 3307, -3976, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 923, 3307, -4018, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 2426, 6089, -2522, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -488, 3781, -2921, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 267, 4848, -2848, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, -343, 4556, -3394, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1781, 6089, -2515, 0, 90, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 1206, 5779, -3544, 0, 90, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, -2985, 3341, 2764, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1990, 3341, -1390, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -1225, 3341, 3268, 0, -33, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 2201, 3307, 4558, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2908, 6518, 2115, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 242, 3307, -2504, 0, 0, 0, 0x3c0000, bhvDeathWarp),
		OBJECT(137, -1900, 3620, 987, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(137, 3607, 8060, 1918, 0, 0, 0, 0x0, bhvExclamationBox),
		OBJECT(137, 254, 6096, -3403, 0, 0, 0, 0x60000, bhvExclamationBox),
		// OBJECT(137, -481, 4952, -1579, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(0, 250, 3889, -2918, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(0, 250, 3889, -2918, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(180, -500, 4682, -2446, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 268, 4682, -3357, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(180, 2201, 3423, 4558, 0, 0, 0, 0x0, bhvFireSpitter),
		OBJECT(207, 2250, 3307, 3654, 0, 0, 0, 0x0, bhvFloorSwitchHiddenObjects),
		OBJECT(0, -2046, 3341, -3250, 0, 0, 0, 0x0, bhvGoombaTripletSpawner),
		OBJECT(118, 1704, 3138, 342, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 1232, 3138, -189, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 905, 3138, 284, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 1704, 3238, 342, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 1232, 3238, -189, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, 905, 3238, 284, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(129, -110, 3502, 2820, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 19, 3699, 2667, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 146, 3899, 2514, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 274, 4099, 2361, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 402, 4299, 2208, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 531, 4498, 2055, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(129, 659, 4498, 1902, 0, -40, 0, 0x0, bhvHiddenObject),
		OBJECT(124, -2190, 3307, 3176, 0, 0, 0, 0x320000, bhvMessagePanel),
		OBJECT(120, 1123, 5844, 4390, 0, 0, 0, 0x0, bhvRecoveryHeart),
		// OBJECT(215, -517, 3138, 772, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 3366, 3138, -1416, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -3040, 2525, -3204, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -5362, 2005, -5314, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 5343, 2043, -5324, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 5303, 1988, 5701, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -5276, 1660, 5395, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 3036, 3138, 698, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(122, 1781, 6395, -2515, 0, 0, 0, 0x0, bhvStar),
		// OBJECT(122, 2904, 6710, 2106, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(0, -3245, 3307, 4370, 0, -180, 0, 0xa0000, bhvWarp),
		OBJECT(0, 2400, 4528, -3473, 0, 0, 0, 0xa140000, bhvWarp),
		OBJECT(0, 2244, 3138, -3283, 0, 0, 0, 0x1e320000, bhvWarp),
		
		OBJECT(122, 1334, 3910, -2176, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, -22, 8948, 432, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -6824, 440, -6606, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(ttm_area_1_collision),
		MACRO_OBJECTS(ttm_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 50),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ttm_area_2),
		WARP_NODE(241, LEVEL_TTM, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_TTM, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 10, WARP_NO_CHECKPOINT),
		OBJECT(195, 929, 8, 498, 0, 0, 0, 0x490000, bhvBobombBuddy),
		OBJECT(0, -398, -128, 816, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 610, 1257, -175, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, -398, 194, -385, 0, 0, 0, 0x5000000, bhvStar),
		
		TERRAIN(ttm_area_2_collision),
		MACRO_OBJECTS(ttm_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 53),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ttm_area_3),
		WARP_NODE(241, LEVEL_TTM, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_TTM, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 10, WARP_NO_CHECKPOINT),
		OBJECT(137, 3255, 456, -5321, 0, 0, 0, 0x10000, bhvExclamationBox),
		OBJECT(0, 4686, 800, -2398, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 3697, 120, -5292, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, 4701, 1100, -1829, 0, 0, 0, 0x2000000, bhvStar),
		
		OBJECT(122, 2066, 1762, -5440, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(ttm_area_3_collision),
		MACRO_OBJECTS(ttm_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 50),
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
