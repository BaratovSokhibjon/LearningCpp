#include <iostream>
#include <string>

using namespace std;

struct date {
    int year;
    int month;
    int day;
};

struct student {
    int id;
    date dob;
    date grad;
};

student getStudentInfo() {
    student s;

    cout << "Student ID: ";
    cin >> s.id;
    cout << "Date of birth (Y M D): ";
    cin >> s.dob.year >> s.dob.month >> s.dob.day;
    cout << "Expected graduation date: ";
    cin >> s.grad.year >> s.grad.month >> s.grad.day;

    return s;
}

void displayStudentInfo(const student& s) {
    string months[12] = {"January", "February", "March", "April", "May", "June",
                         "July", "August", "September", "October", "November", "December"};
    cout << "Student ID: " << s.id << endl;
    cout << "Date of birth: " << months[s.dob.month - 1] << " " << s.dob.day << ", " << s.dob.year << endl;
    cout << "Expected graduation date: " << months[s.grad.month - 1] << " " << s.grad.day << ", " << s.grad.year << endl;
}

int main()
{
    // Student={id,BoD{Y,M,D},Graduation{Y,M,D}}
    student s1 = {123, {2000, 1, 1}, {2026, 2, 28}};
    cout << "Init Student Info... ==>" << endl;
    displayStudentInfo(s1);
    cout << endl << "Input the new student information: " << endl;
    s1 = getStudentInfo();
    cout << endl << "Received Student Info... ==>" << endl;
    displayStudentInfo(s1);
    return 0;
}
