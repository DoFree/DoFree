#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{

sf::RenderWindow App(sf::VideoMode(800, 600, 32), "SFML");
 
cout << "Bonjour !";

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

	App.Display();
}

return 0;

}
