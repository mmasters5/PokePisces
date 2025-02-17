.set LOCALID_BREAD, 1

PerplumeMaze_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PerplumeMaze_OnLoad
	.byte 0

PerplumeMaze_OnLoad:
	call_if_gt VAR_BREADWINNER_STATE, 2, PerplumeMaze_EventScript_RemoveBreadwinner
	end

PerplumeMaze_EventScript_RemoveBreadwinner::
	removeobject LOCALID_BREAD
	setflag FLAG_TEMP_13
	return

PerplumeMaze_EventScript_BreadwinnerEncounter::
	lock
	applymovement OBJ_EVENT_ID_PLAYER, PerplumeMaze_Movement_PlayerWalkUpLadder
	applymovement LOCALID_BREAD, PerplumeMaze_Movement_BreadEnc
	waitmovement 0
	pike_flashscreen
	playse SE_M_SWORDS_DANCE
	applymovement OBJ_EVENT_ID_PLAYER, PerplumeMaze_Movement_PlayerBlockBread
	waitmovement 0
	turnobject LOCALID_BREAD, DIR_SOUTH
	speakername PerplumeMaze_Text_NamePandou
	trainerbattle_single TRAINER_P_PANDOU_3, PerplumeMaze_Text_BreadwinnerIntro, PerplumeMaze_Text_BreadwinnerDefeat, PerplumeMaze_EventScript_BreadRun
	release
	end

PerplumeMaze_Movement_PlayerWalkUpLadder:
	walk_up
	walk_up
	walk_left
	delay_8
	emote_exclamation_mark
	step_end

PerplumeMaze_Movement_BreadEnc:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_right
	walk_slow_right
	step_end

PerplumeMaze_Movement_PlayerBlockBread:
	walk_faster_right
	face_up
	step_end

PerplumeMaze_EventScript_BreadRun::
	setvar VAR_BREADWINNER_STATE, 3
	speakername PerplumeMaze_Text_NamePandou
	msgbox PerplumeMaze_Text_BreadwinnerRunAway, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_BREAD, PerplumeMaze_Movement_BreadLookAround
	waitmovement 0
	playse SE_FLEE
	applymovement LOCALID_BREAD, PerplumeMaze_Movement_BreadEscape
	waitmovement 0
	removeobject LOCALID_BREAD
	setflag FLAG_TEMP_13
	release
	end

PerplumeMaze_Movement_BreadLookAround:
	face_right
	delay_16
	face_left
	delay_16
	face_up
	delay_16
	face_down
	delay_16
	step_end

PerplumeMaze_Movement_BreadEscape:
	jump_2_up
	step_end

PerplumeMaze_EventScript_Kris::
    trainerbattle_single TRAINER_P_KRIS, PerplumeMaze_Text_KrisIntro, PerplumeMaze_Text_KrisDefeated
    msgbox PerplumeMaze_Text_KrisPostBattle, MSGBOX_AUTOCLOSE
    end

PerplumeMaze_EventScript_Susie::
    trainerbattle_single TRAINER_P_SUSIE, PerplumeMaze_Text_SusieIntro, PerplumeMaze_Text_SusieDefeated
    msgbox PerplumeMaze_Text_SusiePostBattle, MSGBOX_AUTOCLOSE
    end

PerplumeMaze_EventScript_Ralsei::
    trainerbattle_single TRAINER_P_RALSEI, PerplumeMaze_Text_RalseiIntro, PerplumeMaze_Text_RalseiDefeated
    msgbox PerplumeMaze_Text_RalseiPostBattle, MSGBOX_AUTOCLOSE
    end

PerplumeMaze_Text_KrisIntro:
	.string "...$"

PerplumeMaze_Text_KrisDefeated:
	.string "...!?$"

PerplumeMaze_Text_KrisPostBattle:
	.string "<3$"

PerplumeMaze_Text_SusieIntro:
	.string "God dammit Kris!\n"
	.string "Where the hell are we?$"

PerplumeMaze_Text_SusieDefeated:
	.string "i dont know what to write here$"

PerplumeMaze_Text_SusiePostBattle:
	.string "My partner here is the\n"
	.string "weak, silent type. Heh heh.$"

PerplumeMaze_Text_RalseiIntro:
	.string "intro$"

PerplumeMaze_Text_RalseiDefeated:
	.string "defeat$"

PerplumeMaze_Text_RalseiPostBattle:
	.string "post$"

PerplumeMaze_Text_NamePandou:
	.string "Pandou$"

PerplumeMaze_Text_BreadwinnerIntro:
	.string "$"

PerplumeMaze_Text_BreadwinnerDefeat:
	.string "$"

PerplumeMaze_Text_BreadwinnerRunAway:
	.string "$"
