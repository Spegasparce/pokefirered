.equ LOCALID_ROCKET_GRUNT, 1

RocketHideout_B1F_MapScripts:: @ 8161195
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_B1F_OnTransition
	.byte 0

RocketHideout_B1F_OnLoad:: @ 81611A0
	call_if_unset FLAG_HIDE_CELADON_ROCKETS, RocketHideout_B1F_EventScript_SetBarrier
	end

RocketHideout_B1F_OnTransition:: @ 81611AA
	setworldmapflag FLAG_WORLD_MAP_ROCKET_HIDEOUT_B1F
	end

RocketHideout_B1F_EventScript_Grunt2TriggerRight::
	lockall
	setvar VAR_TEMP_1, 0
	goto RocketHideout_B1F_EventScript_Grunt2
	end

RocketHideout_B1F_EventScript_Grunt2TriggerMiddle::
	lockall
	setvar VAR_TEMP_1, 1
	goto RocketHideout_B1F_EventScript_Grunt2
	end

RocketHideout_B1F_EventScript_Grunt2TriggerLeft::
	lockall
	goto RocketHideout_B1F_EventScript_Grunt2
	end

RocketHideout_B1F_EventScript_Grunt1:: @ 81611AE
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_8, RocketHideout_B1F_Text_Grunt1Intro, RocketHideout_B1F_Text_Grunt1Defeat
	msgbox RocketHideout_B1F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Grunt2:: @ 81611C5
	goto_if_set FLAG_HIDE_CELADON_ROCKETS, RocketHideout_B1F_EventScript_RemoveBlock
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_9, RocketHideout_B1F_EventScript_Grunt2Locking
	msgbox RocketHideout_B1F_Text_Grunt2Intro, MSGBOX_YESNO
	compare VAR_RESULT, NO
    goto_if_eq RocketHideout_B1F_EventScript_Grunt2PushOut
	compare VAR_RESULT, YES
    goto_if_eq RocketHideout_B1F_EventScript_Grunt2_Battle
	end

RocketHideout_B1F_EventScript_Grunt2_Battle::
	msgbox RocketHideout_B1F_Text_Grunt2Battle
	trainerbattle_no_intro  TRAINER_TEAM_ROCKET_GRUNT_9, RocketHideout_B1F_Text_Grunt2Defeat
	applymovement LOCALID_ROCKET_GRUNT, RocketHideout_B1F_Movement_Grunt2_PushDown
	applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_B1F_Movement_WalkDown
	waitmovement 0
	end


RocketHideout_B1F_EventScript_Grunt2PushOut::
	msgbox RocketHideout_B1F_Text_Grunt2ComeBack
	applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_B1F_Movement_WalkUp
	waitmovement 0
	releaseall
	end

RocketHideout_B1F_EventScript_Grunt2Locking::
	msgbox RocketHideout_B1F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
	applymovement LOCALID_ROCKET_GRUNT, RocketHideout_B1F_Movement_Grunt2_PushDown
	applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_B1F_Movement_WalkDown
	waitmovement 0
	end

RocketHideout_B1F_EventScript_Grunt3:: @ 81611DC
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_10, RocketHideout_B1F_Text_Grunt3Intro, RocketHideout_B1F_Text_Grunt3Defeat
	msgbox RocketHideout_B1F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Grunt4:: @ 81611F3
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_11, RocketHideout_B1F_Text_Grunt4Intro, RocketHideout_B1F_Text_Grunt4Defeat
	msgbox RocketHideout_B1F_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_Grunt5:: @ 816120A
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_12, RocketHideout_B1F_Text_Grunt5Intro, RocketHideout_B1F_Text_Grunt5Defeat
	msgbox RocketHideout_B1F_Text_Grunt5PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideout_B1F_EventScript_DefeatedGrunt5:: @ 8161225
	playse SE_KI_GASYAN
	special DrawWholeMapView
	waitse
	release
	end

RocketHideout_B1F_EventScript_SetBarrier:: @ 8161233
	setmetatile 20, 19, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
	setmetatile 21, 19, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
	setmetatile 20, 20, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
	setmetatile 21, 20, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	return

RocketHideout_B1F_EventScript_RemoveBarrier:: @ 816126A
	setmetatile 20, 19, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 21, 19, METATILE_SilphCo_HideoutFloor, 0
	setmetatile 20, 20, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 21, 20, METATILE_SilphCo_HideoutFloor, 0
	setmetatile 20, 21, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
	setmetatile 21, 21, METATILE_SilphCo_HideoutFloor, 0
	return


RocketHideout_B1F_Movement_Grunt2_PushDown::
    walk_right
	walk_left
	walk_in_place_fastest_right
	step_end

RocketHideout_B1F_Movement_WalkDown::
	walk_down
	step_end

RocketHideout_B1F_EventScript_RemoveBlock::
	releaseall
	end

RocketHideout_B1F_Movement_WalkUp::
	walk_up
	step_end