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

int main()
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
            cout << "New account balance is " << user->getAccountBalance() << " TL" << endl;
        }
        else if(select == 2){
            cout << "Account balance is " << user->getAccountBalance() << " TL" << endl;
        }
        else if(select == 3){
            cout << "Enter an amount for deposit: ";
            cin >> tempInt;

            user->inputTransaction('D',tempInt);

            cout << "New account balance is " << user->getAccountBalance() << " TL" << endl;
        }
        else if(select == 4){
            cout << "Enter an amount for withdrawal: ";
            cin >> tempInt;

            if(user->getAccountBalance() > tempInt) user->inputTransaction('W', tempInt);
            else    cout << "No sufficient amount in the bank account" << endl;

            cout << "New account balance is " << user->getAccountBalance() << " TL" << endl;
        }
        else if(select == 5){
            float tempBalance = 0;
            cout << "Enter an annual interest rate: ";
            cin >> tempFloat;

            cout << "Enter a number of years: ";
            cin >> tempInt;
            tempBalance = user->calculateFutureBalance(tempFloat,tempInt);

            cout << "Your balance will be " << tempBalance << " TL" << endl;
            cout << "after " << tempInt <<" years with the interest rate " << tempFloat;
            user->setAccountBalance(tempBalance);
        }
        else if(select == 6){
            float tempFloat2;
            cout << "Enter a total amount of a mortgage: ";
            cin >> tempInt;

            cout << "Enter an annual mortgage interest rate: ";
            cin >> tempFloat;

            cout << "Enter an annual interest rate: ";
            cin >> tempFloat2;

            int year = user->mortgageYear(tempInt,tempFloat,tempFloat2);

            cout << "You require " << year << "years to pay" << endl;

        }
        else if(select == 7){
            cout << "Goodbye!" <<endl;
        }
        else    cout << "Unacceptable input!" <<endl;
        cout << "\n" << endl;
    }
}
