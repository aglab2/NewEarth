void scroll_castle_grounds_dl_DL_castle_grounds_1_0xe046920_Obj_mesh_layer_1_vtx_29() {
	int i = 0;
	int count = 58;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_DL_castle_grounds_1_0xe046920_Obj_mesh_layer_1_vtx_29);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_grounds_dl_DL_castle_grounds_1_0xe052288_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_DL_castle_grounds_1_0xe052288_Obj_mesh_layer_5_vtx_0);

	deltaX = (int)(0.12999998033046722 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_grounds_dl_DL_castle_grounds_1_0xe052288_Obj_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 81;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_grounds_dl_DL_castle_grounds_1_0xe052288_Obj_001_mesh_layer_1_vtx_0);

	deltaX = (int)(0.2200000286102295 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_grounds() {
	scroll_castle_grounds_dl_DL_castle_grounds_1_0xe046920_Obj_mesh_layer_1_vtx_29();
	scroll_castle_grounds_dl_DL_castle_grounds_1_0xe052288_Obj_mesh_layer_5_vtx_0();
	scroll_castle_grounds_dl_DL_castle_grounds_1_0xe052288_Obj_001_mesh_layer_1_vtx_0();
};
