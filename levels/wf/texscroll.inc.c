void scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 19;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(0.699999988079071 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_1() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_1);

	deltaX = (int)(0.46000003814697266 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf() {
	scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_0();
	scroll_wf_dl_DL_wf_1_0xe0290b0_Obj_mesh_layer_5_vtx_1();
};
