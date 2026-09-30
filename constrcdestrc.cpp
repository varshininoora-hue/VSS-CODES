#include <iostream>
using namespace std;

class Tracer
{
private:
    int id;

public:
    Tracer(int i) : id(i)
    {
        cout << "Construct #" << id << endl;
    }

    ~Tracer()
    {
        cout << "Destruct #" << id << endl;
    }
};

int main()
{
    cout << "Enter block" << endl;

    {
        Tracer a(1);
        Tracer b(2);

        cout << "...working..." << endl;
    }

    cout << "Left block" << endl;

    return 0;
}

