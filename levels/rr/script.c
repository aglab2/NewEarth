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
#include "levels/rr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_rr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group11_yay0SegmentRomStart, _group11_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _rr_segment_7SegmentRomStart, _rr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _bits_skybox_mio0SegmentRomStart, _bits_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_12), 
	JUMP_LINK(script_func_global_1), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, rr_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, rr_geo_000678), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, rr_geo_000690), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, rr_geo_0006A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, rr_geo_0006C0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, rr_geo_0006D8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, rr_geo_0006F0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, rr_geo_000708), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B, rr_geo_000720), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, rr_geo_000738), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D, rr_geo_000758), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, rr_geo_000770), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, rr_geo_000788), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10, rr_geo_0007A0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, rr_geo_0007B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, rr_geo_0007D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_13, rr_geo_0007E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_14, rr_geo_000800), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_15, rr_geo_000818), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_16, rr_geo_000830), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SLIDING_PLATFORM, rr_geo_0008C0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_FLYING_CARPET, rr_geo_000848), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_OCTAGONAL_PLATFORM, rr_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_ROTATING_BRIDGE_PLATFORM, rr_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRIANGLE_PLATFORM, rr_geo_0008D8), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_CRUISER_WING, rr_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SEESAW_PLATFORM, rr_geo_000908), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_L_SHAPED_PLATFORM, rr_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_SWINGING_PLATFORM, rr_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_DONUT_PLATFORM, rr_geo_000920), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_ELEVATOR_PLATFORM, rr_geo_0008F0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES, rr_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME1, rr_geo_000970), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME2, rr_geo_000988), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME3, rr_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_RR_TRICKY_TRIANGLES_FRAME4, rr_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, rr_area_1),
		WARP_NODE(241, LEVEL_TTC, 1, 120, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_RR, 1, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_RR, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_RR, 2, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(190, LEVEL_RR, 1, 190, WARP_NO_CHECKPOINT),
		WARP_NODE(180, LEVEL_SA, 1, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(160, LEVEL_RR, 1, 170, WARP_NO_CHECKPOINT),
		WARP_NODE(170, LEVEL_RR, 1, 160, WARP_NO_CHECKPOINT),
		WARP_NODE(150, LEVEL_RR, 1, 140, WARP_NO_CHECKPOINT),
		WARP_NODE(140, LEVEL_RR, 1, 150, WARP_NO_CHECKPOINT),
		WARP_NODE(130, LEVEL_RR, 1, 120, WARP_NO_CHECKPOINT),
		WARP_NODE(120, LEVEL_RR, 1, 130, WARP_NO_CHECKPOINT),
		WARP_NODE(110, LEVEL_RR, 1, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_RR, 1, 110, WARP_NO_CHECKPOINT),
		WARP_NODE(90, LEVEL_RR, 1, 80, WARP_NO_CHECKPOINT),
		WARP_NODE(80, LEVEL_RR, 1, 90, WARP_NO_CHECKPOINT),
		WARP_NODE(70, LEVEL_RR, 1, 60, WARP_NO_CHECKPOINT),
		WARP_NODE(60, LEVEL_RR, 1, 70, WARP_NO_CHECKPOINT),
		WARP_NODE(50, LEVEL_RR, 1, 40, WARP_NO_CHECKPOINT),
		WARP_NODE(40, LEVEL_RR, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(30, LEVEL_RR, 1, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_RR, 1, 30, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_TTC, 1, 110, WARP_NO_CHECKPOINT),
		WARP_NODE(181, LEVEL_SA, 2, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(182, LEVEL_SA, 3, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(183, LEVEL_SA, 5, 100, WARP_NO_CHECKPOINT),
		WARP_NODE(200, LEVEL_RR, 0x01, 200, WARP_NO_CHECKPOINT),
		WARP_NODE(201, LEVEL_RR, 0x01, 201, WARP_NO_CHECKPOINT),
		WARP_NODE(202, LEVEL_RR, 0x01, 202, WARP_NO_CHECKPOINT),
		WARP_NODE(203, LEVEL_RR, 0x01, 203, WARP_NO_CHECKPOINT),
		WARP_NODE(204, LEVEL_RR, 0x01, 204, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, -396, 1760, -1201, 0, 0, 0, (200 << 16), bhvCheckpoint_Flag_Instant),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, 5892, 5600, 3212, 0, 0, 0, (201 << 16), bhvCheckpoint_Flag_Instant),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, -2898, 7390, 4907, 0, 0, 0, (202 << 16), bhvCheckpoint_Flag_Instant),
		OBJECT(MODEL_MOP_CHECKPOINT_FLAG, 1012, 9470, 6007, 0, 0, 0, (204 << 16), bhvCheckpoint_Flag_Instant),
		OBJECT(MODEL_NONE, 95, 2142, -1193, 0, 0, 0, (200 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 6415, 6127, 3199, 0, 0, 0, (201 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -3384, 7867, 4911, 0, 0, 0, (202 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 606, 9670, 6006, 0, 0, 0, (204 << 16), bhvFadingWarp),
		OBJECT(0, 10499, 10780, 5032, 0, 0, 0, 0xbe0000, bhvDeathWarp),
		OBJECT(0, -2399, 7710, 10195, 0, 0, 0, 0xc0000, bhvDeathWarp),
		OBJECT(38, 10503, 10780, 4820, 0, 0, 0, 0x7b000000, bhvDoor),
		OBJECT(38, 1, 160, -815, 0, 0, 0, 0xa0000, bhvDoorWarp),
		OBJECT(137, 4998, 5957, 3198, 0, 0, 0, 0x30000, bhvExclamationBox),
		// OBJECT(137, -3304, 7720, 4502, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(137, 1398, 9830, 5995, 0, 0, 0, 0x30000, bhvExclamationBox),
		OBJECT(0, -2100, 3360, -8505, 0, 0, 0, 0x140000, bhvFadingWarp),
		OBJECT(0, 502, 2510, -1205, 0, 0, 0, 0x1e0000, bhvFadingWarp),
		OBJECT(0, 6101, 3200, -13103, 0, 0, 0, 0x280000, bhvFadingWarp),
		OBJECT(0, 502, 2750, -1205, 0, 0, 0, 0x320000, bhvFadingWarp),
		OBJECT(0, 6999, 7360, -3205, 0, 0, 0, 0x3c0000, bhvFadingWarp),
		OBJECT(0, 5898, 6500, 3894, 0, 0, 0, 0x460000, bhvFadingWarp),
		OBJECT(0, -1202, 7390, 4596, 0, 0, 0, 0x500000, bhvFadingWarp),
		OBJECT(0, 5898, 6830, 3894, 0, 0, 0, 0x5a0000, bhvFadingWarp),
		OBJECT(0, -2737, 9108, -2472, 0, 90, 0, 0x640000, bhvFadingWarp),
		OBJECT(0, -1999, 7954, 4602, 0, 0, 0, 0x6e0000, bhvFadingWarp),
		OBJECT(0, -2800, 9470, 9596, 0, 0, 0, 0x780000, bhvFadingWarp),
		OBJECT(0, -2001, 8038, 4595, 0, 0, 0, 0x820000, bhvFadingWarp),
		OBJECT(0, -498, 5950, 10294, 0, 0, 0, 0x8c0000, bhvFadingWarp),
		OBJECT(0, 5901, 1920, 3097, 0, 0, 0, 0x960000, bhvFadingWarp),
		OBJECT(0, -2001, 10034, 9597, 0, 0, 0, 0xa00000, bhvFadingWarp),
		OBJECT(0, 9502, 10780, 5234, 0, 0, 0, 0xaa0000, bhvFadingWarp),
		OBJECT(124, 1501, 160, -773, 0, 0, 0, 0xa50000, bhvMessagePanel),
		OBJECT(124, -1912, 7390, 5305, 0, 90, 0, 0xa60000, bhvMessagePanel),
		OBJECT(124, 10266, 10780, 4883, 0, 0, 0, 0xa70000, bhvMessagePanel),
		OBJECT(0, -2399, 7710, 10195, 0, 0, 0, 0xd0000, bhvSpinAirborneWarp),
		// OBJECT(122, -2105, 3636, -7901, 0, 0, 0, 0x0, bhvStar),
		// OBJECT(122, 6704, 3521, -13100, 0, 0, 0, 0x1000000, bhvStar),
		// OBJECT(122, 7599, 7654, -3194, 0, 0, 0, 0x2000000, bhvStar),
		// OBJECT(122, 5896, 2286, 3703, 0, 0, 0, 0x6000000, bhvStar),
		// OBJECT(122, -2236, 9401, -2473, 0, 0, 0, 0x3000000, bhvStar),
		OBJECT(0, 10502, 10780, 4519, 0, 0, 0, 0xb40000, bhvWarp),
		OBJECT(0, -2395, 7710, 9618, 0, -180, 0, 0x1e0b0000, bhvWarp),
		
		OBJECT(122, -2088, 4220, -5086, 0, 0, 0, 0x0000000, bhvStar),
		OBJECT(122, 6002, 5490, 81, 0, 0, 0, 0x1000000, bhvStar),
		OBJECT(122, 9384, 8940, -3686, 0, 0, 0, 0x2000000, bhvStar),
		OBJECT(122, 829, 10856, 9878, 0, 0, 0, 0x3000000, bhvStar),

		TERRAIN(rr_area_1_collision),
		MACRO_OBJECTS(rr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 52),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, rr_area_2),
		WARP_NODE(241, LEVEL_RR, 1, 12, WARP_NO_CHECKPOINT),
		WARP_NODE(240, LEVEL_CASTLE, 1, 50, WARP_NO_CHECKPOINT),
		WARP_NODE(20, LEVEL_RR, 1, 13, WARP_NO_CHECKPOINT),
		WARP_NODE(10, LEVEL_BOB, 2, 0, WARP_NO_CHECKPOINT),
		// OBJECT(215, 697, 0, 1903, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 2317, 363, 1913, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2296, 0, 507, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 698, 354, 3195, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 2298, 960, 3094, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2298, 0, 4101, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, 1509, 197, 5134, 0, 0, 0, 0x0, bhvRedCoin),
		// OBJECT(215, -2208, 0, 4793, 0, 0, 0, 0x0, bhvRedCoin),
		OBJECT(0, 1595, 0, 587, 0, 0, 0, 0xa0000, bhvSpinAirborneWarp),
		OBJECT(0, 1603, 0, 3, 0, -180, 0, 0x1e140000, bhvWarp),

		OBJECT(122, 401, 1012, 3202, 0, 0, 0, 0x4000000, bhvStar),

		TERRAIN(rr_area_2_collision),
		MACRO_OBJECTS(rr_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, 52),
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
