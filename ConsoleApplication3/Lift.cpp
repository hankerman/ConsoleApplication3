#include "Lift.h"

bool Lift::isRange(int i)
{
	if (i <= upper && i >= lower) {
		return true;
	}
	else {
		return false;
	}
	
}

void Lift::move(int i)
{
	if (getCurrentFloor() > i) {
		for (currentFloor; currentFloor > i; currentFloor--) {			
			cout << "Moving down -" << currentFloor << endl;
		}
	}
	else {
		for (currentFloor; currentFloor < i; currentFloor++) {
			cout << "Moving up -" << currentFloor << endl;
		}
	}

	cout << "opening doors in " << currentFloor << "floor" << endl;
}

Lift::Lift()
{
	upper = 9;
	lower = 1;
	isOn = false;
	currentFloor = upper;
}

Lift::Lift(int upper, int lower, bool isOn, int currentFloor)
{
	this->upper = upper;
	this->lower = lower;
	this->isOn = isOn;
	this->currentFloor = currentFloor;
}

void Lift::on() {
	isOn = true;
}

void Lift::off() {
	isOn = false;
}

int Lift::getCurrentFloor()
{
	return currentFloor;
}

void Lift::setCurrentFloor(int i)
{
	if (isRange(i)) {
		currentFloor = i;
	}	
}

void Lift::call(int i)
{
	if (isOn) {
		if (isRange(i)) {
			move(i);
		}
	}
}

void Lift::printInfo()
{
	cout << "current floor: " << currentFloor << endl;
	if (isOn) {
		cout << "power - on" << endl;
	}
	else {
		cout << "power - off" << endl;
	}
}

