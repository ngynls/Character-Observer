//! Implmentation file for the Belt
#include "Belt.h"

//! Default Constructor
Belt::Belt() : Item("BELT", {}) {
	nameOfBelt = "NOTHING";
}

//! Constructor taking 3 parameters (the name of the belt, the type & the enhancement vector (CON, STR)
Belt::Belt(string beltName, string type, vector<Enhancement> myenhancement) : Item("BELT", myenhancement) {
	if (validateItem() == true) {
		cout << "Generating Belt object... \n";
		nameOfBelt = beltName;
	}
	else
		cout << "Belt object cannot be generated. Invalid influence modifiers (must be in the sequence: CON,STR) \n\n";
}

string Belt::getBeltName() {
	return nameOfBelt;
}
//! Prints the stats of the belt
void Belt::showStats() {
	cout << getBeltName() << endl;
	printVector(getInfluences());
}
