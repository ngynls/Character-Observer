#include "Helmet.h"
//! Default Constructor
Helmet::Helmet() :Item("HELMET", {}) {
	nameOfHelmet = "NOTHING";
}
//! Constructor taking 3 parameters (the name of the helmet, the type and its influence vector (INT, WIS, ARM)
Helmet::Helmet(string nameHelmet, string type, vector<Enhancement> myinfluence):Item("HELMET", myinfluence){
	if (validateItem() == true) {
		cout << "Generating Helmet object... \n";
		nameOfHelmet = nameHelmet;
	}
	else
		cout << "Helmet object cannot be generated. Invalid influence modifiers (must be in the sequence: INT, WIS, ARM) \n\n";
}
string Helmet::getHelmetName() {
	return nameOfHelmet;
}
//! Prints stats of the helmet
void Helmet::showStats() {
	cout << nameOfHelmet << endl;
	printVector(getInfluences());
}