void scroll_hmc_dl_DL_hmc_1_0xe047730_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 25;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(hmc_dl_DL_hmc_1_0xe047730_Obj_mesh_layer_5_vtx_0);

	deltaX = (int)(0.1600000262260437 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_hmc() {
	scroll_hmc_dl_DL_hmc_1_0xe047730_Obj_mesh_layer_5_vtx_0();
};
