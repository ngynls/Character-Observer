#include "Shield.h"

//! Default Constructor
Shield::Shield() :Item("", "SHIELD", {}) {
}
//! Constructor taking 3 parameters (the name of the shield, the type & its enhancement vector (ARM)
Shield::Shield(string shieldName, string type, vector<Enhancement> myinfluence) : Item(shieldName, "SHIELD", myinfluence) {
	if (validateItem() == true)
		cout << "Generating Shield object...\n";
	else
		cout << "Shield object cannot be generated. Invalid influence modifiers (must be in the sequence: ARM) \n\n";
}

//! Prints stats of the shield
void Shield::showStats() {
	cout << getName() << endl;
	printVector(getInfluences());
}