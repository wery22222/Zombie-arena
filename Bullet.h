#pragma once
# include <SFML/Graphics.hpp>
using namespace sf;
class Bullet
{
private:
	// Where is the Bullet
	Vector2f m_Position;
	//What each bullet looks like
	RectangleShape m_BulletShape;
	//Is this bullet currently whizzing through hte air
	bool m_InFlight = false;
	//How fast does the bullet travel
	float m_BulletSpeed = 1000;
	//What fraction of 1 pixel does the bullet travel, Horizantally and vertically each frame
	float m_BulletDistanceX;
	float m_BulletDistanceY;

	//Some boundaries so the bullet doesn't fly forever
	float m_MaxX;
	float m_MinX;
	float m_MaxY;
	float m_MinY;
//Public prototypes here
public:
	//Constructor
	Bullet();
	//Stop the bullet
	void stop();
	//Returns the value of m_InFlight 
	bool isInFlight();
	// Launch a new bullet
	void shoot(float startX, float startY, float xTarget, float yTarget);
	// telling the code where in the world the bullet is
	FloatRect getPosition();
	// Return the actual shape
	RectangleShape getShape();
	// Update the bullet each frame
	void update(float elapsedTime);

};