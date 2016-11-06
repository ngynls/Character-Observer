//! Implementation file for the Armor
#include "Armor.h"

//! Default Constructor
Armor::Armor() :Item("ARMOR", {}) {
	nameOfArmor = "NOTHING";
}
//! Constructor that takes 3 parameters (name of the armor, the type & the influence vector (ARM))
Armor::Armor(string nameArmor, string type, vector<Enhancement> myinfluence):Item(type,myinfluence){
	if (validateItem() == true) {
		cout << "Generating Armor object...\n";
		nameOfArmor = nameArmor;
	}
	else
		cout << "Armor object cannot be generated. Invalid influence modifiers (must be in the sequence: ARM) \n\n";
}
string Armor::getArmorName() {
	return nameOfArmor;
}
//! Prints stats of the armor
void Armor::showStats() {
	cout << getArmorName() << endl;
	printVector(getInfluences());
}