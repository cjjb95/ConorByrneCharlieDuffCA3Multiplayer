#include <RoboCatClientPCH.h>

std::unique_ptr<SFTextureManager> SFTextureManager::sInstance;

void SFTextureManager::StaticInit()
{
	sInstance.reset(new SFTextureManager());
}

SFTextureManager::SFTextureManager()
{
	CacheTexture("cat", "../Assets/cat.png");

	CacheTexture("heart", "../Assets/heart.png");
	CacheTexture("bullet", "../Assets/bullet.png");
	CacheTexture("tile", "../Assets/tile.png");
	CacheTexture("wood", "../Assets/wood.png");
	CacheTexture("stone", "../Assets/stone.png");
	CacheTexture("space", "../Assets/space.png");
	CacheTexture("wall", "../Assets/wall.png");
	CacheTexture("space-2", "../Assets/space-2.png");
	CacheTexture("space-3", "../Assets/space-3.png");
	CacheTexture("space-4", "../Assets/space-4.png");
	CacheTexture("stars", "../Assets/stars.png");
	CacheTexture("grass", "../Assets/grass.png");
	CacheTexture("start_screen", "../Assets/start_screen.png");
	CacheTexture("died_screen", "../Assets/died_screen.png");
	CacheTexture("winner_screen", "../Assets/winner_screen.png");

	// Player textures.
	CacheTexture("hitman", "../Assets/Mech1.png");
	CacheTexture("hatman", "../Assets/Mech2.png");
	CacheTexture("man_blue", "../Assets/Mech3.png");
	CacheTexture("man_brown", "../Assets/Mech4.png");
	CacheTexture("man_old", "../Assets/Mech5.png");
	CacheTexture("robot", "../Assets/Mech6.png");
	CacheTexture("soldier", "../Assets/Mech1.png");
	CacheTexture("woman", "../Assets/Mech2.png");
	CacheTexture("zombie", "../Assets/Mech3.png");

	// Healthbar frames.
	CacheTexture("health10", "../Assets/healthbar/health10.png");
	CacheTexture("health9", "../Assets/healthbar/health9.png");
	CacheTexture("health8", "../Assets/healthbar/health8.png");
	CacheTexture("health7", "../Assets/healthbar/health7.png");
	CacheTexture("health6", "../Assets/healthbar/health6.png");
	CacheTexture("health5", "../Assets/healthbar/health5.png");
	CacheTexture("health4", "../Assets/healthbar/health4.png");
	CacheTexture("health3", "../Assets/healthbar/health3.png");
	CacheTexture("health2", "../Assets/healthbar/health2.png");
	CacheTexture("health1", "../Assets/healthbar/health1.png");
	CacheTexture("health0", "../Assets/healthbar/health0.png");
	CacheTexture("armor10", "../Assets/healthbar/armor10.png");
	CacheTexture("armor9", "../Assets/healthbar/armor9.png");
	CacheTexture("armor8", "../Assets/healthbar/armor8.png");
	CacheTexture("armor7", "../Assets/healthbar/armor7.png");
	CacheTexture("armor6", "../Assets/healthbar/armor6.png");
	CacheTexture("armor5", "../Assets/healthbar/armor5.png");
	CacheTexture("armor4", "../Assets/healthbar/armor4.png");
	CacheTexture("armor3", "../Assets/healthbar/armor3.png");
	CacheTexture("armor2", "../Assets/healthbar/armor2.png");
	CacheTexture("armor1", "../Assets/healthbar/armor1.png");

}

SFTexturePtr SFTextureManager::GetTexture(const string & inTextureName)
{
	return mNameToTextureMap[inTextureName];
}

bool SFTextureManager::CacheTexture(string inName, const char * inFileName)
{
	SFTexturePtr newTex(new sf::Texture());
	if (!newTex->loadFromFile(inFileName))
		return false;

	mNameToTextureMap[inName] = newTex;
	return true;
}
