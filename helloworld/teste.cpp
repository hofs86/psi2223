#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while (i <= 100)
    {
        if (i == 60)
            break;
        else if (i % 2 == 1)
            continue;
        else
            cout << 2 * i << endl;
        i = i + 1;
    }
    puts("--fim do ciclo--");
    return 0;
}
