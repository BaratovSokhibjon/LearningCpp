#include <iostream>
#include "Rectangle.h"

using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
    if ((ul.GetX() > lr.GetX()) || (ul.GetY() > lr.GetY()))
        return false;
    m_upLeft = ul;
    m_lowRight = lr;
    return true;
}

void Rectangle::ShowRecInfo() const {
    cout << "LeftTop: " << '[' << m_upLeft.GetX() << ",";
    cout << m_upLeft.GetY() << ']' << endl;
    cout << "RightBottom: " << '[' << m_lowRight.GetX() << ",";
    cout << m_lowRight.GetY() << ']' << endl << endl;
}

bool Rectangle::IsInside(const Point& p) const {

    return (p.GetX() >= m_upLeft.GetX() && p.GetX() <= m_lowRight.GetX() &&
        p.GetY() >= m_upLeft.GetY() && p.GetY() <= m_lowRight.GetY());
}




