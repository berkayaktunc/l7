#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{

private:
    int accountNumber;
    float accountBalance;

public:
    Account();
    Account(int aN, float aB);

    void setAccountNumber(int newAN);
    void setAccountBalance(float newAB);

    int getAccountNumber();
    float getAccountBalance();

    void inputTransaction(char transactionType);
    void calculateFutureBalance(float annualInterestRate, int years);
    void mortgageYear(int totalMonthofMortgage);

};

#endif // ACCOUNT_H
