#include <iostream>

using namespace std;

struct date
{
    int year;
    int month;
    int day;
};

int main(){
struct date date;

    cout << "Enter your date of birth: " << endl;
    cout << "Year: ";
    cin >> date.year;
    cout << "Month: ";
    cin >> date.month;
    cout << "Day: ";
    cin >> date.day;

    string months[12] = {"January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December"};

    cout << endl << "Your Date of birth: " << months[date.month - 1 ] << " " << date.day << ", " << date.year;
}
