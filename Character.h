#pragma once
#include "Sword.h"
#include "Helmet.h"
#include "Armor.h"
#include "Boots.h"
#include "Ring.h"
#include "Shield.h"
#include "Belt.h"
#include "Enhancement.h"
#include "Observable.h"

class Character: public Observable {
public:
	//Constructors
	Character();
	~Character();
	Character(int, int, int, int, int, int);
	void hp(int);   // decreasing the hp due to damage
	//Accessors for the character stats
	int getHP();
	int getStrength();
	int getDexterity();
	int getConstitution();
	int getIntelligent();
	int getWisdom();
	int getCharisma();
	int getLevel();
	int strModifier();
	int dexModifier();
	int consModifier();
	int intModifier();
	int wisModifier();
	int chaModifier();

	//Accessor for the character's weapons
	Sword getWeapon();
	void setWeapon(Sword);
	//Helmet methods
	Helmet getHelmet();
	void setHelmet(Helmet);
	//Armor methods
	Armor getArmor();
	void setArmor(Armor);
	//Boots methods
	Boots getBoots();
	void setBoots(Boots);
	//Ring methods
	Ring getRing();
	void setRing(Ring);
	//Shield methods
	Shield getShield();
	void setShield(Shield);
	//! Belt methods
	Belt getBelt();
	void setBelt(Belt);

	void setLevel();
	void printStats();
	int attackBonus();
	int damageBonus();
	int armorClass();

private:
	int level;
	int totalHP;
	int abilityPoint[6];
	int currentHP;
	int armorclass;
	int proficiency;
	void setStats();
	void setHP();
	Belt* belt;
	Sword* weapon;
	Shield* shield;
	Helmet* helmet;
	Ring* ring;
	Boots* boots;
	Armor* armor;
};