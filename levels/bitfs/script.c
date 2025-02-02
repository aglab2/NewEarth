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
#include "levels/bitfs/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bitfs_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bitfs_skybox_yay0SegmentRomStart, _bitfs_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _bitfs_segment_7SegmentRomStart, _bitfs_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, bitfs_geo_0004B0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, bitfs_geo_0004C8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, bitfs_geo_0004E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, bitfs_geo_0004F8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, bitfs_geo_000510), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, bitfs_geo_000528), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, bitfs_geo_000540), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, bitfs_geo_000558), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, bitfs_geo_000570), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, bitfs_geo_000588), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, bitfs_geo_0005A0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, bitfs_geo_0005B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, bitfs_geo_0005D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, bitfs_geo_0005E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, bitfs_geo_000600), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, bitfs_geo_000618), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, bitfs_geo_000630), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, bitfs_geo_000648), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, bitfs_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_PLATFORM_ON_TRACK, bitfs_geo_000758), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_TILTING_SQUARE_PLATFORM, bitfs_geo_0006C0), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_PLATFORMS, bitfs_geo_000770), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_BLUE_POLE, bitfs_geo_0006A8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SINKING_CAGE_PLATFORM, bitfs_geo_000690), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_ELEVATOR, bitfs_geo_000678), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_STRETCHING_PLATFORMS, bitfs_geo_000708), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SEESAW_PLATFORM, bitfs_geo_000788), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_MOVING_SQUARE_PLATFORM, bitfs_geo_000728), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_SLIDING_PLATFORM, bitfs_geo_000740), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM_PART, bitfs_geo_0006D8), 
	LOAD_MODEL_FROM_GEO(MODEL_BITFS_TUMBLING_PLATFORM, bitfs_geo_0006F0), 
	LOAD_MODEL_FROM_GEO(22, warp_pipe_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bitfs_area_1),
		WARP_NODE(241, LEVEL_CASTLE, 2, 130, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_CASTLE, 2, 140, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_BITFS, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_BOWSER_2, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_CASTLE, 2, 140, WARP_NO_CHECKPOINT),
		OBJECT(0, 9415, 4734, 11311, 0, 0, 0, 0x0, bhvBowserCourseRedCoinStar),
		OBJECT(0, -3630, 240, -7296, 0, 90, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, -1382, 720, -6573, 0, 0, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 1554, 960, -6104, 0, 135, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, 3820, 720, -6043, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 2683, 1050, -1789, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 6653, 2640, -1528, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 7140, 3120, -2482, 0, 0, 0, 0x110000, bhvCoinFormation),
		OBJECT(0, 4616, 720, -7392, 0, 0, 0, 0x40000, bhvCoinFormation),
		OBJECT(0, 3774, 720, -4772, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8580, 3360, -1283, 0, 0, 0, 0x20000, bhvCoinFormation),
		OBJECT(0, 8594, 3360, -224, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8580, 3840, 5071, 0, 90, 0, 0x0, bhvCoinFormation),
		OBJECT(0, 8223, 4800, 10815, 0, 0, 0, 0x1e0000, bhvDeathWarp),
		OBJECT(124, -3901, 240, -7727, 0, 0, 0, 0x4f0000, bhvMessagePanel),
		OBJECT(215, 8813, 4568, 11426, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 7492, 4320, 3632, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 9057, 2640, -2971, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 3763, 2476, 1474, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 5222, 1399, -3089, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 6174, 1680, -5612, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, 775, 240, -7404, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(215, -4503, 960, -5489, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, -4360, 240, -7296, 0, 90, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, -5100, 240, -7292, 0, 90, 0, 0x1e280000, bhvWarp),
		OBJECT(22, 7730, 4800, 11312, 0, 0, 0, 0x140000, bhvWarpPipe),
		TERRAIN(bitfs_area_1_collision),
		MACRO_OBJECTS(bitfs_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 45),
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
