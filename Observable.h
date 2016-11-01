//! Header file for the Observable class
#pragma once
#include "Observer.h"
#include <list>
using namespace std;

class Observable {
public:
	//! Default constructor
	Observable();
	//! Destructor
	virtual ~Observable();
	//! Method that attachs an observer to a list of observers
	virtual void attach(Observer* o);
	//! Method that detaches an observer from a list of observers
	virtual void detach(Observer* o);
	//! Method which updates all the observers when a change occurs
	virtual void notify();

private:
	list<Observer*> *views;
};