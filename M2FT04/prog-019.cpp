#include <iostream>
using namespace std;
int main()
{
    int i, coluna = 1;

    for (int i = 33; i < 256; i++)
    {
        cout << i << " " << char(i) << "\t";
        if (coluna == 10)
        {
            cout << "\n";
            coluna = 1;
        }
        else
        {
            coluna++;
        }
    }
    cout << "\n\n";

    return 0;
}