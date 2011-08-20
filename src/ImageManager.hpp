#include <SFML/Graphics.hpp>
#include <map>

class ImageManager{

private :
	
	std::map<std::string, sf::Image*> BaseImages;

public :

	sf::Image* IDToImage(std::string ID);
	void CreateAndRange(std::string Chemin, std::string Clef);
};
