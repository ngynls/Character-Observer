#include "Character.h"
#include "Item.h"
#include "Armor.h"
#include "Belt.h"
#include "Boots.h"
#include "Helmet.h"
#include "Ring.h"
#include "Shield.h"
#include "Sword.h"
#include "CharacterObserver.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	Character *character;
	character = new Character(18,18,18,18,18,18);
	character->printStats();

	CharacterObserver *observer;
	observer = new CharacterObserver(character);

	character->setLevel();

	character->hp(2); // this should decrease the hp by 2 & update the character stats

	character->hp(2); // this decreases the hp by 2 again

	//character->setDexterity(4);
	//character->setStrength(5);
	//character->setConstitution(1);
	//character->setWisdom(2);
	//character->setCharisma(1);
	//character->setIntelligence(4);

	//Now let's try equipping items
	//ARMOR
	Enhancement enh1;
	enh1 = Enhancement("ARM", 4);
	vector<Enhancement> armorEnh;
	armorEnh.push_back(enh1);
	Armor arm1;
	arm1 = Armor("Armor of Steel", "ARMOR", armorEnh);
	character->setArmor(arm1);
	//BOOTS
	Enhancement enh7;
	Enhancement enh8;
	enh7 = Enhancement("ARM", 3);
	enh8 = Enhancement("DEX", 3);
	vector<Enhancement> bootsEnh1;
	bootsEnh1.push_back(enh7);
	bootsEnh1.push_back(enh8);
	Boots boots1;
	boots1 = Boots("Boots of Heaven", "BOOTS", bootsEnh1);
	character->setBoots(boots1);
	//HELMET
	Enhancement enh11;
	Enhancement enh12;
	Enhancement enh13;
	enh11 = Enhancement("INT", 3);
	enh12 = Enhancement("WIS", 4);
	enh13 = Enhancement("ARM", 4);
	vector<Enhancement> helmetEnh1;
	helmetEnh1.push_back(enh11);
	helmetEnh1.push_back(enh12);
	helmetEnh1.push_back(enh13);
	Helmet helm1;
	helm1 = Helmet("Good Helmet", "HELMET", helmetEnh1);
	character->setHelmet(helm1);
	//RING
	Enhancement enh17;
	Enhancement enh18;
	Enhancement enh19;
	Enhancement enh20;
	Enhancement enh21;
	enh17 = Enhancement("ARM", 3);
	enh18 = Enhancement("STR", 4);
	enh19 = Enhancement("CON", 5);
	enh20 = Enhancement("WIS", 2);
	enh21 = Enhancement("CHA", 5);
	vector<Enhancement> ringEnh1;
	ringEnh1.push_back(enh17);
	ringEnh1.push_back(enh18);
	ringEnh1.push_back(enh19);
	ringEnh1.push_back(enh20);
	ringEnh1.push_back(enh21);
	Ring ring1;
	ring1 = Ring("Good Ring", "RING", ringEnh1);

	character->setRing(ring1);
	//SHIELD
	Enhancement enh27;
	enh27 = Enhancement("ARM", 5);
	vector<Enhancement> shieldEnh1;
	shieldEnh1.push_back(enh27);
	Shield shield1;
	shield1 = Shield("Good Shield", "SHIELD", shieldEnh1);
	character->setShield(shield1);
	//SWORD
	Enhancement enh29;
	Enhancement enh30;
	enh29 = Enhancement("ATT", 5);
	enh30 = Enhancement("DAM", 5);
	vector<Enhancement> swordEnh1;
	swordEnh1.push_back(enh29);
	swordEnh1.push_back(enh30);
	Sword sword1;
	sword1 = Sword("Good Sword", "WEAPON", swordEnh1);
	character->setWeapon(sword1);
	cin.get();
	return 0;
}
//	int levelUP;
/*	cout << "Enter 1 for level up: ";
cin >> levelUP;
if (levelUP == 1) {
character->setLevel();
}
character->printStats();
*/
