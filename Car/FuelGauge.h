#ifndef FuelGauge_h
#define FuelGauge_h

#include <stdio.h>
#include <iostream>


class FuelGauge{

public:

	//Constructors
	FuelGauge();
	FuelGauge(int);

	//Accessor Prototypes
	int getFuelAmount() const;
	void printFuelAmount() const;

	//Mutator Prototypes
	void setFuelAmount(int);
	void FillCar();


	//Overloads for increment and decrement
	FuelGauge& operator++();    //Prefix
	FuelGauge operator++(int);  //Postfix

	FuelGauge& operator--();    //Prefix
	FuelGauge operator--(int);  //Postfix


	//Output operator overload
	friend std::ostream& operator<<(std::ostream&, const FuelGauge& fuel);

private:

	//Member Function
	int Gallons;
};


#endif /* FuelGauge_h*/
