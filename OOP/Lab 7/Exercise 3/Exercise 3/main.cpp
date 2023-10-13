#include <iostream>
#include "bank.h"

using namespace std;

Account* accArr[MAX_ACC_NUM]; // Account array
int accNum = 0; // # of accounts
int main(void) {
	int choice, i;
	while (1) {
		ShowMenu();
		cout << "Select menu: ";
		cin >> choice;
		cout << endl;
		switch (bank(choice)) {
		case bank::MAKE:
			MakeAccount();
			break;
		case bank::DEPOSIT:
			DepositMoney();
			break;
		case bank::WITHDRAW:
			WithdrawMoney();
			break;
		case bank::INQUIRE:
			ShowAllAccInfo();
			break;
		case bank::EXIT:
			for (i = 0; i < accNum; i++)
				delete accArr[i];
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}