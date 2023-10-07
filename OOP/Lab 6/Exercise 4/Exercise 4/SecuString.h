#include <iostream>
using namespace std;
#ifndef _secuString__
#define _secuString__

class SecuString {
private:
	string m_stored_string;
	string m_password;
public:
	SecuString(string message, string password) : m_stored_string(message), m_password(password) {}
	bool SetMessage(string message, string password) {
		if (password == m_password) {
			m_stored_string = message;
			return true;
		}
		return false;
	}

	string GetMessage(string password) {
		if (password == m_password) {
			return m_stored_string;
		}
		return "No real stored message. Invalid Password..";
		
	}

	bool ChangePW(string old_pw, string new_pw) {
		if (old_pw == m_password) {
			m_password = new_pw;
			return true;
		}
		return false;
	}
};

#endif // !_secuString__
