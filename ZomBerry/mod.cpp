class CfgMods
{
	class ZomBerry_AT
	{
		dir = "ZomBerry";
		picture = "";
		action = "";
		hideName = 0;
		hidePicture = 1;
		name = "ZomBerry Admin Tools";
		credits = "Vaker";
		author = "Vaker";
		authorID = "0"; 
		version = "0.1"; 
		extra = 0;
		type = "mod";
		
		dependencies[] = {"Mission"};
		
		class defs
		{
			class missionScriptModule
			{
				value = "";
				files[] = {"ZomBerry/AT/scripts/5_Mission"};
			};
		}
	};
};