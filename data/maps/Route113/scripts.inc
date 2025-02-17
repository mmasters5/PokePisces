Route113_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, Route113_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, Route113_OnTransition
	.byte 0

Route113_OnResume:
	setstepcallback STEP_CB_ASH
	end

Route113_OnTransition:
	clearflag FLAG_FORCE_MIRAGE_TOWER_VISIBLE
	call Route113_EventScript_CheckSetAshWeather
	end

Route113_EventScript_CheckSetAshWeather::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	goto_if_lt VAR_TEMP_0, 19, Route113_EventScript_DontSetAshWeather
	goto_if_gt VAR_TEMP_0, 84, Route113_EventScript_DontSetAshWeather
	setweather WEATHER_VOLCANIC_ASH
	return

Route113_EventScript_DontSetAshWeather::
	return

Route113_EventScript_Ashe::
    trainerbattle_single TRAINER_P_ASHE, Route113_Text_AsheIntro, Route113_Text_AsheDefeated
    msgbox Route113_Text_AshePostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Sara::
    trainerbattle_single TRAINER_P_SARA, Route113_Text_SaraIntro, Route113_Text_SaraDefeated
    msgbox Route113_Text_SaraPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Togedemaru::
    trainerbattle_single TRAINER_P_TOGEDEMARU, Route113_Text_TogedemaruIntro, Route113_Text_TogedemaruDefeated
    msgbox Route113_Text_TogedemaruPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Jucika::
    trainerbattle_single TRAINER_P_JUCIKA, Route113_Text_JucikaIntro, Route113_Text_JucikaDefeated
    msgbox Route113_Text_JucikaPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Naruto::
    trainerbattle_single TRAINER_P_NARUTO, Route113_Text_NarutoIntro, Route113_Text_NarutoDefeated
    msgbox Route113_Text_NarutoPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Kushina::
    trainerbattle_single TRAINER_P_KUSHINA, Route113_Text_KushinaIntro, Route113_Text_KushinaDefeated
    msgbox Route113_Text_KushinaPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Callum::
    trainerbattle_single TRAINER_P_CALLUM, Route113_Text_CallumIntro, Route113_Text_CallumDefeated
    msgbox Route113_Text_CallumPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Kusuo::
    trainerbattle_single TRAINER_P_KUSUO, Route113_Text_KusuoIntro, Route113_Text_KusuoDefeated
    msgbox Route113_Text_KusuoPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Mirai::
    trainerbattle_single TRAINER_P_MIRAI, Route113_Text_MiraiIntro, Route113_Text_MiraiDefeated
    msgbox Route113_Text_MiraiPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Kurenai::
    trainerbattle_single TRAINER_P_KURENAI, Route113_Text_KurenaiIntro, Route113_Text_KurenaiDefeated
    msgbox Route113_Text_KurenaiPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_EventScript_Sakurai::
    trainerbattle_single TRAINER_P_SAKURAI, Route113_Text_SakuraiIntro, Route113_Text_SakuraiDefeated
    msgbox Route113_Text_SakuraiPostBattle, MSGBOX_AUTOCLOSE
    end

Route113_Text_AsheIntro:
	.string "What, you didn't bring an umbrella?$"

Route113_Text_AsheDefeated:
	.string "Have fun getting ashed on...$"

Route113_Text_AshePostBattle:
	.string "I'm no Seattlite.$"

Route113_Text_SaraIntro:
	.string "I have a great burden to bear.$"

Route113_Text_SaraDefeated:
	.string "Soooo... Heavy....$"

Route113_Text_SaraPostBattle:
	.string "I shouldn't have packed my folding\n"
	.string "bicycle.$"

Route113_Text_TogedemaruIntro:
	.string "Prepare to be Ninja'd!$"

Route113_Text_TogedemaruDefeated:
	.string "Hey! I'll be the one doin' the Ninja-ing\n"
	.string "around here!$"

Route113_Text_TogedemaruPostBattle:
	.string "...Do ya mind?...\n"
	.string "I'm tryin' to brood over here!$"

Route113_Text_JucikaIntro:
	.string "Oh, how great, another interruption.$"

Route113_Text_JucikaDefeated:
	.string "...Great.$"

Route113_Text_JucikaPostBattle:
	.string "Will you leave now?\n"
	.string "I have work to do.$"

Route113_Text_NarutoIntro:
	.string "Nin nin nin!!$"

Route113_Text_NarutoDefeated:
	.string "Doryaaaah!!$"

Route113_Text_NarutoPostBattle:
	.string "Im an assassin nin nin...$"

Route113_Text_KushinaIntro:
	.string "intro$"

Route113_Text_KushinaDefeated:
	.string "defeat$"

Route113_Text_KushinaPostBattle:
	.string "post$"

Route113_Text_CallumIntro:
	.string "intro$"

Route113_Text_CallumDefeated:
	.string "defeat$"

Route113_Text_CallumPostBattle:
	.string "post$"

Route113_Text_KusuoIntro:
	.string "These powers are a curse.$"

Route113_Text_KusuoDefeated:
	.string "You beat me, even with my curse?$"

Route113_Text_KusuoPostBattle:
	.string "You truly are remarkable.$"

Route113_Text_MiraiIntro:
	.string "intro$"

Route113_Text_MiraiDefeated:
	.string "defeat$"

Route113_Text_MiraiPostBattle:
	.string "post$"

Route113_Text_KurenaiIntro:
	.string "intro$"

Route113_Text_KurenaiDefeated:
	.string "defeat$"

Route113_Text_KurenaiPostBattle:
	.string "post$"

Route113_Text_SakuraiIntro:
	.string "intro$"

Route113_Text_SakuraiDefeated:
	.string "defeat$"

Route113_Text_SakuraiPostBattle:
	.string "post$"
