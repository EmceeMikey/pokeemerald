OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "I heard ROCK-type POKéMON are weak to\n"
	.string "AURAL-type moves.  I wonder why?$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "We still know so little about POKéMON.\p"
	.string "Humanity has a responsibility to learn\n"
	.string "all we can about this world!$"

