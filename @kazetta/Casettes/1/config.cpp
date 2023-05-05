class CfgPatches
{
	class YK_Cassette_TestGroup //Here you specify your base class, just make it the same as the group name and that's it.
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","YK_Radio"}; //Do not forget the query to the main mod!!!
	};
};
class CfgVehicles
{
	class YK_Cassette_Base; //This is where the standard class for the tape is called, it's originally empty, but you need to inherit from it.
	class YK_Cassette_Test: YK_Cassette_Base //Here specify what your cassette will be called, obviously.
	{
		scope = 2;
		displayName = "EL LOPI"; //Название
		descriptionShort = "A SZIVEDET"; //Описание
		hiddenSelectionsTextures[] = {"Kazetta\textura\cassette_co.paa"}; //Path to the tape without text. Here you can already set your texture.
		class CfgCassette
		{
			soundSet = "YK_SoundSet_Test"; //Setting up your sound set.
		};
	};
};
class CfgSoundSets
{
	class Mods_SoundSet_Base;
	class YK_SoundSet_Test
	{
		soundShaders[] = {"YK_Test_Shader"};
	};
};
class CfgSoundShaders
{
	class YK_Cassette_SoundShader_Base;
	class YK_Test_Shader: YK_Cassette_SoundShader_Base 
	{
		samples[] = {{"Kazetta\Casettes\1\1",1}}; //Write the path to your track here. Now here is one of the tracks that are already in the mod.
	};
};