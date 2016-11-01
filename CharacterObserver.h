//! Header file for a Character Observer
#pragma once
#include "Observer.h" 
#include "Character.h"

class CharacterObserver :public Observer {
public:
	//! Default Constructor
	CharacterObserver();
	//! Constructor taking a pointer of type Character as parameter. Attaches a subject to the observer
	CharacterObserver(Character* c);
	//! Destructor
	~CharacterObserver();
	//! Update method calling the display method
	void update();
	//! Prints the updated character stats
	void display();
private:
	Character *subject;
};
