#include"ImageManager.hpp"

void ImageManager::CreateAndRange(std::string Chemin, std::string Clef) 
{
	BaseImages[Clef.c_str()] = new sf::Image;
	BaseImages[Clef.c_str()]->LoadFromFile(Chemin.c_str());
}

sf::Image* ImageManager::IDToImage(std::string ID)
{
	return BaseImages[ID.c_str()];
}
