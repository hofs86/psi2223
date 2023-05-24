#include <iostream>

using namespace std;

int maior(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    int n1, n2, n3, ma;
    cout << "introduza o n1: " << endl;
    cin >> n1;
    cout << "introduza o n2: " << endl;
    cin >> n2;
    cout << "introduza o n3: " << endl;
    cin >> n3;
    ma = maior(n1, n2);
    ma = maior(ma, n3);
    cout << "maior = " << ma << endl;

    return 0;
}