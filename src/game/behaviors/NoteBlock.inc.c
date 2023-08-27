void bhv_noteblock_loop(void) {
	if (cur_obj_is_mario_on_platform()) {
		set_mario_action(gMarioState, ACT_DOUBLE_JUMP, 0);
		f32 Yspd = 200.0f;
		if (gMarioStates[0].controller->buttonDown & A_BUTTON) {
            int magic = 0x42800000 + 0x10000 * GET_BPARAM2(o->oBehParams);
            Yspd = *(float*)&magic;
		}
		if (gMarioStates[0].controller->buttonPressed & B_BUTTON) {
			Yspd = 0.f;
		}
		gMarioStates[0].vel[1] = Yspd;
		o->oAction = 1;
		// gMarioStates[0].flags |= MARIO_NO_FALL_DAMAGE;
	}
	if (o->oAction == 1) {
		if (o->oTimer == 4) {
			o->oAction = 0;
			o->oPosY = o->oHomeY;
		} else {
			if (o->oTimer > 2) {
				o->oPosY = o->oHomeY + (f32)(o->oTimer % 3) * 6;
			} else {
				o->oPosY = o->oHomeY - (f32)(o->oTimer) * 6;
			}
		}
	}
}
