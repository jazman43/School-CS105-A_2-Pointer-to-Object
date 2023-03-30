/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_1 Question 1 Pointer to Objects
*/


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

