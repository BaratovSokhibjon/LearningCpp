#include <iostream>
using namespace std;

class Rectangle {
private:
	int m_width;
	int m_heigth;
public:
	Rectangle(){
		m_width = 0;
		m_heigth = 0;
	}
	Rectangle& setWidth(int width) {
		m_width = width;
		return *this;
	}
	Rectangle& setHeight(int height) {
		m_heigth = height;
		return *this;
	}
	void Display() {
		cout << "Width = " << m_width << " Height = " << m_heigth << endl;
	}
};

int main() {
	Rectangle rect;
	rect.Display();
	rect.setWidth(10).setHeight(20).Display();
	return 0;
}