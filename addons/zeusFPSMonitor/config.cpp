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
