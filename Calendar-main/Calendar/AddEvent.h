#pragma once
#include<SFML/Graphics.hpp>
class AddEvent
{
	sf::ConvexShape body;
	sf::Vector2f position;
	sf::Font font;
	sf::Text text;
public:
	AddEvent(sf::Vector2f position, sf::Font& font);
	void Draw(sf::RenderWindow& window) { window.draw(body); window.draw(text); }
	void Update(sf::RenderWindow& window);
	bool IsClicked(sf::RenderWindow& window);

};

