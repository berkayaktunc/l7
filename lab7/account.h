#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{

private:
    int accountNumber;
    float accountBalance;

public:
    Account();
    Account(int, float);

    void setAccountNumber(int);
    void setAccountBalance(float);

    int getAccountNumber();
    float getAccountBalance();

    void inputTransaction(char,int);
    float calculateFutureBalance(float, int);
    int mortgageYear(int totalMonthofMortgage);
};

#endif // ACCOUNT_H
