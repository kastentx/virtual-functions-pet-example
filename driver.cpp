// Nick Kasten
// 5-24-15
// driver file for Pet project

#include "Dog.h"

//Function Prototypes
void displayPetInfo(Pet* myPetPtr);

int main() 
{
	
	Pet  myPet;			// create a generic Pet object
	Dog  myDog;			// create a Dog object (derived class)
	Pet* petPtr;		// pointer to a generic Pet object (base class)
	
	petPtr = &myPet;	// assign address of generic Pet object to pointer
	
	displayPetInfo(petPtr);
	
	petPtr = &myDog; 	// assign address of Dog object to pointer
	
	displayPetInfo(petPtr);
		
	return 0;
}

void displayPetInfo(Pet* myPetPtr)
{
	// these two functions are from the base class
	cout << "My pet is named \"" << myPetPtr->getName() 
		 << "\" and it is " << myPetPtr->getAge() 
		 << " years old.\n\n";
	
	// this (virtual) function comes from the most derived version of the class 
	cout << "The sound it makes is " << myPetPtr->makeSound() << ".\n\n";	
}
