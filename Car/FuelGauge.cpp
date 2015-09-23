/*
// Definitions of the functions for the FuelGauge class
*/

#include "FuelGauge.h"
#include <iostream>


//Constructor definitions
FuelGauge::FuelGauge(){

	Gallons = 0;

}

FuelGauge::FuelGauge(int gallons){

	Gallons = gallons;

}
/*/////////////////////
/Function Definitions/
*//////////////////////


//Accessor Definitions
int FuelGauge::getFuelAmount() const{
	return Gallons;
}

void FuelGauge::printFuelAmount() const {

	std::cout << "Your current fuel amount is: " << Gallons << std::endl;

}

//Mutator Definitions
void FuelGauge::setFuelAmount(int gallons){
	Gallons = gallons;

}


/////////////////
////Overloads////
////////////////
//Prefix
FuelGauge& FuelGauge::operator++(){

	Gallons++;

	return *this;
}

//Postfix
FuelGauge FuelGauge::operator++(int value){
	FuelGauge temp = *this;

	++*this;

	return temp;
}

//Prefix
FuelGauge& FuelGauge::operator--(){

	Gallons--;

	return *this;
}

//Postfix
FuelGauge FuelGauge::operator--(int value){
	FuelGauge temp = *this;

	--*this;

	return temp;
}

//Overloaded output stream for the FuelGauge class
std::ostream& operator<<(std::ostream& os, const FuelGauge& fuel)
{
	os << "Current fuel amount is: " << fuel.getFuelAmount() << std::endl;
	return os;
}