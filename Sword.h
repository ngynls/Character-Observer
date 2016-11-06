//!Header file for a Sword object
#pragma once
#include "Item.h"

class Sword :public Item {
public: 
	//! Default Constructor
	Sword();
	//! Constructor taking 3 parameters: the name of the sword, the type & its enhancement vector (ATT,DAM)
	Sword(string swordName, string type, vector<Enhancement> myinfluence);
	//! Accessor for ATT
	int getAtt();
	//! Accessor for DAM
	int getDam();
	//! Accessor for the name of the sword
	string getSwordName();
	//! Prints stats of the sword
	void showStats();
private:
	string nameOfSword;
};