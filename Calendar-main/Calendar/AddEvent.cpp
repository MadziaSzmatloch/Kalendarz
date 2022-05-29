#include "AddEvent.h"

AddEvent::AddEvent(sf::Vector2f position, sf::Font& font)
{
	body.setPointCount(4);
	body.setPoint(0, sf::Vector2f(39.f, 3.f));
	body.setPoint(1, sf::Vector2f(6.f, 59.f));
	body.setPoint(2, sf::Vector2f(189.f, 59.f));
	body.setPoint(3, sf::Vector2f(222.f, 3.f));

	sf::Color Purple(93, 9, 172);
	body.setFillColor(Purple);

	this->position = position;
	body.setPosition(position);

	this->font = font;
	text.setFont(font);
	text.setCharacterSize(22);
	text.setString("Add Event");
	text.setPosition((position.x + 39.0f) + 75.0f - (text.getGlobalBounds().width / 2.0f), position.y + 28.0f - (text.getGlobalBounds().height / 2.0f));
	text.setFillColor(sf::Color::White);

}

void AddEvent::Update(sf::RenderWindow& window)
{
	if (sf::Mouse::getPosition(window).x > body.getGlobalBounds().left && sf::Mouse::getPosition(window).x < (body.getGlobalBounds().left + body.getGlobalBounds().width) && sf::Mouse::getPosition(window).y > body.getGlobalBounds().top && sf::Mouse::getPosition(window).y < (body.getGlobalBounds().top + body.getGlobalBounds().height))
	{
		body.setPoint(0, sf::Vector2f(35, 0));
		body.setPoint(1, sf::Vector2f(0, 63));
		body.setPoint(2, sf::Vector2f(194, 63));
		body.setPoint(3, sf::Vector2f(228, 0));
	}
	else
	{
		body.setPoint(0, sf::Vector2f(39.f, 3.f));
		body.setPoint(1, sf::Vector2f(6.f, 59.f));
		body.setPoint(2, sf::Vector2f(189.f, 59.f));
		body.setPoint(3, sf::Vector2f(222.f, 3.f));
	}
}

bool AddEvent::IsClicked(sf::RenderWindow& window)
{
	if (sf::Mouse::getPosition(window).x > body.getGlobalBounds().left && sf::Mouse::getPosition(window).x < (body.getGlobalBounds().left + body.getGlobalBounds().width) && sf::Mouse::getPosition(window).y > body.getGlobalBounds().top && sf::Mouse::getPosition(window).y < (body.getGlobalBounds().top + body.getGlobalBounds().height))
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
			return true;
	}
	return false;
}


