#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }

    Point add(const Point &p) const
    {
        return Point(x + p.x, y + p.y);
    }

    Point &setX(int v)
    {
        this->x = v;
        return *this;
    }

    Point &setY(int v)
    {
        this->y = v;
        return *this;
    }

    void show() const
    {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

void shiftX(Point &p)
{
    p.setX(99);
}

void shiftY(Point p)
{
    p.setX(-1);
}

int main()
{
    Point a(1, 2), b(3, 4);

    Point c = a.add(b);
    c.show();

    Point d;
    d.setX(7).setY(8);
    d.show();

    shiftX(a);
    a.show();

    shiftY(b);
    b.show();

    return 0;
}
