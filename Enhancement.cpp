//! Implementation file for the Enhancement
#include "Enhancement.h"

//! Default Constructor
Enhancement::Enhancement() {
	type="";
	bonus=0;
}
//! Constructor taking two parameters (a string for the type & a integer for the bonus)
Enhancement::Enhancement(string atype, int abonus) {
	type = atype;

	if ((abonus < 0) || (abonus > 5))
		cout << "Error, cannot enhance with a value smaller than 0 or greater than 5 \n";
	else
		bonus = abonus;
}
//! Accessor method for the type
string Enhancement::getType() {
	return type;
}
//! Accessor method for the bonus
int Enhancement::getBonus() {
	return bonus;
}
//! Setter method for the type
void Enhancement::setType(string atype) {
	type = atype;
}
//! Setter method for the bonus
void Enhancement::setBonus(int abonus) {
	if ((abonus < 0) || (abonus > 5))
		cout << "Error, cannot enhance with a value smaller than 0 or greater than 5 \n";
	else
		bonus = abonus;
}
