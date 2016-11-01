#include "Helmet.h"
//! Default Constructor
Helmet::Helmet() :Item("", "HELMET", {}) {
}
//! Constructor taking 3 parameters (the name of the helmet, the type and its influence vector (INT, WIS, ARM)
Helmet::Helmet(string nameHelmet, string type, vector<Enhancement> myinfluence):Item(nameHelmet,"HELMET", myinfluence){
	if (validateItem() == true)
		cout << "Generating Helmet object... \n";
	else
		cout << "Helmet object cannot be generated. Invalid influence modifiers (must be in the sequence: INT, WIS, ARM) \n\n";
}
//! Prints stats of the helmet
void Helmet::showStats() {
	cout << getName() << endl;
	printVector(getInfluences());
}