#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    
    Person (string name, int age){
        // cout<< " Parents Constructor called : "<< endl;
        this->name = name;
        this->age = age;
    }

    // ~Person(){
    //     cout << "Parents Destructor called : "<< endl;
    // }

    // Person(){

    // }
};

class Student :public Person{
    //name,age,rollno
public:
    int roll_no;
    
    Student(string name, int age, int roll_no) : Person(name, age){
        // cout << " Child Constructor called!" << endl;
        this->roll_no = roll_no;
    }

    // ~Student(){
    //     cout << "child Destructor called"<< endl;
    // }
    
    void getinfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollNo: " << roll_no << endl;
    }
};
int main()
{
    Student s1("rishu", 21, 41);

    s1.getinfo();

    return 0;
}