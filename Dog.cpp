// Nick Kasten
// 5-24-15
// Dog implementation file

#include "Dog.h"

/*-- Default Constructor --*/
Dog::Dog()
{
	myAge = 0;
	myName = "Unnamed Doggy";
}

/*-- Accessor Functions --*/
string Dog::makeSound()
{
	return "Woof!";
}
