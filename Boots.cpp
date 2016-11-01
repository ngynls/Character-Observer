//! Implementation file for Boots
#include "Boots.h"

//! Default Constructor
Boots::Boots() :Item("", "BOOTS", {}) {
}

//! Constructor taking 3 parameters (the name of the boots, the type and the influence vector (ARM,DEX)
Boots::Boots(string bootsName, string type, vector<Enhancement> myenhancement): Item(bootsName, "BOOTS", myenhancement){
	if (validateItem() == true)
		cout << "Generating Boots object... \n";
	else
		cout << "Boots object cannot be generated. Invalid influence modifiers (must be in the sequence: ARM, DEX) \n\n";
}

//! Prints the stats of boots
void Boots::showStats() {
	cout << getName() << endl;
	printVector(getInfluences());
}