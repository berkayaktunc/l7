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
    if( transactionType == 'D'){
        setAccountBalance( getAccountBalance() + transactionAmount );
    }
    else{
        setAccountBalance( getAccountBalance() - transactionAmount);
    }
}
float Account::calculateFutureBalance(float annualInterestRate, int years){
    float temp = getAccountBalance();
    for(int i=0; years>i; i++){
        temp += temp * annualInterestRate;
    }
    return temp;
}
int Account::mortgageYear(int totalMonthofMortgage, float mortgageIntrestRate,float intrestRate){
    int year = 0;
    for(year = 0 ; totalMonthofMortgage > 0 ; year++ ){
        totalMonthofMortgage -= totalMonthofMortgage * mortgageIntrestRate;
        totalMonthofMortgage += totalMonthofMortgage * intrestRate;
    }
    return year;
}
