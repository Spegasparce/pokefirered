SilphCo_1F_MapScripts:: @ 8161625
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
	.byte 0

SilphCo_1F_OnTransition:: @ 816162B
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
	call_if_set FLAG_HIDE_SILPH_ROCKETS, SilphCo_1F_EventScript_DisableLockYouInTrigger
	end

SilphCo_1F_EventScript_Receptionist:: @ 816162F
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
	end

SilphCo_1F_EventScript_FloorSign:: @ 8161638
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
	end

SilphCo_1F_EventScript_DisableLockYouInTrigger::
	setvar VAR_TEMP_1, 1
	return

SilphCo_1F_EventScript_LockYouInTriggerTop::
	setvar VAR_0x8008, 0
	goto SilphCo_1F_EventScript_LockYouInTrigger
	end

SilphCo_1F_EventScript_LockYouInTriggerBottom::
	setvar VAR_0x8008, 1
	goto SilphCo_1F_EventScript_LockYouInTrigger
	end

SilphCo_1F_EventScript_LockYouInTrigger:: 
	textcolor 0
	msgbox SilphCo_1F_Text_CriticalInfo
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkInPlaceFastestUp
	waitmovement 0
	delay 20
	compare VAR_0x8008, 1
	call_if_eq SilphCo_1F_EventScript_PlayerWalkToCounterBottom
	msgbox SilphCo_1F_Text_LockYouInText
	releaseall
	end

SilphCo_1F_EventScript_PlayerWalkToCounterBottom::
	applymovement OBJ_EVENT_ID_PLAYER, SilphCo_1F_Movement_WalkUp
	waitmovement 0
	return

SilphCo_1F_Movement_WalkUp::
	walk_up
	step_end

SilphCo_1F_EventScript_Scientist::
	call_if_set FLAG_HIDE_SILPH_ROCKETS, SilphCo_1F_EventScript_PostRocketScientist
	msgbox SilphCo_1F_Text_LockYouInText, MSGBOX_NPC
	end

SilphCo_1F_EventScript_PostRocketScientist::
	msgbox SilphCo_1F_Text_PostRocketScientist, MSGBOX_NPC
	end


