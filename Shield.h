//! Header file for a Shield object
#pragma once
#include "Item.h"

class Shield : public Item {
public:
	//! Default Constructor
	Shield();
	//! Constructor taking 3 parameters (the name of the shield, the type & its enhancement vector (ARMOR)
	Shield(string shieldName, string type, vector<Enhancement> myinfluence);
	//! Accessor for name of shield
	string getShieldName();
	//! Prints stats of the shield
	void showStats();
private:
	string nameOfShield;
};
