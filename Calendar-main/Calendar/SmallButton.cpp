#include "SmallButton.h"

SmallButton::SmallButton()
{
	triangleleft.setPointCount(3);
	triangleleft.setPoint(0, sf::Vector2f(0.f, 24.f));
	triangleleft.setPoint(1, sf::Vector2f(24.f, 0.f));
	triangleleft.setPoint(2, sf::Vector2f(46.f, 48.f));
	triangleleft.setPosition(390.f, 46.f);
	triangleleft.setFillColor(sf::Color::Black);
}