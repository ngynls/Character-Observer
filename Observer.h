//! Header file for the Observer
#pragma once

class Observer {
public:
	//! Destructor
	virtual ~Observer();
	//! Update method which will be used to display the changed stats of the character
	virtual void update() = 0;
protected:
	//! Constructor of an Observer
	Observer();
};
