#ifndef Odometer_h
#define Odometer_h

#include <stdio.h>
#include <string>

class Odometer{

public:

	//Constructors
	Odometer();
	Odometer(int);

	//Accessor Prototypes
	double getMileage() const;
	void printMileage() const;

	//Mutator Prototypes
	void setMileage(int);
	void resetMileage();  //At 999,999 reset mileage to 0

	//Overload
	Odometer& operator++();    //Prefix
	Odometer operator++(int);  //Postfix
	friend std::ostream& operator<<(std::ostream&, const Odometer& Odometer);

private:

	int Mileage;
};

#endif /* Odometer_h */
