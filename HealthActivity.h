#pragma once
#include <iostream>
#include <string>


class HealthActivity
{
public:
	//constuctor
	HealthActivity(std::string name, int steps, float walkingRunning);
	HealthActivity();

	//setters
	void setName(std::string name);

	void setSteps(int steps);

	void setWalkingRunning(float walkingRunning);

	//getters
	std::string getName();

	int getSteps();
	 
	float getWalkingRunning();

	//average steps and distance
	static void computeAverages(HealthActivity* activites, int size);

private:
	std::string name;

	int steps;
	float walkingRunning;

};

