OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	lock
	faceplayer
	goto_if_set FLAG_JOVI_MET, OldaleTown_House1_EventScript_GiveWideLens
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	setflag FLAG_JOVI_MET
	release
	end

OldaleTown_House1_EventScript_GiveWideLens:
	setvar VAR_0x8004, 1
	specialvar VAR_RESULT, ScriptGetPokedexInfo
	goto_if_lt VAR_0x8006, 5, OldaleTown_House1_EventScript_NotEnoughMons
	msgbox OldaleTown_House1_Text_CheckForFiveMons, MSGBOX_DEFAULT
	giveitem ITEM_WIDE_LENS
	setflag FLAG_HIDE_JOVI_OLDALE_TOWN_HOUSE_1
	msgbox OldaleTown_House1_Text_JoviGoodbye, MSGBOX_DEFAULT
	warpsilent MAP_OLDALE_TOWN_HOUSE1, 5, 5
	release
	end

OldaleTown_House1_EventScript_NotEnoughMons:
	msgbox OldaleTown_House1_Text_NotEnoughMons, MSGBOX_NPC
	end

OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
	.string "Haha…  Did my brother send you to find\n"
	.string "me?  You got it!  I'm JOVI!\p"
	.string "Nice to meetcha.  Try to pay attention,\n"
	.string "m'kay?  MICHAEL wanted me to give you\l"
	.string "something, but that's boring, so we'll\l"
	.string "play a game.  I want to see POKéDEX\l"
	.string "data on 5 POKéMON!  Can you do that?$"

OldaleTown_House1_Text_CheckForFiveMons:
	.string "So, how's that POKéDEX coming?  Can\n"
	.string "I see?  One, two, three-four-five!\l"
	.string "Wowee, nice job!  Here, take this!$"

OldaleTown_House1_Text_NotEnoughMons:
	.string "I want to see POKéDEX data on 5\n"
	.string "POKéMON!  Can you do that?$"

OldaleTown_House1_Text_JoviGoodbye:
	.string "Well, catch ya later!$"
