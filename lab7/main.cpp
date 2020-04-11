#include <iostream>
#include "account.h"
using namespace std;

void menu(){
    cout << "1. Change the account balance" <<endl;
    cout << "2. Get the current balance" <<endl;
    cout << "3. Deposit" <<endl;
    cout << "4. Withdrawal" <<endl;
    cout << "5. Plan your future balance" <<endl;
    cout << "6. Mortgage plan" <<endl;
    cout << "7. Exit" <<endl;
}

int main(int argc, char *argv[])
{
    Account *user = new Account();

    int select = 0;
    float tempFloat = 0;
    int tempInt;

    while (select!=7){

        menu();
        cout << "Enter your selection: ";
        cin >> select;

        if(select == 1){
            cout << "Enter a new account balance: ";
            cin >> tempFloat;
            user->setAccountBalance(tempFloat);
            cout << "New account balance is " << user->getAccountBalance() << "TL" << endl;
        }
        else if(select == 2){
            cout << "Account balance is " << user->getAccountBalance() << " TL" << endl;
        }
        else if(select == 3){
            cout << "Enter an amount for deposit: ";
            cin >> tempInt;

            user->inputTransaction('D',tempInt);

            cout << "New account balance is " << user->getAccountBalance() << "TL" << endl;
        }
        else if(select == 4){
            cout << "Enter an amount for withdrawal: ";
            cin >> tempInt;

            if(user->getAccountBalance() > tempInt) user->setAccountBalance( user->getAccountBalance() - tempInt);
            else    cout << "No sufficient amount in the bank account" << endl;

            cout << "New account balance is " << user->getAccountBalance() << "TL" << endl;
        }
        else if(select == 5){
            float temp = 0;
            cout << "Enter an annual interest rate: ";
            cin >> tempFloat;

            cout << "Enter a number of years: ";
            cin >> tempInt;
            temp = user->calculateFutureBalance(tempFloat,tempInt);

            cout << "Yourbalance will be " << temp << " TL" << endl;

        }
        else if(select == 6){

        }
        else    cout << "Unacceptable input!" <<endl;

    }
    cout << "Goodbye!" <<endl;
}
