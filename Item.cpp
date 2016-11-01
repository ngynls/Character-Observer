//! Implementation file for an Item
#include "Item.h"

//! Default Constructor
Item::Item() {
	name = "";
	type = "";
}
//! Custom constructor
Item::Item(string nameOfItem, string type_name, vector<Enhancement> influences) {
		name = nameOfItem;
		type = type_name;
		influence = influences;
}
//! Accessor method for the name of the item
string  Item::getName(){
	return name;
}
//! Accessor method for the type of the item
string Item::getType() {
	return type;
}

//! Method to return the list of influences
vector<Enhancement> Item::getInfluences() {
	return influence;
}

//! Method to set the name of the item
void Item::setName(string nameOfItem) {
	name = nameOfItem;
}

//! Method to set the type of the item
void Item::setItemType(string nameOfType) {
	type = nameOfType;
}

void Item::setEnhancement(vector<Enhancement> myinfluence) {
	influence = myinfluence;
}

//! Method to print an enhancement vector
void Item::printVector(vector<Enhancement>& printthis) {
	unsigned int size = printthis.size();

	for(int i=0; i<size;i++)
	cout << printthis[i].getType() << ": " << printthis[i].getBonus() << endl;
}

//! Method to validate item
bool Item::validateItem() {
	//for an armor object
	if ((getType() == "ARMOR") && (influence[0].getType() == "ARM"))
		return true;
	//for a belt object
	else if ((getType() == "BELT") && (influence[0].getType() == "CON") && (influence[1].getType() == "STR"))
		return true;
	//for a boots object
	else if ((getType() == "BOOTS") && (influence[0].getType() == "ARM") && (influence[1].getType() == "DEX"))
		return true;
	//for a helmet object
	else if ((getType() == "HELMET") && (influence[0].getType() == "INT") && (influence[1].getType() == "WIS") && (influence[2].getType() == "ARM"))
		return true;
	//for a ring object
	else if ((getType() == "RING") && (influence[0].getType() == "ARM") && (influence[1].getType() == "STR") && (influence[2].getType() == "CON")
		&& (influence[3].getType() == "WIS") && (influence[4].getType() == "CHA"))
		return true;
	// for a shield object
	else if ((getType() == "SHIELD") && (influence[0].getType() == "ARM"))
		return true;
	//for a sword object
	else if ((getType() == "WEAPON") && (influence[0].getType() == "ATT") && (influence[1].getType() == "DAM"))
		return true;
	else
		return false;
}

void Item::showStats() {
cout << getName() << endl;
printVector(getInfluences());
}
