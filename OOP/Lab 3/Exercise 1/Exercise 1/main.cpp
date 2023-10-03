#include <iostream>

using namespace std;

int main() {
	while(1){
		cout << "Enter your score of the exam: ";
		int score;
		cin >> score;
		if (score >= 90) {
			cout << "Congratualtions. Your grade: A\n" << endl;
		}
		else if(score <= 89 && score >= 80){
			cout << "Your grade: B\n" << endl;
		}
		else if (score <= 79 && score >= 70) {
			cout << "Your grade: C\n" << endl;
		}
		else if (score <= 69 && score >= 60) {
			cout << "Your grade: D\n" << endl;
		}
		else if (score < 60 && score >= 0) {
			cout << "Sorry, Your grade: F\n" << endl;
		}
		else if (score < 0) {
			break;
		}
	} 
}