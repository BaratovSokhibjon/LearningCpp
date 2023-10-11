#include<iostream>
using namespace std;
class IntArray
{
private:
	int m_len{ 0 };
	int* m_data{ nullptr };
public:
	IntArray(int len)
		: m_len{ len }
	{
		m_data = new int[m_len];
	}
	IntArray(const IntArray& ccon) : m_len{ ccon.m_len } { // Created a deep copy constructor
		m_data = new int[ccon.m_len];					   // so that the runtime error doesn't popup
	}
	~IntArray() {
		if (m_data) delete[] m_data;
	}
	void set(int index, int value) {
		if (index >= 0 && index < m_len)
			m_data[index] = value;
	}
	int get(int index, int err) const {
		if (index >= 0 && index < m_len)
			return m_data[index];
		else
			return err;
	}
};int main() {
	int i;
	cout << "=== IntArray a{ 10 } ===" << endl;
	IntArray a{ 10 };
	for (i = 0; i < 10; ++i)
		a.set(i, i * 10 + 5);
	cout << "a: ";
	for (i = 0; i < 10; ++i)
		cout << a.get(i, -1) << ' ';
	cout << endl;
	cout << "=== IntArray b{ a } ===" << endl;
	IntArray b{ a };
	cout << "b: ";
	for (i = 0; i < 10; ++i)
		cout << a.get(i, -1) << ' ';
	return 0;
}/*
=== IntArray a{ 10 } ===
a: 5 15 25 35 45 55 65 75 85 95
=== IntArray b{ a } ===
b: 5 15 25 35 45 55 65 75 85 95
*/