/*
JARED EVANS DSD 2208

CS105_ASSESSMENT_2 SECTION_1 Question 1 Pointer to Objects
*/


#include <iostream>
#include <string>

#include "HealthActivity.h"

//function for setting user Data
void setUserData(HealthActivity* activities,int size);
//function get displaying user Data
void getUserData(HealthActivity* activites, int size);

int main()
{
	//var that difines the size of activities array  
	const int size = 5;
	//creates a Health Activity Object array
	HealthActivity activities[size];
	//creates a pointer of Health Activity then stores the array 
	HealthActivity* ptrActivities = activities;

	//calles to the set and display user data 
	setUserData(ptrActivities, size);
	getUserData(ptrActivities, size);

	
	system("pause>0");
	return 0;
}

void setUserData(HealthActivity* activities, int size)
{
	//loops though each health activity object in the array of Health Activity's
	for (int i = 0; i < size; i++) {
		std::string name;
		int steps;
		float walkingRunning;
		//promts user to input there name the emount of steps and there distance
		std::cout << "Enter name, steps, and walking + running distance for user " << i + 1 << ":\n";
		//gets that input and stores the into ver and then into the setters
		std::cin >> name >> steps >> walkingRunning;
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "Invaild user input steps and walking + running distance must be numbers\n\n";
			i--;
			continue;
		}



		activities[i].setName(name);
		activities[i].setSteps(steps);
		activities[i].setWalkingRunning(walkingRunning);
	}
}

void getUserData(HealthActivity* activities, int size)
{	
	//loops though each Health Activity object
	for (int i = 0; i < size; i++)
	{
		//displays info to user
		std::cout << "User " << i + 1 << " name : " << activities[i].getName() << "\n";
		std::cout << "Number of steps: " << activities[i].getSteps() << " steps\n";
		std::cout << "Walking + running distance: " << activities[i].getWalkingRunning() << " kms\n\n";
	}

	activities->computeAverages(activities, size);
}
