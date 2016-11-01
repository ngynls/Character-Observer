#pragma once
#include<iostream>
#include <string>
#include<vector>
#include "Enhancement.h"
using namespace std;

//! Header file for the Item
class Item {
public:

	//! Default constructor
	Item();
	//! Custom constructor
	Item(string nameOfItem, string type_name, vector<Enhancement> influences);
	//! Accessor for the name
	string getName();
	//! Accessor for the type of item
	string getType();
	//! Accessor for the influences
	vector<Enhancement> getInfluences();
	//! Method to set the name
	void setName(string nameOfItem);
	//! Method to set the type
	void setItemType(string nameOftype);
	//! Method to set the enhancement vector
	void setEnhancement(vector<Enhancement> myinfluence);
	//! Method to print an enhancement vector
	void printVector(vector<Enhancement>& printthis);
	//! Method to validate an item
	bool validateItem();
	//! Method to print stats
	void showStats();

private:
	string name;
	string type;
	vector<Enhancement> influence;
};
