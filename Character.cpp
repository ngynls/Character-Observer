#include "Character.h"
#include "Sword.h"
#include "Boots.h"
#include "Helmet.h"
#include "Ring.h"
#include "Shield.h"
#include "Armor.h"
#include "Belt.h"
#include "Enhancement.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <list>
using namespace std;

Character::Character(int strength, int dexterity, int constitution, int intelligent, int wisdom, int charisma) {
	level = 1;
	abilityPoint[0] = strength;
	abilityPoint[1] = dexterity;
	abilityPoint[2] = constitution;
	abilityPoint[3] = intelligent;
	abilityPoint[4] = wisdom;
	abilityPoint[5] = charisma;
	totalHP = 10;
	currentHP = totalHP;
	proficiency = 2;
	belt = new Belt();
	weapon = new Sword();
	shield = new Shield();
	armor = new Armor();
	boots = new Boots();
	ring = new Ring();
	helmet = new Helmet();
}
Character::Character() {
	level = 1;
	srand((int)time(0));
	for (int i = 0; i < 6; i++) {
		abilityPoint[i] = (rand() % 18) + 3;
		while (abilityPoint[i] < 3 || abilityPoint[i]>18) {
			abilityPoint[i] = (rand() % 18) + 3;
		}
	}
	totalHP = 10;
	currentHP = totalHP;
	belt = new Belt();
	weapon = new Sword();
	shield = new Shield();
	armor = new Armor();
	boots = new Boots();
	ring = new Ring();
	helmet = new Helmet();
}

Character::~Character() {
}

int Character::attackBonus() {
	return proficiency + strModifier();
}
int Character::damageBonus() {
	return weapon->getDam() + strModifier();
}
int Character::armorClass() {
	return 10 + dexModifier();
}

void Character::hp(int dmg) {
	currentHP -= dmg;
	notify();
}

Sword Character::getWeapon() {
	return *weapon;
}
void Character::setWeapon(Sword asword) {
	weapon = &asword;
}

Shield Character::getShield() {
	return *shield;
}
void Character::setShield(Shield ashield) {
	shield = &ashield;
}

Armor Character::getArmor() {
	return *armor;
}
void Character::setArmor(Armor anarmor) {
	armor = &anarmor;
}

Helmet Character::getHelmet() {
	return *helmet;
}
void Character::setHelmet(Helmet ahelm) {
	helmet = &ahelm;
}

Ring Character::getRing() {
	return *ring;
}
void Character::setRing(Ring aring) {
	ring = &aring;
}

Boots Character::getBoots() {
	return *boots;
}
void Character::setBoots(Boots aboot) {
	boots = &aboot;
}

Belt Character::getBelt() {
	return *belt;
}

void Character::setBelt(Belt abelt) {
	belt = &abelt;
}

int Character::getHP() {
	return currentHP;
}
int Character::getStrength() {
	return abilityPoint[0];
}
int Character::getDexterity() {
	return abilityPoint[1];
}
int Character::getConstitution() {
	return abilityPoint[2];
}
int Character::getIntelligent() {
	return abilityPoint[3];
}
int Character::getWisdom() {
	return abilityPoint[4];
}
int Character::getLevel() {
	return level;
}
int Character::getCharisma() {
	return abilityPoint[5];
}
int Character::strModifier() {
	return (abilityPoint[0] - 10) / 2;
}
int Character::dexModifier() {
	return (abilityPoint[1] - 10) / 2;
}
int Character::consModifier() {
	return (abilityPoint[2] - 10) / 2;
}
int Character::intModifier() {
	return (abilityPoint[3] - 10) / 2;
}
int Character::wisModifier() {
	return (abilityPoint[4] - 10) / 2;
}
int Character::chaModifier() {
	return (abilityPoint[5] - 10) / 2;
}
void Character::setLevel() {
	level += 1;
	setHP();
}
void Character::setHP() {
	if (level == 2) {
		totalHP += 10 + consModifier();
		currentHP = totalHP;
		setStats();
	}
	else if (level>2) {
		totalHP += ((rand() % 10) + 1) + consModifier();
		currentHP = totalHP;
		setStats();
	}
}
void Character::setStats() {
	abilityPoint[0] += strModifier();
	abilityPoint[1] += dexModifier();
	abilityPoint[2] += consModifier();
	abilityPoint[3] += intModifier();
	abilityPoint[4] += wisModifier();
	abilityPoint[5] += chaModifier();
	if (level >= 1 && level <= 4) {
		proficiency = 2;
	}
	else if (level >= 5 && level <= 8) {
		proficiency = 3;
	}
	else if (level >= 9 && level <= 12) {
		proficiency = 4;
	}
	else if (level >= 13 && level <= 16) {
		proficiency = 5;
	}
	else if (level >= 17 && level <= 20) {
		proficiency = 6;
	}
}
void Character::printStats() {
	cout << "Level: " << level << endl;
	cout << "HP: " << currentHP << "/" << totalHP << endl;
	cout << "Strength: " << abilityPoint[0] << endl;
	cout << "Dexterity: " << abilityPoint[1] << endl;
	cout << "Constitution: " << abilityPoint[2] << endl;
	cout << "Intelligent: " << abilityPoint[3] << endl;
	cout << "Wisdom: " << abilityPoint[4] << endl;
	cout << "Charisma: " << abilityPoint[5] << endl;
}
