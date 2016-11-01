#include "Sword.h"
//! Default Constructor
Sword::Sword() :Item("", "WEAPON", {}) {

}
//! Constructor taking 3 parameters: the name of the sword, the type & its enhancement vector (ATT,DAM)
Sword::Sword(string swordName, string type, vector<Enhancement> myinfluence) : Item(swordName,"WEAPON", myinfluence) {
	if (validateItem() == true)
		cout << "Generating Sword object...\n";
	else
		cout << "Sword object cannot be generated. Invalid influence modifiers (must be in the sequence: ATT, DAM) \n\n";
}
//! Accessor for ATT
int Sword::getAtt() {
	return getInfluences()[0].getBonus();
}
//! Accessor for DAM
int Sword::getDam() {
	return getInfluences()[1].getBonus();
}
//! Prints stats of the sword
void Sword::showStats() {
	cout << getName() << endl;
	printVector(getInfluences());
}
