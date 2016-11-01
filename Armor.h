//! Header file for the Armor
#pragma once
#include "Item.h"

class Armor : public Item {
public:
	//! Default constructor
	Armor();
	//! Constructor that takes 3 parameters (name of the armor, the type, the influence vector (ARM))
	Armor(string nameOfArmor, string type, vector<Enhancement> myinfluence);
	//! Prints the stats of the armor
	void showStats();
};
