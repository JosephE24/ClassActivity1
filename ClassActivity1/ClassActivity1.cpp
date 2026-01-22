// ClassActivity1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Joseph Ellis

#include <iostream>

using namespace std;

class Dog {

	private:
	// Declaring Member Variables
	string name;
	int age;
	string breed;

	public:
	// Setter Functions:
	void setName(string dogName){
		name = dogName;
	}
	void setAge(int dogAge) {
		age = dogAge;
	}
	void setBreed(string dogBreed) {
		breed = dogBreed;
	}

	// Getter Functions:
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	string getBreed() {
		return breed;
	}

	// Function to print "Woof! Woof!":
	void bark() {
		cout << "Woof! Woof!" << endl;
	}
};



int main()
{
	// Initializes dog1 Object:
	Dog dog1;

	// Sets Data for dog1:
	dog1.setName("Spot");
	dog1.setAge(11);
	dog1.setBreed("Golden Retriever");

	// Prints Data for dog1:
	cout << "Dog 1 is named " << dog1.getName() << ", he is " << dog1.getAge() << ", and he is a " << dog1.getBreed() << "." << endl;

	// Uses setter fuction to modify dog1's Age:
	dog1.setAge(12);

	// Reprints dog1's data to show the change:
	cout << "Dog 1 is named " << dog1.getName() << ", he is " << dog1.getAge() << ", and he is a " << dog1.getBreed() << "." << endl;

	// Calls the bark() function
	dog1.bark();
}