//! Header file for Helmet object
#pragma once
#include "Item.h"

class Helmet : public Item {

public:
	//! Default Constructor
	Helmet();
	//! Constructor taking 3 parameters (the name of the helmet, the type and its influence vector (INT, WIS, ARM)
	Helmet(string nameHelmet, string type, vector<Enhancement> myinfluence);
	//! Prints stats of the helmet
	void showStats();
};
