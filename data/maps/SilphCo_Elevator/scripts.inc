SilphCo_Elevator_MapScripts:: @ 8161F6E
	.byte 0

SilphCo_Elevator_EventScript_FloorSelect:: @ 8161F6F
	lockall
	setvar VAR_0x8004, 1
	call_if_unset FLAG_TEMP_2, EventScript_GetElevatorFloor
	copyvar VAR_0x8005, VAR_ELEVATOR_FLOOR
	special DrawElevatorCurrentFloorWindow
	message Text_WantWhichFloor
	waitmessage
	setvar VAR_0x8004, LISTMENU_SILPHCO_FLOORS
	specialvar VAR_RESULT, InitElevatorFloorSelectMenuPos
	special ListMenu
	waitstate
	switch VAR_RESULT
	case 0, SilphCo_Elevator_EventScript_To1F
	case 1, SilphCo_Elevator_EventScript_ExitFloorSelect
	case 127, SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_To1F:: @ 816202F
	setvar VAR_0x8006, 4
	setdynamicwarp MAP_SILPH_CO_1F, 255, 22, 3
	compare VAR_ELEVATOR_FLOOR, 4
	goto_if_eq SilphCo_Elevator_EventScript_ExitFloorSelect
	call SilphCo_Elevator_EventScript_MoveElevator
	setvar VAR_ELEVATOR_FLOOR, 4
	goto SilphCo_Elevator_EventScript_ExitFloorSelect
	end

SilphCo_Elevator_EventScript_ExitFloorSelect:: @ 81621E7
	special CloseElevatorCurrentFloorWindow
	releaseall
	end

SilphCo_Elevator_EventScript_MoveElevator:: @ 81621EC
	special CloseElevatorCurrentFloorWindow
	closemessage
	waitse
	special AnimateElevator
	waitstate
	setflag FLAG_TEMP_2
	return
