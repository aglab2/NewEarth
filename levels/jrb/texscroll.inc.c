void scroll_jrb_dl_DL_jrb_1_0xe016a40_Obj_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 24;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_DL_jrb_1_0xe016a40_Obj_mesh_layer_1_vtx_5);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb_dl_DL_jrb_2_0xe006d10_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_DL_jrb_2_0xe006d10_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb_dl_DL_jrb_4_0xe002c50_Obj_mesh_layer_1_vtx_2() {
	int i = 0;
	int count = 12;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_DL_jrb_4_0xe002c50_Obj_mesh_layer_1_vtx_2);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb() {
	scroll_jrb_dl_DL_jrb_1_0xe016a40_Obj_mesh_layer_1_vtx_5();
	scroll_jrb_dl_DL_jrb_2_0xe006d10_Obj_mesh_layer_1_vtx_3();
	scroll_jrb_dl_DL_jrb_4_0xe002c50_Obj_mesh_layer_1_vtx_2();
};
