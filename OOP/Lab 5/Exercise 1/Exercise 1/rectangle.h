#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"

class Rectangle {
public:
    Point m_upLeft;
    Point m_lowRight;

    bool InitMembers(const Point& ul, const Point& lr);
    void ShowRecInfo() const;
    bool IsInside(const Point& p) const;
};

#endif // RECTANGLE_H