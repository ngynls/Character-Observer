#include <iostream>
#include <string>
#include "Character.h"
#include "Sword.h"
#include "CharacterObserver.h"
using namespace std;

int main() {
	Character *character;
	character = new Character();
	character->printStats();

	CharacterObserver *observer;
	observer = new CharacterObserver(character);

	character->setLevel();

	character->hp(2); // this should decrease the hp by 2 & update the character stats

	character->hp(2); // this decreases the hp by 2 again

	character->setDexterity(4);
	character->setStrength(2);
	character->setConstitution(1);
	character->setWisdom(2);
	character->setCharisma(1);

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
