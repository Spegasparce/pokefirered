CinnabarIsland_Gym_ObjectEvents::
	object_event 1, OBJ_EVENT_GFX_SUPER_NERD, 0, 25, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, CinnabarIsland_Gym_EventScript_Quinn, 0
	object_event 2, OBJ_EVENT_GFX_SCIENTIST, 0, 25, 2, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 5, CinnabarIsland_Gym_EventScript_Erik, 0
	object_event 3, OBJ_EVENT_GFX_SCIENTIST, 0, 17, 5, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, CinnabarIsland_Gym_EventScript_Avery, 0
	object_event 4, OBJ_EVENT_GFX_SUPER_NERD, 0, 16, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, CinnabarIsland_Gym_EventScript_Ramon, 0
	object_event 5, OBJ_EVENT_GFX_SCIENTIST, 0, 16, 18, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, CinnabarIsland_Gym_EventScript_Derek, 0
	object_event 6, OBJ_EVENT_GFX_SUPER_NERD, 0, 4, 19, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, CinnabarIsland_Gym_EventScript_Dusty, 0
	object_event 7, OBJ_EVENT_GFX_SCIENTIST, 0, 4, 11, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NORMAL, 0, CinnabarIsland_Gym_EventScript_Zac, 0
	object_event 8, OBJ_EVENT_GFX_BLAINE, 0, 5, 4, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_Gym_EventScript_Blaine, 0
	object_event 9, OBJ_EVENT_GFX_GYM_GUY, 0, 24, 20, 3, MOVEMENT_TYPE_FACE_DOWN, 1, 1, TRAINER_TYPE_NONE, 0, CinnabarIsland_Gym_EventScript_GymGuy, 0

CinnabarIsland_Gym_MapWarps::
	warp_def 24, 23, 3, 1, MAP_CINNABAR_ISLAND
	warp_def 25, 23, 3, 1, MAP_CINNABAR_ISLAND
	warp_def 26, 23, 3, 1, MAP_CINNABAR_ISLAND

CinnabarIsland_Gym_MapCoordEvents::
	coord_event 26, 15, 0, 0, VAR_TEMP_0, 0, 0, CinnabarIsland_Gym_EventScript_PokemonCheck
	coord_event 27, 15, 0, 0, VAR_TEMP_0, 0, 0, CinnabarIsland_Gym_EventScript_PokemonCheck
	coord_event 28, 15, 0, 0, VAR_TEMP_0, 0, 0, CinnabarIsland_Gym_EventScript_PokemonCheck

CinnabarIsland_Gym_MapBGEvents::
	bg_event 23, 20, 0, BG_EVENT_PLAYER_FACING_ANY, 0,CinnabarIsland_Gym_EventScript_GymStatue
	bg_event 27, 20, 0, BG_EVENT_PLAYER_FACING_ANY, 0,CinnabarIsland_Gym_EventScript_GymStatue
	bg_event 22, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quz1Left
	bg_event 23, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quz1Right
	bg_event 15, 2, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz2Left
	bg_event 16, 2, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz2Right
	bg_event 13, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz3Left
	bg_event 14, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz3Right
	bg_event 13, 17, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz4Left
	bg_event 14, 17, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz4Right
	bg_event 1, 18, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz5Left
	bg_event 2, 18, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz5Right
	bg_event 1, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz6Left
	bg_event 2, 10, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_Quiz6Right
	bg_event 3, 1, 0, BG_EVENT_PLAYER_FACING_NORTH, 0,CinnabarIsland_Gym_EventScript_BlaineFujiPhoto

CinnabarIsland_Gym_MapEvents::
	map_events CinnabarIsland_Gym_ObjectEvents, CinnabarIsland_Gym_MapWarps, CinnabarIsland_Gym_MapCoordEvents, CinnabarIsland_Gym_MapBGEvents

