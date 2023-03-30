/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_1 Question 1 Pointer to Objects
*/





#include "HealthActivity.h"

//constuctor setting the var
HealthActivity::HealthActivity(std::string name="", int steps=0, float walkingRunning=0.0)
{
	this->name = name;
	this->steps = steps;
	this->walkingRunning = walkingRunning;
}
//defult constuctor
HealthActivity::HealthActivity()
{
	name = "";
	steps = 0;
	walkingRunning = 0.0;
}
//setter's
void HealthActivity::setName(std::string name)
{
	this->name = name;
}

void HealthActivity::setSteps(int steps)
{
	this->steps = steps;
}

void HealthActivity::setWalkingRunning(float walkingRunning)
{
	this->walkingRunning = walkingRunning;
}
//getter's
std::string HealthActivity::getName()
{
	return name;
}

int HealthActivity::getSteps()
{
	return steps;
}

float HealthActivity::getWalkingRunning()
{
	return walkingRunning;
}
//calulate Averages
void HealthActivity::computeAverages(HealthActivity* activites, int size)
{

	int totalSteps = 0;
	float totalDistance = 0.0;
	//loops though each array elment to add to steps togeter 
	for (int i = 0; i < size; i++) {
		totalSteps += activites[i].getSteps();
		totalDistance += activites[i].getWalkingRunning();
	}

	//then devides them by size of array(users)	
	//and displays them
	std::cout << "\nAverage steps of "<< size <<" users: " << totalSteps / size << " steps\n";
	std::cout << "Average distance of walking + running " << size << " users: " << totalDistance / size << " km\n";

}
