/*
//--By Repentz for altisLifeRPG
*/

// #include "..\..\script_macros.hpp"
// /*
// 	fn_seatBelt.sqf
// */
 	//playSound "seatbelt_on"; //--Enable this to play a sound when you put your seatbelt on

 if(!life_seatbelt) then {
 	life_seatbelt = true;
 	hintSilent "Emniyet Kemerini Taktiniz";
 	playSound "seatbelt_on"; //--Enable this to play a sound when you put your seatbelt on
 } else {
	life_seatbelt = false;
 	hintSilent "Emniyet Kemerini Cikarttiniz";
	 playSound "seatbelt_off"; //--Enable this to play a sound when you put your seatbelt off
 };

[] call life_fnc_hudUpdate; //--Enable this if you are putting a hud option to display when your seatbelt is on.