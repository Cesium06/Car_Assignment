/*
//
//
//
//
*/

#include "Odometer.h"
#include <iostream>
///////////////
//Contructors//
//////////////

Odometer::Odometer(){
	Mileage = 0;
}

Odometer::Odometer(int mileage){
	Mileage = mileage;

}

/*/////////////////////
/Function Definitions/
*//////////////////////

//Accessor Definitions

double Odometer::getMileage() const{
	return Mileage;
}

void Odometer::printMileage() const{

	std::cout << "Your mileage is: " << Mileage << std::endl;

}

//Mutator Definitions
void Odometer::resetMileage(){
	Mileage = 0;
}


/////////////
//Overloads//
/////////////

//Prefix
Odometer& Odometer::operator++(){

	Mileage++;

	return *this;
}

//Postfix
Odometer Odometer::operator++(int value){
	Odometer temp = *this;

	++*this;

	return temp;
}
//Overloaded output stream for the Odometer class
std::ostream& operator<<(std::ostream& os, const Odometer& Odometer)
{
	os << "Current miles traveled are: " << Odometer.getMileage() << std::endl;
	return os;
}

