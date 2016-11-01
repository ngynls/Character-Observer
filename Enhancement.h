
#pragma once
#include<iostream>
#include <string>
#include <vector>
using namespace std;

//! Header file for Enhancement
class Enhancement {
private:
	string type;
	int bonus;
public:
	//! Default Constructor
	Enhancement();
	//! Constructor taking two parameters (type & bonus)
	Enhancement(string atype, int abonus);
	//! Accessor method for the type
	string getType();
	//! Accessor method for the bonus
	int getBonus();
	//! Setter method for the type
	void setType(string atype);
	//! Setter method for the bonus
	void setBonus(int abonus);

};
