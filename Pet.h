// Nick Kasten
// 5-24-15
// Pet class header file

#include <string>
#include <iostream>
using namespace std;

class Pet
{
	public:
		// Default Constructor
		Pet(); 

		// Mutators
		void setAge(int age);
		void setName(string name);
		
		// Accessors
		int getAge();
		string getName();
		virtual string makeSound();

	protected:
		int myAge;
		string myName;
};

