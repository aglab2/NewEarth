void scroll_sa_dl_DL_sa_1_0xe03f590_Obj_mesh_layer_1_vtx_43() {
	int i = 0;
	int count = 61;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_1_0xe03f590_Obj_mesh_layer_1_vtx_43);

	deltaY = (int)(0.1600000262260437 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_1_0xe03f590_Obj_mesh_layer_1_vtx_71() {
	int i = 0;
	int count = 622;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_1_0xe03f590_Obj_mesh_layer_1_vtx_71);

	deltaY = (int)(0.2800000309944153 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_2_0xe026a10_Obj_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 12;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_2_0xe026a10_Obj_mesh_layer_1_vtx_4);

	deltaY = (int)(0.12999999523162842 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_2_0xe02c970_Obj_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 20;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_2_0xe02c970_Obj_mesh_layer_5_vtx_0);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_4_0xe004180_Obj_mesh_layer_1_vtx_3() {
	int i = 0;
	int count = 6;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_4_0xe004180_Obj_mesh_layer_1_vtx_3);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_11() {
	int i = 0;
	int count = 93;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_11);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_12() {
	int i = 0;
	int count = 57;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_12);

	deltaX = (int)(0.1899999976158142 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_13() {
	int i = 0;
	int count = 228;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_13);

	deltaY = (int)(0.2200000286102295 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_18() {
	int i = 0;
	int count = 10;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_18);

	deltaY = (int)(0.1899999976158142 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_28() {
	int i = 0;
	int count = 59;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_28);

	deltaY = (int)(0.7599999904632568 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_38() {
	int i = 0;
	int count = 502;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_38);

	deltaY = (int)(0.10000002384185791 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_sa() {
	scroll_sa_dl_DL_sa_1_0xe03f590_Obj_mesh_layer_1_vtx_43();
	scroll_sa_dl_DL_sa_1_0xe03f590_Obj_mesh_layer_1_vtx_71();
	scroll_sa_dl_DL_sa_2_0xe026a10_Obj_mesh_layer_1_vtx_4();
	scroll_sa_dl_DL_sa_2_0xe02c970_Obj_mesh_layer_5_vtx_0();
	scroll_sa_dl_DL_sa_4_0xe004180_Obj_mesh_layer_1_vtx_3();
	scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_11();
	scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_12();
	scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_13();
	scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_18();
	scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_28();
	scroll_sa_dl_DL_sa_5_0xe02bc60_Obj_mesh_layer_1_vtx_38();
};
