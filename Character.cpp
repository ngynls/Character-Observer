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
	effStr = abilityPoint[0];
	effDex = abilityPoint[1];
	effCons = abilityPoint[2];
	effInt = abilityPoint[3];
	effWis = abilityPoint[4];
	effChar = abilityPoint[5];
	modStr = floor((effStr - 10) / 2);
	modDex = floor((effDex - 10) / 2);
	modCons = floor((effCons - 10) / 2);
	modInt = floor((effInt - 10) / 2);
	modWis = floor((effWis - 10) / 2);
	modChar = floor((effChar - 10) / 2);
	armorclass = armorClass();
	attBonus = attackBonus();
	damBonus = damageBonus();
	totalHP = 10;
	currentHP = totalHP;
	proficiency = 2;
	belt = Belt();
	weapon = Sword();
	shield = Shield();
	armor = Armor();
	boots = Boots();
	ring = Ring();
	helmet = Helmet();
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
	effStr = abilityPoint[0];
	effDex = abilityPoint[1];
	effCons = abilityPoint[2];
	effInt = abilityPoint[3];
	effWis = abilityPoint[4];
	effChar = abilityPoint[5];
	modStr = floor((effStr - 10) / 2);
	modDex = floor((effDex - 10) / 2);
	modCons = floor((effCons - 10) / 2);
	modInt = floor((effInt - 10) / 2);
	modWis = floor((effWis - 10) / 2);
	modChar = floor((effChar - 10) / 2);
	armorclass = armorClass();
	attBonus = attackBonus();
	damBonus = damageBonus();
	totalHP = 10;
	currentHP = totalHP;
	belt = Belt();
	weapon = Sword();
	shield = Shield();
	armor = Armor();
	boots = Boots();
	ring = Ring();
	helmet = Helmet();
}

Character::~Character() {
}

int Character::attackBonus() {
	return proficiency + floor((effStr - 10) / 2);
}
int Character::damageBonus() {
	return floor((effStr - 10) / 2);
}
int Character::armorClass() {
	return 10 + floor((effDex - 10) / 2);
}

void Character::hp(int dmg) {
	currentHP -= dmg;
	notify();
}

Sword Character::getWeapon() {
	return weapon;
}
void Character::setWeapon(Sword asword) {
	weapon = asword;
	attBonus += weapon.getInfluences()[0].getBonus();
	damBonus += weapon.getInfluences()[1].getBonus();
	notify();
}

Shield Character::getShield() {
	return shield;
}
void Character::setShield(Shield ashield) {
	shield = ashield;
	armorclass += shield.getInfluences()[0].getBonus();
	notify();
}

Armor Character::getArmor() {
	return armor;
}
void Character::setArmor(Armor anarmor) {
	armor = anarmor;
	armorclass += armor.getInfluences()[0].getBonus();
	notify();
}

Helmet Character::getHelmet() {
	return helmet;
}
void Character::setHelmet(Helmet ahelm) {
	helmet = ahelm;
	effInt += helmet.getInfluences()[0].getBonus();
	modInt = floor((effInt - 10) / 2);
	effWis += helmet.getInfluences()[1].getBonus();
	modWis = floor((effWis - 10) / 2);
	armorclass += helmet.getInfluences()[2].getBonus();
	notify();
}

Ring Character::getRing() {
	return ring;
}
void Character::setRing(Ring aring) {
	ring = aring;
	armorclass += ring.getInfluences()[0].getBonus();
	effStr += ring.getInfluences()[1].getBonus();
	modStr = floor((effStr - 10) / 2);
	effCons += ring.getInfluences()[2].getBonus();
	modCons = floor((effCons - 10) / 2);
	effWis += ring.getInfluences()[3].getBonus();
	modWis = floor((effWis - 10) / 2);
	effChar += ring.getInfluences()[4].getBonus();
	modChar = floor((effChar - 10) / 2);
	notify();
}

Boots Character::getBoots() {
	return boots;
}
void Character::setBoots(Boots aboot) {
	boots = aboot;
	armorclass += boots.getInfluences()[0].getBonus();
	effDex += boots.getInfluences()[1].getBonus();
	modDex = floor((effDex - 10) / 2);
	notify();
}

Belt Character::getBelt() {
	return belt;
}

void Character::setBelt(Belt abelt) {
	belt = abelt;
	effCons += belt.getInfluences()[0].getBonus();
	effStr += belt.getInfluences()[1].getBonus();
	modCons = floor((effCons - 10) / 2);
	modStr = floor((effStr - 10) / 2);
	notify();
}

int Character::getHP() {
	return currentHP;
}
int Character::getStrength() {
	return abilityPoint[0];
}
void Character::setStrength(int strength){
	abilityPoint[0] = strength;
	notify();
}
int Character::getDexterity() {
	return abilityPoint[1];
}
void Character::setDexterity(int dexterity){
	abilityPoint[1] = dexterity;
	notify();
}
int Character::getConstitution() {
	return abilityPoint[2];
}
void Character::setConstitution(int constitution){
	abilityPoint[2] = constitution;
	notify();
}
int Character::getIntelligent() {
	return abilityPoint[3];
}
void Character::setIntelligence(int intel){
	abilityPoint[3] = intel;
	notify();
}
int Character::getWisdom() {
	return abilityPoint[4];
}
void Character::setWisdom(int wisdom){
	abilityPoint[4] = wisdom;
	notify();
}
int Character::getLevel() {
	return level;
}
int Character::getCharisma() {
	return abilityPoint[5];
}
void Character::setCharisma(int charisma){
	abilityPoint[5] = charisma;
	notify();
}
int Character::strModifier() {
	return floor((effStr - 10) / 2);
}
int Character::dexModifier() {
	return floor((effDex - 10) / 2);
}
int Character::consModifier() {
	return floor((effCons - 10) / 2);
}
int Character::intModifier() {
	return floor((effInt - 10) / 2);
}
int Character::wisModifier() {
	return floor((effWis - 10) / 2);
}
int Character::chaModifier() {
	return floor((effChar - 10) / 2);
}
void Character::setLevel() {
	level += 1;
	setHP();
	notify();
}
void Character::setHP() {
	if (level == 2) {
		totalHP += 10 + floor((effCons - 10) / 2);
		currentHP = totalHP;
		setStats();
	}
	else if (level>2) {
		totalHP += ((rand() % 10) + 1) + floor((effCons - 10) / 2);
		currentHP = totalHP;
		setStats();
	}
}
void Character::setStats() {
	abilityPoint[0] += floor((effStr - 10) / 2);
	effStr = abilityPoint[0];
	modStr= floor((effStr - 10) / 2);
	abilityPoint[1] += floor((effDex - 10) / 2);
	effDex = abilityPoint[1];
	modDex= floor((effDex - 10) / 2);
	abilityPoint[2] += floor((effCons - 10) / 2);
	effCons = abilityPoint[2];
	modCons= floor((effCons - 10) / 2);
	abilityPoint[3] += floor((effInt - 10) / 2);
	effInt = abilityPoint[3];
	modInt= floor((effInt - 10) / 2);
	abilityPoint[4] += floor((effWis - 10) / 2);
	effWis = abilityPoint[4];
	modWis= floor((effWis - 10) / 2);
	abilityPoint[5] += floor((effChar- 10) / 2);
	effChar = abilityPoint[5];
	modChar= floor((effChar - 10) / 2);
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
	cout << "////////////////////////" << endl;
	cout << "Strength: " << abilityPoint[0] << endl;
	cout << "\tSTR Modifier: " << modStr << endl;
	cout << "Dexterity: " << abilityPoint[1] << endl;
	cout << "\tDEX Modifier: " << modDex << endl;
	cout << "Constitution: " << abilityPoint[2] << endl;
	cout << "\tCONS Modifier: " << modCons << endl;
	cout << "Intelligence: " << abilityPoint[3] << endl;
	cout << "\tINT Modifier: " << modInt << endl;
	cout << "Wisdom: " << abilityPoint[4] << endl;
	cout << "\tWIS Modifier: " << modWis << endl;
	cout << "Charisma: " << abilityPoint[5] << endl;
	cout << "\tCHA Modifier: " << modChar << endl;
	cout << endl;
	cout << "Armor Class: " << armorclass << endl;
	cout << "Attack Bonus: " << attBonus << endl;
	cout << "Damage Bonus: " << damBonus << endl;
	cout << "////////////////////////" << endl;
	cout << "Items equipped" << endl;
	cout << "Helmet: " << helmet.getHelmetName() << endl;
	cout << "Armor: " << armor.getArmorName() << endl;
	cout << "Shield: " << shield.getShieldName() << endl;
	cout << "Ring: " << ring.getRingName() << endl;
	cout << "Boots: " << boots.getBootsName() << endl;
	cout << "Weapon: " << weapon.getSwordName() << endl;
	cout << endl;
}
