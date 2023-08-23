void scroll_bob_dl_DL_bob_1_0xe034f80_Obj_mesh_layer_1_vtx_1() {
	int i = 0;
	int count = 24;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_DL_bob_1_0xe034f80_Obj_mesh_layer_1_vtx_1);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob_dl_DL_bob_1_0xe034f80_Obj_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 12;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_DL_bob_1_0xe034f80_Obj_mesh_layer_1_vtx_7);

	deltaY = (int)(0.30000001192092896 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob() {
	scroll_bob_dl_DL_bob_1_0xe034f80_Obj_mesh_layer_1_vtx_1();
	scroll_bob_dl_DL_bob_1_0xe034f80_Obj_mesh_layer_1_vtx_7();
};
