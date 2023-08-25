void scroll_cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 23;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_5);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 729;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_7);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 11;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_8);

	deltaY = (int)(-0.11000001430511475 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_cotmc() {
	scroll_cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_5();
	scroll_cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_7();
	scroll_cotmc_dl_DL_cotmc_1_0xe00e400_Obj_mesh_layer_1_vtx_8();
};
