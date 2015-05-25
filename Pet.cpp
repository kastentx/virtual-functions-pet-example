// Nick Kasten
// 5-24-15
// Pet implementation file

#include "Pet.h"

/*-- Default Constructor --*/
Pet::Pet()
{
	myAge = 0;	
	myName = "Unnamed Pet";
}


/*-- Mutator Functions --*/
void Pet::setAge(int age)
{
	myAge = age;
}

void Pet::setName(string name)
{
	myName = name;
}

/*-- Accessor Functions --*/
int Pet::getAge()
{
	return myAge;
}

string Pet::getName()
{
	return myName;
}

string Pet::makeSound()
{
	return "silence";
}
