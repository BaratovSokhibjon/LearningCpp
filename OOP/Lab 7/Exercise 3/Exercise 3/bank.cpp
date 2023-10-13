#include <iostream>
#include "bank.h"
#include <cstring>
using namespace std;

class Account {
private:
	int m_accID;
	int m_balance;
	char* m_cusName;
public:
	Account(int ID, int balance, char* cname) {
		// implementation required ....

	}
	~Account() {
		// implementation required ....
	}
	int GetAccID(void) {
		// implementation required ....
	}
	void Deposit(int money) {
		// implementation required ....
	}
	int Withdraw(int money) {
		// implementation required ....
	}
	void ShowAccInfo(void) {
		// implementation required ....
	}
};
int accNum = 0;      // # of accounts

void ShowMenu(void) {
	cout << "-----Menu------" << endl;
	cout << "1. Make Accout" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdrawal" << endl;
	cout << "4. Display all" << endl;
	cout << "5. Exit program" << endl;
	cout << "6. Delete account" << endl; // provided the details of other two new functions
	cout << "7. Delete all accounts" << endl; // so that the program works as expected
}

void MakeAccount(void) {
	
	int id;
	char name[NAME_LEN];
	int balance;
	char password[PASS_LEN]; // made a slot for setting up a password for account

	if (accNum >= MAX_ACC_NUM) {
		cout << "Sorry! cannot make an accout anymore." << endl;
		return;
	}

	cout << "[Make Account]" << endl;
	cout << "Account ID: ";
	cin >> id;
	acc.setAccID(id);
	cout << "Customer Name: ";
	cin >> name;
	acc.setName(name);
	cout << "Deposit amount: ";
	cin >> balance;
	acc.setBalance(balance);
	cout << "Setup a password? (1/0): "; // requesting to create a password or not
	int ans;
	cin >> ans;


	if (ans == 1) {
		while (true) {
			cout << "Enter password (max 10 chars): "; // prompting for password
			cin >> password;
			cout << "Confirm password: "; // confirmation for password
			char confirm[11];
			cin >> confirm;
			if (strcmp(confirm, password) == 0) { // used internet to find out that i can 
				acc.setPassWord(password);
				cout << "Account created!";		  // compare char strings using strcmp
				break;
			}
			else {
				cout << "The passwords do not match!";
				cout << endl;
				continue; // going back to the beginning of the loop so user provides matching pswrd
			}
		}
	}
	else if (ans == 0) {
		cout << "Account created!";
		strcpy_s(password, ""); // since the slot for pswrd isn't used I cleared the space for password
	}
	else {
		cout << "Illegal selection. Please try again ...";
		cin.clear(); // Clear error flags
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // so that the error messeges do not show up
		strcpy_s(password, "");

	}

	cout << endl;

	if (GetAccIdx(id) != -1) {
		cout << "Error: Existing account ID" << endl;
		return;
	}

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy_s(accArr[accNum].cusName, name);
	strcpy_s(accArr[accNum].cusPass, password); // saving the password in struct of bank.h
	accNum++;
}

void DepositMoney(void) {
	int money;
	int id;
	cout << "[Deposit]" << endl;
	cout << "Account ID: ";
	cin >> id;
	cout << "Deposit amount: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			accArr[i].balance += money;
			cout << "Deposit completed" << endl << endl;
			return;
		}
	}
	cout << "This ID is not valid." << endl << endl;
}

void WithdrawMoney(void) {
	int money;
	int id;
	cout << "[Withdrawal]" << endl;
	cout << "Account ID: ";
	cin >> id;
	cout << "Withdrawal amount: ";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			if (accArr[i].balance < money) {
				cout << "Not enough balance" << endl << endl;
				return;
			}

			accArr[i].balance -= money;
			cout << "Withdrawal completed" << endl << endl;
			return;
		}
	}
	cout << "This ID is not valid." << endl << endl;
}

void ShowAllAccInfo(void) {
	for (int i = 0; i < accNum; i++) {
		cout << "Account ID: " << accArr[i].accID << endl;
		cout << "Name: " << accArr[i].cusName << endl;
		cout << "Balance: " << accArr[i].balance << endl << endl;
	}
}

int GetAccIdx(int id) {
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			return i;
		}
	}
	return -1;
}

void DeleteAccount(void) {
	cout << "[Delete Account]" << endl;
	cout << "Account ID: ";
	int id = 0;
	cin >> id;
	int foundindx = -1;  // creating variable to check if the id is found 
	for (int i = 0; i < accNum; i++) {
		if (accArr[i].accID == id) {
			foundindx = i; // if id is found chnage foundindx to indx of acc
			break;
		}
	}

	if (foundindx != -1) {
		for (int i = foundindx; i < accNum - 1; i++) {
			accArr[i] = accArr[i + 1]; // shifting the account indexes to make up for loss
		}
		accNum = accNum - 1; // reducing the number of accounts in accArr
		cout << "Account with ID " << id << " deleted\n" << endl;
	}
	else {
		cout << "ERROR: Account with ID " << id << " not found\n" << endl;
	}


}
void DeleteAllAcc(void) {
	cout << "[Delete all accounts]\n";
	cout << "Proceed with deleting?(1/0)\n"; // promptinf for confirmation
	int ans = 0;
	cin >> ans;
	if (ans == 1) {
		for (int i = 0; i < accNum; i++) {
			accArr[i].accID = 0;
			accArr[i].balance = 0;    // deleting all the information at every index of 
			strcpy_s(accArr[i].cusName, "");  // elements of accArr
		}
		cout << "All accounts have been deleted.\n";
	}
	else if (ans == 0) {
		ShowMenu();
	}
	else {
		cout << "Illegal selection. Please try again ...";
	}
}
