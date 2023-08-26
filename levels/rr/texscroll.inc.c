void scroll_rr_dl_DL_rr_1_0xe0214c0_Obj_mesh_layer_1_vtx_9() {
	int i = 0;
	int count = 83;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(rr_dl_DL_rr_1_0xe0214c0_Obj_mesh_layer_1_vtx_9);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_rr_dl_DL_rr_1_0xe0214c0_Obj_mesh_layer_1_vtx_12() {
	int i = 0;
	int count = 24;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(rr_dl_DL_rr_1_0xe0214c0_Obj_mesh_layer_1_vtx_12);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_rr() {
	scroll_rr_dl_DL_rr_1_0xe0214c0_Obj_mesh_layer_1_vtx_9();
	scroll_rr_dl_DL_rr_1_0xe0214c0_Obj_mesh_layer_1_vtx_12();
};
