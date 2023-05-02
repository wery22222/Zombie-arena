#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Zombie
{
private:
	// How fast is each zombie type
	const float BLOATER_SPEED = 40;
	const float CHASER_SPEED = 80;
	const float CRAWLER_SPEED = 20;
	// How tough is each zombie
	const float BLOATER_HEATH = 5;
	const float CHASER_HEALTH = 1;
	const float CRAWLER_HEALTH = 3;
	//Make each zombie vary its speed
	const int MAX_VARRIANCE = 30;
	const int OFFSET = 101 - MAX_VARRIANCE;
	//Where is this zombie
	Vector2f m_Position;
	// A sprite for the Zombie
	Sprite m_Sprite;
	//How fast can this one run/crawl
	float m_Speed;
	//How much health has it got 
	float m_Health;
	//Is it still alive
	bool m_Alive;

	//Public prototypes go here
public:
	//Handle when a bullet hits a zombie
	bool hit();
	// Find out wether zombie is alive
	bool isAlive();
	//spawn a new zombie
	void spawn(float startX, float startY, int type, int seed);
	//return a rectangle that is the position in the world
	FloatRect getPosition();
	// Get a copy of the sprite to draw
	Sprite getSprite();
	// Update the zombie each frame
	void update(float elapsedTime, Vector2f playerLocation);
};