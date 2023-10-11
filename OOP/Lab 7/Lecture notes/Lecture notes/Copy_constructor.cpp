#include <iostream>
using namespace std;

class Date {
private:
	int m_day;
	int m_month;
	int m_year;
public:
	Date(int day, int month, int year): m_day{ day }, m_month{ month }, m_year{ year }{}
};