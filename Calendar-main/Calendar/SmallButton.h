#pragma once
#include<SFML/Graphics.hpp>

class SmallButton
{
	sf::ConvexShape triangleleft;
	sf::ConvexShape triangleright;
public:
	SmallButton();
	void Draw(sf::RenderWindow& window){ window.draw(triangleleft); }
};

