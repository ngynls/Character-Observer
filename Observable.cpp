#include "Observable.h" // this is the subject
#include "Observer.h"
using namespace std;

Observable::Observable() {
	views = new list<Observer*>;
}

Observable::~Observable() {
	delete views;
}

void Observable::attach(Observer* o) {
	views->push_back(o);
}

void Observable::detach(Observer* o) {
	views->remove(o);
}

void Observable::notify() {
	for (Observer *view : *views) {
		view->update();
	}

}