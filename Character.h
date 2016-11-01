//! Header file for a Character
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
	//! Constructor
	Character();
	//! Destructor
	~Character();
	//! Constructor taking 6 parameters (strength, dexterity, constitution, intelligence, wisdom & charisma)
	Character(int, int, int, int, int, int);
	//! Method that decreases the hp due to damage
	void hp(int); 
	//Accessors for the character stats
	//! Accessor for the current HP
	int getHP();
	//! Accessor for the strength
	int getStrength();
	//! Accessor for the dexterity
	int getDexterity();
	//! Accessor for the constitution
	int getConstitution();
	//! Accessor for the intelligence
	int getIntelligent();
	//! Accessor for the wisdom
	int getWisdom();
	//! Accessor for the charisma
	int getCharisma();
	//! Accessor for the player level
	int getLevel();
	//Mutators for the character stats
	//! Mutator for the strength
	void setStrength(int);
	//! Mutator for the dexterity
	void setDexterity(int);
	//! Mutator for the constitution
	void setConstitution(int);
	//! Mutator for the intelligence
	void setIntelligence(int);
	//! Mutator for the wisdom
	void setWisdom(int);
	//! Mutator for the charisma
	void setCharisma(int);
	//Accessor methods for stat modifiers
	//! Returns the strength modifier
	int strModifier();
	//! Returns the dexterity modifier
	int dexModifier();
	//! Returns the constitution modifier
	int consModifier();
	//! Returns the intelligence modifier
	int intModifier();
	//! Returns the wisdom modifier
	int wisModifier();
	//! Returns the charisma modifier
	int chaModifier();

	// Weapon methods
	//! Accessor method for the weapon
	Sword getWeapon();
	//! Setter method for the weapon
	void setWeapon(Sword);
	// Helmet methods
	//! Accessor method for the helmet
	Helmet getHelmet();
	//! Setter method for the helmet
	void setHelmet(Helmet);
	// Armor methods
	//! Accessor method for the armor
	Armor getArmor();
	//! Setter method for the armor
	void setArmor(Armor);
	// Boots methods
	//! Accessor method for the boots
	Boots getBoots();
	//! Mutator method for the boots
	void setBoots(Boots);
	// Ring methods
	//! Accessor method for the ring
	Ring getRing();
	//! Mutator method for the ring
	void setRing(Ring);
	//Shield methods
	//! Accessor method for the shield
	Shield getShield();
	//! Mutator method for the shield
	void setShield(Shield);
	// Belt methods
	//! Accessor method for the belt
	Belt getBelt();
	//! Mutator method for the belt
	void setBelt(Belt);

	//! Method to set the level of the character
	void setLevel();
	//! Method that prints the stats of the character
	void printStats();
	//! Method that returns the attack bonus
	int attackBonus();
	//! Method that returns the damage bonus
	int damageBonus();
	//! Method that returns the armor class
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