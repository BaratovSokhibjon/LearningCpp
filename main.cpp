/*Write a program that prints the menu of a simple bank program.
The program does not need to perform the actual function,
but it should output the menu output as shown below and an output 
suitable for the menu selection. Use while and switch statements.
Exactly follow the program output format as shown below.*/

#include <iostream> 

using namespace std;

int main(){
    int menu;
    while (menu != 5)
    {   
        cout <<endl <<" - INHA Bank Program - \n --------Menu-------- \n1.Make Accout  \n2.Deposit  \n3.Withdrawal  \n4.Display all  \n5.Exit program  \nSelect menu:";
        cin >> menu;

        switch (menu)
        {
        case 1 :
            cout << endl << "Bank account creation completed\n";
            break;
        case 2 :
            cout << endl << "Deposit completed\n";
            break;
        case 3 :
            cout << endl << "Withdrawal completed\n";
            break;
        case 4 :
            cout << endl << "Listing all accounts ...\n";
            break;
        case 5 :
            cout << endl << "Saving all the account info ..." << endl << "End of program. Bye...\n";

        default:
            cout << endl << "Illegal selection. Try again ...\n";
            break;
        }
    }
    
}