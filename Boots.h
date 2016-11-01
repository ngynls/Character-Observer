//! Header file for Boots
#pragma once
#include "Item.h"

class Boots : public Item {
public:
	//! Default Constructor
	Boots();
	//! Constructor taking 3 parameters (the name of the boots, the type and the influence vector (ARM,DEX)
	Boots(string bootsName, string type, vector<Enhancement> myinfluence);
	//! Prints the stats of the boots
	void showStats();
};
