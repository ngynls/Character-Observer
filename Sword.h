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
	//! Prints stats of the sword
	void showStats();
};