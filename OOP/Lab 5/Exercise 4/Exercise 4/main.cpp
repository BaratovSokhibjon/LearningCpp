#include <iostream>
#include <string>

using namespace std;

class Person {
	string name;
	string gender;
	int age;
	string email;


public:
	// initialize the Person object
	Person(const string& name, const string& gender, int age, const string& email)
		: name(name), gender(gender), age(age), email(email) {}

	// introduce the person
	void introduceMyself() {
		cout << "Name: " << name << endl;
		cout << "Gender: " << gender << endl;
		cout << "Age: " << age << endl;
		cout << "Email: " << email << endl;
	}
};

int main() {
	// Person objects for Ryu and Laura
	Person ryu = { "Victor Ryu", "male", 30, "IGS2130v1@inha.ac.kr" };
	Person laura = { "Laura Lee", "female", 23, "IGS2130v2@inha.ac.kr" };

	
	ryu.introduceMyself();
	cout << endl;
	laura.introduceMyself();

	return 0;
}
