#include <iostream>
using namespace std;

class Date {
	int m_Day;
	int m_Month;
	int m_Year;

public:
	int getMonth() { return m_Month; }
	void setMonth(int month) { m_Month = month; }

	int getDay() { return m_Day; }
	void setDay(int day) { m_Day = day; }

	int getYear() { return m_Year; }
	void setYear(int year) { m_Year = year; }
};



