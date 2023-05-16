#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL, var;
    var = 5;
    ptr = &var;
    *ptr = 11;

    cout << "Var = " << var << endl;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    return 0;
}