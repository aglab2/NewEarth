extern s8 gWantCheckpoint;

void bhv_checkpoint_flag_init(void){
	if(gWantCheckpoint == o->oBehParams2ndByte)
	{
        o->oAnimState = 1;
	}
	else
	{
        o->oAnimState = 0;
	}
}
//0 reg, 1 reset
void bhv_checkpoint_flag_loop(void){
	o->oIntangibleTimer=0;
	if (o->oDistanceToMario<150.0f || gMarioStates[0].interactObj == o){
		//don't set a real checkpoint because we don't have a real
		//warp node to set it to. Instead abuse the fact that
		//in game checkpoint only set the course num
		if (o->oAction==0 && o->oAnimState == 0) {
			cur_obj_play_sound_1(SOUND_GENERAL_OPEN_CHEST);
			gWantCheckpoint = o->oBehParams2ndByte;
			o->oAnimState = 1;
			o->oAction=1;
		}
	}else{
		o->oAction=0;
		if (gWantCheckpoint != o->oBehParams2ndByte)
		{
			o->oAnimState = 0;
		}
	}
}

s32 sInstantWarpCheckpoint = 0;
void bhv_checkpoint_instant_loop()
{
	o->oIntangibleTimer = 0;
	if (o->oDistanceToMario < 150.f || gMarioStates[0].interactObj == o)
	{
		if (sInstantWarpCheckpoint != o->oBehParams2ndByte)
		{
			cur_obj_play_sound_1(SOUND_GENERAL_OPEN_CHEST);
		}

		sInstantWarpCheckpoint = o->oBehParams2ndByte;
		if (o->oDistanceToMario < 150.f || gMarioStates->action == ACT_GRAB_POLE_SLOW || gMarioStates->action == ACT_GRAB_POLE_FAST || gMarioStates->action == ACT_CLIMBING_POLE || gMarioStates->action == ACT_HOLDING_POLE)
		{
			print_text_centered(160, 40, "PRESS L TO");
			print_text_centered(160, 20, "WARP BACK HERE");
		}
	}

	if (o->oBehParams2ndByte == sInstantWarpCheckpoint)
	{
		if (gMarioStates->action != ACT_STAR_DANCE_EXIT && gMarioStates->action != ACT_STAR_DANCE_NO_EXIT && gPlayer1Controller->buttonPressed & L_TRIG)
		{
			gMarioStates->usedObj = o;
		    mario_stop_riding_and_holding(gMarioStates);
			level_trigger_warp(gMarioStates, WARP_OP_TELEPORT);
		}
		o->oAnimState = 1;
	}
	else
	{
		o->oAnimState = 0;
	}
}
