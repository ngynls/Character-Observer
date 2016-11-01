#include <iostream>
#include <string>
#include "Character.h"
#include "Sword.h"
#include "CharacterObserver.h"
using namespace std;

int main() {
	Character* character = new Character();
	character->printStats();

	CharacterObserver *observer = new CharacterObserver();
	character->attach(observer);

	character->hp(2);

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
