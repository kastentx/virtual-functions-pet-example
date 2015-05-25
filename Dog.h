// Nick Kasten
// 5-24-15
// Dog class header file

#include "Pet.h"

class Dog : public Pet
{
	public:
		// Default Constructor
		Dog();
		
		// overriden virtual function
		string makeSound();
};
