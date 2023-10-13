#ifndef _BANK_H_
#define _BANK_H_

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);
void DeleteAccount(void); // creating function prototypes to use
void DeleteAllAcc(void); // creating function prototypes to use
int GetAccIdx(int);

enum class bank { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT, DELETE, DELETEALL }; // added DELETE and DELETEALL 
const int NAME_LEN = 40;
const int MAX_ACC_NUM = 100;
const int PASS_LEN = 10; // setting up password length 

typedef struct
{
    int accID;
    int balance;
    char cusName[NAME_LEN];
    char cusPass[PASS_LEN]; // made my of struct element to use as a password slot
} Account;

#endif // _BANK_H_
