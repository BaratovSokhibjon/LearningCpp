#include <iostream>

using namespace std;

class Calculate {
private:
    double m_value{};
public:
    int getValue() { return m_value; }
    double add(double value) {return m_value += value;}
    double substract( double value) { return m_value -= value; }
    double multiply(double value) { return m_value *= value; }
    double divide(double value) { return m_value /= value; }
};

int main(void) {
    Calculate cc;
    int i;
    char op;
    double value;
    for (i = 0; i < 10; ++i) {
        cout << "Select math operator(+,-,*,/): ";
        cin >> op;
        cout << "Enter a real number for the math: ";
        cin >> value;

        switch (op) {
        case '+':
            cout << cc.getValue() << " + " << value;
            cout << " = " << cc.add(value) << endl;
            break;
        case '-':
            cout << cc.getValue() << " - " << value;
            cout << " = " << cc.substract(value) << endl;
            break;
        case '*':
            cout << cc.getValue() << " * " << value;
            cout << " = " << cc.multiply(value) << endl;
            break;
        case '/':
            cout << cc.getValue() << " / " << value;
            cout << " = " << cc.divide(value) << endl;
            break;
        }
    }
    return 0;
}
