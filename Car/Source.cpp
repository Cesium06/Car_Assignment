/*
//Name: Jonathan Cesari
//Date: 9/21/2015
//Class: CMPSC 122
//Problems: N/A
//Comment: This program will loop through a simulation of a car
*/

#include <iostream>
#include <Windows.h>
#include <thread>
#include "Odometer.h"
#include "FuelGauge.h"

//Defines the max gallons of gas for a car 15
//MAX_MILEAGE is 999999
//MPG is 25

const int MAX_GAS = 15;
const int MAX_MILEAGE = 999999;
const int MPG = 24;

//Function prototype
void refuel(FuelGauge&);

int main(int argc, const char * argv[]) {

	//Object instansiation and variable for question
	char cont = 'N';
	FuelGauge Fuel;
	Odometer Odometer;

	//Fuel the car to 15 Gallons
	refuel(Fuel);

	//Run through fuel and travel
	while (Fuel.getFuelAmount() != 0){
		Sleep(100);
		std::cout << Odometer;
		Odometer++;

		//Check to see if value has a remainder or not, if not divisable
		if ((int)Odometer.getMileage() % MPG == 0){
			Fuel--;
			std::cout << Fuel;
			std::cout << Odometer;
		}

		//Catch is Odometer is about to exceed max mileage
		if (Odometer.getMileage() == MAX_MILEAGE){
			Odometer.resetMileage();
		}

		//Ask the user if they would like to continue to the simulation
		if (Fuel.getFuelAmount() == 0){
			std::cout << "Run simulation again? (Enter Y or N)" << std::endl;
			std::cin >> cont;
		}
		if (cont == 'Y' || cont == 'y'){
			refuel(Fuel);
			cont = 'N';
		}

	}

	return 0;
}
////////////////////////////////////////////////
//Function to handle Fueling/refueling of the car
////////////////////////////////////////////////

void refuel(FuelGauge &obj){
	while (obj.getFuelAmount() < MAX_GAS){
		Sleep(500);
		obj++;
		std::cout << obj;
	}
	std::cout << "You are ready to drive!" << std::endl;
}
