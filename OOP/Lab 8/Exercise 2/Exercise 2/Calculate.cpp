#include "Calculate.h"
#include <iostream>
using namespace std;

double Calculate::getValue() const{return m_value;}
void Calculate::addToHistory(char op, double value)
{
    if (m_index == 5) {
        for (int i = 0; i < 4; ++i) {
            m_stop[i] = m_stop[i + 1];
            m_stopvalue[i] = m_stopvalue[i + 1];
        }
        m_index = 4;
    }
    m_stop[m_index] = op;
    m_stopvalue[m_index] = value;
    m_index++;
}

double Calculate::add(double value)
{
    addToHistory('+', value);
    return m_value += value;
}

double Calculate::substract(double value)
{
    addToHistory('-', value);
    return m_value -= value;
}

double Calculate::multiply(double value)
{
    addToHistory('*', value);
    return m_value *= value;
}

double Calculate::divide(double value)
{
    addToHistory('/', value);
    return m_value /= value;
}

bool Calculate::lastOperation(char& op, double& value)
{
    if (m_index == 0)
        return false;
    op = m_stop[m_index - 1];
    value = m_stopvalue[m_index - 1];
    return true;
}

void Calculate::undo()
{
    switch (m_stop[m_index - 1]) {
    case '+':
        m_value -= m_stopvalue[m_index - 1];
        break;
    case '-':
        m_value += m_stopvalue[m_index - 1];
        break;
    case '*':
        m_value /= m_stopvalue[m_index - 1];
        break;
    case '/':
        m_value *= m_stopvalue[m_index - 1];
        break;
    }
    m_index--;
}