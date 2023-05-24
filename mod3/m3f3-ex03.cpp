#include <iostream>

using namespace std;

int maior(int a, int b)
{
    if (a>b)
    {
        return a;
    }
    return b;
}

int main()
{
    int n1, n2;
    cout << "introduza o n1: " << endl;
    cin >>n1;
    cout << "introduza o n2: " << endl;
    cin >>n2;
    cout << "maior = " << maior(n1, n2) << endl;

    return 0;
}