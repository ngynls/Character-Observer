//! Implmentation file for the Belt
#include "Belt.h"

//! Default Constructor
Belt::Belt() : Item("", "BELT", {}) {
}

//! Constructor taking 3 parameters (the name of the belt, the type & the enhancement vector (CON, STR)
Belt::Belt(string beltName, string type, vector<Enhancement> myenhancement) : Item(beltName, "BELT", myenhancement) {
	if (validateItem() == true)
		cout << "Generating Belt object... \n";
	else
		cout << "Belt object cannot be generated. Invalid influence modifiers (must be in the sequence: CON,STR) \n\n";
}

//! Prints the stats of the belt
void Belt::showStats() {
	cout << getName() << endl;
	printVector(getInfluences());
}
