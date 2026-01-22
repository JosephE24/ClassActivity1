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
	cout << "Hello World!\n";
}