//! Implementation file for a Ring object
#include "Ring.h"
//! Default Constructor
Ring::Ring() : Item("RING", {}) {
	nameOfRing = "NOTHING";
}
//! Constructor taking 3 parameters (the name of the ring, the type and its enhancement vector (ARM, STR, CON, WIS, CHA)
Ring::Ring(string nameRing, string type, vector<Enhancement> myinfluence):Item("RING", myinfluence) {
	if (validateItem() == true) {
		cout << "Generating Ring object...\n";
		nameOfRing = nameRing;
	}
	else
		cout << "Ring object cannot be generated. Invalid influence modifiers (must be in the sequence: ARM, STR, CON, WIS, CHA) \n\n";
}
string Ring::getRingName() {
	return nameOfRing;
}
//! Prints stats of the ring
void Ring::showStats() {
	cout << nameOfRing << endl;
	printVector(getInfluences());
}