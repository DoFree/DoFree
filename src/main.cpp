#include <iostream>
#include <SFML/Graphics.hpp>
#include"ImageManager.hpp"
using namespace std;

int main()
{

sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SFML");
 
cout << "Bonjour !";
sf::Sprite test;
test.SetPosition(200, 200);

ImageManager ImageMngr; //instance de ma classe
ImageMngr.CreateAndRange("artwork/sprites/bouleGelee.png", "bouleGelee");
ImageMngr.IDToImage("bouleGelee");
test.SetImage(*ImageMngr.IDToImage("bouleGelee"));
ImageMngr.CreateAndRange("poepjfdpojf/zefefzzef/zefzefzef.png", "caca");
while(App.IsOpened())
{
	sf::Event Event;
	while(App.GetEvent(Event))
{
	if(Event.Type == sf::Event::Closed)
	{
		App.Close();
	}
}
	App.Clear();
	App.Draw(test);
	App.Display();
}

return 0;

}
