#pragma once
#include "Observer.h"
#include <list>
using namespace std;

class Observable {
public:
	Observable();
	virtual ~Observable();
	virtual void attach(Observer* o);
	virtual void detach(Observer* o);
	virtual void notify();

private:
	list<Observer*> *views;
};