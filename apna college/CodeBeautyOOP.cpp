#include <iostream>
using namespace std;


class Abstractemployee{
    virtual void AskForPromotion() = 0;
};
class Employee: Abstractemployee{

private:

    string Name;
    string Company;
    int Age;

public: 

    void setName(string name){//setter
        this->Name = name;
    }

    string getName(){//getter
        return Name;
    }

    void setCompany(string company){
        this->Company = company;
    }

    string getCompany(){
        return Company;
    }

    void setage(int age){
        this->Age = age;
    }

    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        cout<<"My name is "<< Name << endl;
        cout<<"My Comapny is "<< Company << endl;
        cout<<"My age is "<< Age << endl;
    }

    Employee(string name, string company, int age){
        this->Name = name;
        this->Company = company;
        this->Age = age;
    }

    void AskForPromotion(){
        if(Age >= 30){
            cout << "You are Promoted "<< Name << " Congratulations " << endl;
        }else{
            cout << " Sorry you cant get Promotion right now " << Name << " Better luck next time, till then do hardwork " << endl;
        }
    }


};
int main()
{
    Employee E1 = Employee("Rishu", "Studying", 35);
    // E1.IntroduceYourself();

    E1.setage(40);
    // cout << E1.getAge();
    E1.AskForPromotion();
    return 0;
}