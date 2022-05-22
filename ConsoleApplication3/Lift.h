#pragma once
#include <iostream>
using namespace std;

class Lift
{
private:
	int upper, lower;
	bool isOn;
	int currentFloor;
	bool isRange(int i);
	void move(int i);
public:
	Lift();
	Lift(int upper, int lower, bool ifOn, int currentFloor);

	void on();
	void off();
	int getCurrentFloor();
	void setCurrentFloor(int i);
	void call(int i);
	void printInfo();

};

