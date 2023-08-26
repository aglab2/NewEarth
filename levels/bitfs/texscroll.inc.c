void scroll_bitfs_dl_DL_bitfs_1_0xe00a960_Obj_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 30;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bitfs_dl_DL_bitfs_1_0xe00a960_Obj_mesh_layer_1_vtx_6);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bitfs() {
	scroll_bitfs_dl_DL_bitfs_1_0xe00a960_Obj_mesh_layer_1_vtx_6();
};
