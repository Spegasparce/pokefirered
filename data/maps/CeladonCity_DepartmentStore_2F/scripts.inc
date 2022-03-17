CeladonCity_DepartmentStore_2F_MapScripts:: @ 816BAF4
	.byte 0

CeladonCity_DepartmentStore_2F_EventScript_UnusedNPC:: @ 816BAF5
	msgbox CeladonCity_DepartmentStore_2F_Text_SuperRepelMorePowerfulRepel, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_2F_EventScript_Lass:: @ 816BAFE
	msgbox CeladonCity_DepartmentStore_2F_Text_BuyReviveForLongOutings, MSGBOX_NPC
	end

CeladonCity_DepartmentStore_2F_EventScript_FloorSign:: @ 816BB07
	msgbox CeladonCity_DepartmentStore_2F_Text_FloorSign, MSGBOX_SIGN
	end

CeladonCity_DepartmentStore_2F_EventScript_ClerkItems:: @ 816BB10
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart CeladonCity_DepartmentStore_2F_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
CeladonCity_DepartmentStore_2F_Items:: @ 816BB38
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_NONE
	release
	end

Celadon_TM_Vendor::
	lock
	msgbox Text_Celadon_TM_Vendor, MSGBOX_DEFAULT
	release
	end

Text_Celadon_TM_Vendor::
	.string	"Unfortunately, we're all\n"
	.string	"out of TMs due to global\l"
	.string "supply chain issues.$"

