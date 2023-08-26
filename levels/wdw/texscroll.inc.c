void scroll_wdw_dl_DL_wdw_1_0xe0459e0_Obj_mesh_layer_1_vtx_23() {
	int i = 0;
	int count = 27;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wdw_dl_DL_wdw_1_0xe0459e0_Obj_mesh_layer_1_vtx_23);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wdw_dl_DL_wdw_1_0xe054830_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 12;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wdw_dl_DL_wdw_1_0xe054830_Obj_mesh_layer_5_vtx_0);

	deltaX = (int)(0.3100000023841858 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wdw_dl_DL_wdw_2_0xe013818_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 6;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wdw_dl_DL_wdw_2_0xe013818_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wdw() {
	scroll_wdw_dl_DL_wdw_1_0xe0459e0_Obj_mesh_layer_1_vtx_23();
	scroll_wdw_dl_DL_wdw_1_0xe054830_Obj_mesh_layer_5_vtx_0();
	scroll_wdw_dl_DL_wdw_2_0xe013818_Obj_mesh_layer_5_vtx_0();
};
