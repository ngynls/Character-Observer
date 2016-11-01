#include "CharacterObserver.h"
#include "Character.h"
#include <iostream>

CharacterObserver::CharacterObserver() {
}

CharacterObserver::CharacterObserver(Character* c) {
	subject = c;
	subject->attach(this);
}

CharacterObserver::~CharacterObserver() {
	subject->detach(this);
}

void CharacterObserver::update() {
	display();
}

void CharacterObserver::display() {
	subject->printStats();
}