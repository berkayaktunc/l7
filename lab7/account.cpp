#include "account.h"
#include <iostream>
using namespace std;

Account::Account()
{
    this->accountNumber = 0;
    this->accountBalance = 0;
}

Account::Account(int aN, float aB){
    this->accountNumber = aN;
    this->accountBalance = aB;
}

void Account::setAccountNumber(int newAN){
    this->accountNumber = newAN;
}
void Account::setAccountBalance(float newAB){
    this->accountBalance = newAB;
}

int Account::getAccountNumber(){
    return this->accountNumber;
}
float Account::getAccountBalance(){
    return this->accountBalance;
}

void Account::inputTransaction(char transactionType, int transactionAmount){
    transactionAmount = 5;
    if( transactionType == 'D'){

    }
    else if( transactionType == 'W'){

    }
    else    cout <<"Error!";
}
float Account::calculateFutureBalance(float annualInterestRate, int years){
    annualInterestRate = 3.5;
    years = 0;
    return annualInterestRate;
}
int Account::mortgageYear(int totalMonthofMortgage){
    totalMonthofMortgage = 0;
}
