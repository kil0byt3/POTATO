#include "script_component.hpp"

class CfgPatches //Very important, makes this text into something Arma cares about. https://community.bistudio.com/wiki/CfgPatches
{
	class kiloBW_ZeusFPSMonitor
	{
		units[] = {}; // Unit classnames addind in this mod. None added here.
		weapons[] = {}; // Weapon classnames added by this mod. None added here.
		requiredVersion = 1;
		requiredAddons[] = {"A3_Modules_F"}; // Makes sure Arma 3 is loaded, because... reasons. lol
	};
};
class CfgFunctions //Script converted to function to be run at the beginning of missions.
{
	class kiloBW
	{
		class startup //Define for postInit below. It looks for files with this format fn_thisClassName.sqf (fn_clientFPSinit.sqf)
		{
			file = "\potato\addons\zeusFPSMonitor\functions";// Location of the .sqf function within the .pbo file.
			class zeus_initFPS{postInit = 1;};
		}; //Call the function at the beginning of every mission. https://community.bistudio.com/wiki/Functions_Library_(Arma_3)#Pre_and_Post_Init
	};
};
