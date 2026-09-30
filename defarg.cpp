#include <iostream>
#include <string>
using namespace std;

// Level defaults to 1. Only message is mandatory.
void logMsg(const string &msg, int level = 1)
{
    const string tag[4] = {"", "INFO", "WARN", "ERROR"};

    if (level < 1 || level > 3)
        level = 1;

    cout << "[" << tag[level] << "] " << msg << endl;
}

// Simple interest with default rate = 7.5%
double interest(double principal, double years, double rate = 7.5)
{
    return principal * years * rate / 100.0;
}

int main()
{
    logMsg("System started");
    logMsg("Low memory", 2);

    cout << "Interest = " << interest(100000, 2) << endl;
    cout << "Interest = " << interest(100000, 2, 9.0) << endl;

    return 0;
}

