#include<iostream>
#include<vector>
#include<typeinfo>
#include<stdexcept>


using namespace std;

class Account{
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual ~Account() = default;
};

class SavingAccount : public Account{
private:
    double balance;

public:
    SavingAccount(){
        balance = 0;
    }


    void deposit(double amount) override{
        balance += amount;
        cout << "Deposited: " << amount << " in your Savings Account. Your current balance is: " << balance << endl;
    }


    void withdraw(double amount) override{
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " from your savings Account. Your New balance is: " << balance << endl;
        }else{
            cout << "Insufficient balance in your account. Amount can't be withdrawn!" << endl;
        } 
    }
};

class CurrentAccount : public Account{
private:
    double balance;


public:
    CurrentAccount(){
        balance = 0;
    }


    void deposit(double amount) override{
        balance += amount;
        cout << "Deposited: " << amount << " in your current account. Your new balance is: " << balance << endl;
    }


    void withdraw(double amount) override{
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << " from your current account. Your new balance is: " << balance << endl;
        }else{
            cout << "You don't have sufficient funds!" << endl;
        }
        
    }
};


class FixedAccount : public Account{
private:
    double balance;


public:
    FixedAccount(){ balance = 0; }
    void deposit(double amount){
        balance += amount;
        cout << "Deposited: " << amount << " in your Fixed account. Your new balance is: " << balance << endl;
    }

    void withdraw(double amount){
        throw logic_error("Withdrawal not allowed in fixed term account!");
    }
};


class BankClient {
private:
    vector<Account*> accounts;


public:
    BankClient(vector<Account*> accounts){
        this->accounts = accounts;
    }


    void processTransaction(){
        for (Account* acc : accounts){
            acc->deposit(1000);

            if (typeid(*acc) == typeid(FixedAccount))
            {
                cout << "Skipping withdrawal for fixed Term account.\n";
            }else{
                try{
                    acc->withdraw(500);
                }catch(const logic_error& e){
                    cout <<"Exception: " << e.what() << endl;
                }
            }
            
        }
    }
};



int main(){
    vector<Account*> accounts;
    accounts.push_back(new SavingAccount());
    accounts.push_back(new CurrentAccount());
    accounts.push_back(new FixedAccount());

    BankClient* client = new BankClient(accounts);
    client->processTransaction();

    return 0;
}
