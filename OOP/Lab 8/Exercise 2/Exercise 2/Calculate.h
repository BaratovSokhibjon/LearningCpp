#pragma once
#ifndef _CALCULATE_H
#define _CALCULATE_H

class Calculate
{
    double m_stopvalue[5];
    double m_value{ 0.0 };
    int m_index{ 0 };
    char m_stop[5];

    void addToHistory(char op, double value);
public:
    double getValue() const;
    double add(double value);
    double substract(double value);
    double multiply(double value);
    double divide(double value);
    bool lastOperation(char& op, double& value);
    void undo();
};

#endif // _CALCULATE_H