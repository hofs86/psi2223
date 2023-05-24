#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 0;

    y = x++;
    cout << "x=" << x << " y=" << y << endl;

    x = 5;
    y = 0;
    y = ++x;
    cout << "x=" << x << " y=" << y << endl;

    return 0;
}
