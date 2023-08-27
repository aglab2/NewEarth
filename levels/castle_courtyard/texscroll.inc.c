void scroll_castle_courtyard_dl_DL_castle_courtyard_1_0xe018af0_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 54;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_1_0xe018af0_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_1_0xe018af0_Obj_mesh_layer_1_vtx_11() {
	int i = 0;
	int count = 6;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_1_0xe018af0_Obj_mesh_layer_1_vtx_11);

	deltaX = (int)(0.07000002264976501 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 23;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.25 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_9() {
	int i = 0;
	int count = 8;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_9);

	deltaX = (int)(0.2800000309944153 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_18() {
	int i = 0;
	int count = 78;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_18);

	deltaX = (int)(0.1600000262260437 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_19() {
	int i = 0;
	int count = 56;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_19);

	deltaX = (int)(0.1600000262260437 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_24() {
	int i = 0;
	int count = 289;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_24);

	deltaY = (int)(0.2499999850988388 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_courtyard_dl_DL_castle_courtyard_5_0xe00b750_Obj_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 108;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(castle_courtyard_dl_DL_castle_courtyard_5_0xe00b750_Obj_mesh_layer_1_vtx_0);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_castle_courtyard() {
	scroll_castle_courtyard_dl_DL_castle_courtyard_1_0xe018af0_Obj_mesh_layer_1_vtx_4();
	scroll_castle_courtyard_dl_DL_castle_courtyard_1_0xe018af0_Obj_mesh_layer_1_vtx_11();
	scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_3();
	scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_9();
	scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_18();
	scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_19();
	scroll_castle_courtyard_dl_DL_castle_courtyard_4_0xe01e4f0_Obj_mesh_layer_1_vtx_24();
	scroll_castle_courtyard_dl_DL_castle_courtyard_5_0xe00b750_Obj_mesh_layer_1_vtx_0();
};
