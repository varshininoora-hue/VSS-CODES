#include <iostream>
using namespace std;

class Box
{
private:
    int w, h, d;

public:
    // Three-argument constructor
    Box(int w, int h, int d) : w(w), h(h), d(d) {}

    // Delegating/default constructor
    Box() : Box(1, 1, 1) {}

    // One-argument constructor
    Box(int s) : Box(s, s, s) {}

    int volume() const
    {
        return w * h * d;
    }
};

int main()
{
    Box a;
    Box b(2);
    Box c(2, 3, 4);

    cout << "a.volume() = " << a.volume() << endl;
    cout << "b.volume() = " << b.volume() << endl;
    cout << "c.volume() = " << c.volume() << endl;

    return 0;
}
