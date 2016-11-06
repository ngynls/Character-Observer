#include "Shield.h"

//! Default Constructor
Shield::Shield() :Item("SHIELD", {}) {
	nameOfShield = "NOTHING";
}
//! Constructor taking 3 parameters (the name of the shield, the type & its enhancement vector (ARM)
Shield::Shield(string shieldName, string type, vector<Enhancement> myinfluence) : Item("SHIELD", myinfluence) {
	if (validateItem() == true) {
		cout << "Generating Shield object...\n";
		nameOfShield = shieldName;
	}
	else
		cout << "Shield object cannot be generated. Invalid influence modifiers (must be in the sequence: ARM) \n\n";
}
string Shield::getShieldName() {
	return nameOfShield;
}
//! Prints stats of the shield
void Shield::showStats() {
	cout << nameOfShield << endl;
	printVector(getInfluences());
}