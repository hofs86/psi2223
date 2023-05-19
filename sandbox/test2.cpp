#include <iostream>

using namespace std;

void showMenu()
{
    cout << "---------------MENU --------------" << endl;
    cout << "1- Check balance :" << endl;
    cout << "2- Check deposit :" << endl;
    cout << "3- Withdraw:" << endl;
    cout << "4- Exit" << endl;
    cout << "--------------------------------" << endl;
}


int main()
{
    int option;
    double balance = 500;

    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;
        cout << "\033[2J\033[1;1H";

        switch(option)
        {
           case 1:
             cout << "Balance is: " << balance << " $" << endl;
             break;

           case 2:
             cout << "Deposit amount: " << endl;
             double depositAmount;
             cin >> depositAmount;
             balance += depositAmount;
             break;

           case 3:
             cout << "Withdraw amount: " << endl;
             double withdrawAmount;
             cin >> withdrawAmount;

             if (withdrawAmount <= balance) {
                 balance -= withdrawAmount;
             }
             else {
                cout << "Not enough money" << endl;
             }
             break;

           default:

              cout << "\033[2J\033[1;1H"; //for clean screen with Linux
              cout << "Your choice is invalid " << endl;
              cin.clear();
              cin.ignore();
            
        }
        

    } while(option != 4);

    return 0;
}