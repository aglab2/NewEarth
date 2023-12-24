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
#include "levels/ssl/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ssl_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ssl_skybox_yay0SegmentRomStart, _ssl_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group5_yay0SegmentRomStart, _group5_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0xa, _c4_skybox_mio0SegmentRomStart, _c4_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_6), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, ssl_geo_0005C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, ssl_geo_0005D8), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP, ssl_geo_000618), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL, ssl_geo_000734), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL, ssl_geo_000764), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR, ssl_geo_0007AC), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX, ssl_geo_000630), 
	LOAD_MODEL_FROM_GEO(22, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ssl_area_1),
		WARP_NODE(241, LEVEL_SSL, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_SSL, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_SSL, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_SSL, 3, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_SSL, 3, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_SSL, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SSL, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 50, WARP_NO_CHECKPOINT),
		OBJECT(140, -4022, -1092, -650, 0, 0, 0, 0x0, bhvBlueCoinSwitch),
		OBJECT(188, 2920, -60, -4279, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 1108, -561, -5018, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 5968, 374, -1198, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, 5905, 374, 2252, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -9593, -714, 451, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(188, -9361, -646, 2050, 0, 0, 0, 0x0, bhvBobomb),
		OBJECT(0, 1263, -2392, -19, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -147, -2112, -1202, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 4549, -45, -2787, 0, -136, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 6601, 534, 341, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 5127, 560, 3673, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -5788, -807, 5819, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, -10793, -488, -39, 0, 114, 0, 0x0, bhvCoinFormation),
		OBJECT(0, -12074, -51, 1480, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 4669, -834, -2688, 0, -46, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 3918, -2698, 579, 0, 0, 0, 0x140000, bhvDeathWarp),
		OBJECT(0, -332, -2609, 4634, 0, 87, 0, 0x3c0000, bhvDeathWarp),
		OBJECT(0, -11863, 1741, 2654, 0, 0, 0, 0x460000, bhvDeathWarp),
		OBJECT(137, -5788, -357, 5819, 0, 0, 0, 0x20000, bhvExclamationBox),
		OBJECT(137, 1263, -2017, -19, 0, 0, 0, 0x60000, bhvExclamationBox),
		OBJECT(180, 4654, -582, -2706, 0, -136, 0, 0x0, bhvFireSpitter),
		OBJECT(118, -3206, -1129, -2123, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -3075, -1157, -2418, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2908, -1188, -2816, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2787, -1190, -3264, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2633, -1165, -3730, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -2289, -1183, -4142, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(118, -1988, -1189, -4540, 0, 0, 0, 0x0, bhvHiddenBlueCoin),
		OBJECT(124, 3849, -2645, -146, 0, 0, 0, 0x330000, bhvMessagePanel),
		OBJECT(0, -11828, 560, 2933, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, -12395, 560, 1824, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		// OBJECT(215, -4062, -1607, -3956, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -3355, -727, -5594, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -5140, -447, -4711, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -6178, -167, -6191, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -6829, -727, -3880, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -7771, -447, -5405, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -4675, -1887, -5905, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2290, -447, -7191, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(206, 4832, 239, -3036, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, 6171, 731, 342, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(0, -332, -2609, 4634, 0, 87, 0, 0x19320000, bhvSpinAirborneWarp),
		// OBJECT(122, -2214, 756, 3622, 0, 0, 0, 0x4000000, bhvStar),
		// OBJECT(122, 3976, -2046, -1723, 0, 0, 0, 0x5000000, bhvStar),
		// OBJECT(122, 5127, 903, 3673, 0, 0, 0, 0x0, bhvStar),
		OBJECT(0, -11828, 2702, 2933, 0, 0, 0, 0x641e0000, bhvWarp),
		OBJECT(0, -973, -2609, 4621, 0, 0, 0, 0x19280000, bhvWarp),
		OBJECT(22, 4150, -2725, 1244, 0, -180, 0, 0xa0000, bhvWarpPipe),
		
		OBJECT(122, 7634, -1197, 187, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, -165, 4, -1216, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, -5146, -804, -4524, 0, 0, 0, 0x2000000, bhvStar),

		TERRAIN(ssl_area_1_collision),
		MACRO_OBJECTS(ssl_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x3f),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ssl_area_2),
		WARP_NODE(241, LEVEL_SSL, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		// OBJECT(195, 4516, 3296, 276, 0, -90, 0, 0x550000, bhvBobombBuddy),
		OBJECT(0, 581, -4617, -137, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, -788, -3077, -70, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 1711, -1976, -70, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 2544, -1448, -70, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 4248, 474, -70, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 581, 837, -136, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, -437, 1632, -137, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 2409, 2966, -133, 0, 0, 0, 0xfa0000, bhvPoleGrabbing),
		OBJECT(0, 2675, -4105, -134, 0, -90, 0, 0xa0000, bhvSpinAirborneWarp),
		// OBJECT(122, 4213, 3462, 12, 0, 0, 0, 0x3000000, bhvStar),
		
		OBJECT(122, 4213, -856 - 40, -53, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(ssl_area_2_collision),
		MACRO_OBJECTS(ssl_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x3f),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(3, ssl_area_3),
		WARP_NODE(241, LEVEL_SSL, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_SSL, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 3, 0, WARP_NO_CHECKPOINT),
		OBJECT(206, 1331, -1, 3529, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, -1001, -1, 2547, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, -980, -1, 1508, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, -212, -1, 2293, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, 565, -1, 3217, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, 575, -1, 1892, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(206, 1335, -1, 2239, 0, 0, 0, 0x0, bhvSnufit),
		OBJECT(0, 28, -160, 209, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 50, 0, -566, 0, 0, 0, 0x19140000, bhvWarp),
		TERRAIN(ssl_area_3_collision),
		MACRO_OBJECTS(ssl_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 0x3f),
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
