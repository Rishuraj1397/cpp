#include<iostream>
#include<vector>
#include<typeinfo>
#include<stdexcept>


using namespace std;

class DepositOnlyAccount{
public:
    virtual void deposit(double amount) = 0;
};

class WithdrawableAccount : public DepositOnlyAccount{
public:
    virtual void withdraw(double amount) = 0;
};

class SavingSAccount : public WithdrawableAccount{
private:
    double balance;


public:
    SavingSAccount(){
        balance = 0;
    }


    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << " In Savings Account. New balance is: " << balance << endl;
    }


    void withdraw(double amount){
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Wihtdrawn: " << amount << " From your Savings Accoount. New balance is: " << balance << endl;
        }else{
            cout << "There is insuffiecient funds in your account! " << endl;
        }
        
    }
};


class CurrentAccount : public WithdrawableAccount{
private:
    double balance;


public:
    CurrentAccount(){
        balance = 0;
    }


    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << " in your Current account. New balance is: " << balance << endl;
    }



    void withdraw(double amount){
        if(balance >= amount){
            balance -= amount;
            cout << "Withdrawn: " << amount << " From your Current Account. New balance is: " << balance << endl;
        }else{
            cout << "Your account has insuffiecient funds!" << endl;
        }
    }
};


class FixedtermAccount : public DepositOnlyAccount{
private: 
    double balance;


public:
    FixedtermAccount(){
        balance = 0;
    }


    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << " in your Fixed term account. New balance is: " << balance << endl;
    }
};


class Bankclient{
private:
    vector<WithdrawableAccount*> withdrawableaccounts;
    vector<DepositOnlyAccount*> depositonlyaccounts;

public:
    Bankclient(vector<WithdrawableAccount*> withdrawableaccounts,
        vector<DepositOnlyAccount*> depositonlyaccounts) {
            this->withdrawableaccounts = withdrawableaccounts;
            this->depositonlyaccounts  = depositonlyaccounts;
        }

    void processtransaction(){
        for (WithdrawableAccount* acc : withdrawableaccounts)
        {
            acc->deposit(10000);
            acc->withdraw(500);
        }

        for(DepositOnlyAccount* acc : depositonlyaccounts){
            acc->deposit(10000);
        }
        
    }
};




int main(){
    vector<WithdrawableAccount*> withdrawableaccounts;
    withdrawableaccounts.push_back(new SavingSAccount());
    withdrawableaccounts.push_back(new CurrentAccount());





    vector<DepositOnlyAccount*> depositonlyaccounts;
    depositonlyaccounts.push_back(new FixedtermAccount());


    Bankclient* client = new Bankclient (withdrawableaccounts, depositonlyaccounts);
    client->processtransaction();

    return 0;
}