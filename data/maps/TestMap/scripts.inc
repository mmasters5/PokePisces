TestMap_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TestMapOnTransition
	.byte 0

TestMapOnTransition:
	goto TestMapEventScript_SetMauvilleOldManGfx
	end

TestMapEventScript_SetMauvilleOldManGfx::
	special SetMauvilleOldManObjEventGfx
	end

TestMap_EventScript_PoisonPartyTest::
	lock
	faceplayer
	msgbox TestMap_Text_MendelIntro, MSGBOX_DEFAULT
	burnplayerparty
	msgbox TestMap_Text_MendelPostBattle, MSGBOX_AUTOCLOSE
	release
	end

TestMap_EventScript_Mendel::
    trainerbattle_single TRAINER_P_MENDEL, TestMap_Text_MendelIntro, TestMap_Text_MendelDefeated
    msgbox TestMap_Text_MendelPostBattle, MSGBOX_AUTOCLOSE
    end

TestMap_EventScript_Egg::
	lock
	faceplayer
	playfanfare MUS_OBTAIN_ITEM
	message TestMap_Text_MendelPostBattle
	waitfanfare
	giveegg SPECIES_WANNEGG
	release
	end

TestMap_EventScript_SpeakerNameTest::
    lock
    speakername TestMap_Text_NameJacob
    msgbox TestMap_Text_MendelIntro, MSGBOX_DEFAULT
    speakername NULL
    msgbox TestMap_Text_MendelPostBattle, MSGBOX_AUTOCLOSE
    release
    end

TestMap_EventScript_GymLeader::
	lock
	trainerbattle_two_trainers TRAINER_P_MENDEL, TestMap_Text_MendelIntro, TRAINER_GRUNT_AQUA_HIDEOUT_2, TestMap_Text_MendelDefeated, TestMap_EventScript_Mendel, NO_MUSIC
	release
	end

TestMap_EventScript_ItemBurntBranch::
	finditem ITEM_BURNT_BRANCH
	end

TestMap_EventScript_ItemCursedAmulet::
	finditem ITEM_CURSED_AMULET
	end

TestMap_EventScript_OldGuysTest::
	lock
	faceplayer
	setvar VAR_BARD_COLOR, MAUVILLE_MAN_GIDDY
	msgbox TestMap_Text_MendelDefeated, MSGBOX_AUTOCLOSE
	release
	end

TestMap_EventScript_FightLegends::
	lock
	msgbox TestMap_Text_MendelDefeated, MSGBOX_DEFAULT
	closemessage
	setwildbattle SPECIES_LUOSHAN, 50, ITEM_NONE, SPECIES_KYOGRE, 50, ITEM_NONE
	setflag FLAG_WILD_NO_CATCHING_FLAG
	setflag FLAG_WILD_NO_RUNNING_FLAG
	setflag FLAG_WILD_NO_CATCHING_FLAG
	setflag FLAG_SMART_WILD_AI_FLAG
	delay 4
	dowildbattle
	delay 8
	clearflag FLAG_WILD_NO_CATCHING_FLAG
	clearflag FLAG_WILD_NO_RUNNING_FLAG
	clearflag FLAG_WILD_NO_CATCHING_FLAG
	clearflag FLAG_SMART_WILD_AI_FLAG
	release
	end

TestMap_Text_MendelIntro:
	.string "intro$"

TestMap_Text_MendelDefeated:
	.string "defeat$"

TestMap_Text_MendelPostBattle:
	.string "post$"

TestMap_Text_NameJacob:
	.string "Quigley$"
