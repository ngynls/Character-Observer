//! Header file for the Belt
#pragma once
#include "Item.h"

class Belt : public Item {
public:
	//! Default Constructor
	Belt();
	//! Constructor taking 3 parameters: the name of the belt, the type and the enhancement (CON,STR)
	Belt(string beltName, string type, vector<Enhancement> myenhancement);
	//! Prints the stats of the belt
	void showStats();
};