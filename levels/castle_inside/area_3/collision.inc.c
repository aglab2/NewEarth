const Collision castle_inside_area_3_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(4),
	COL_VERTEX(-2468, 0, 2252),
	COL_VERTEX(2468, 0, -2964),
	COL_VERTEX(-2468, 0, -2964),
	COL_VERTEX(2468, 0, 2252),
	COL_TRI_INIT( 0, 2),
	COL_TRI(0, 1, 2),
	COL_TRI(1, 0, 3),
	COL_TRI_STOP(),
	COL_END()
};
