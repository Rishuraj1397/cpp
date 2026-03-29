#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    
    Person (string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student :public Person{
    //name,age,rollno
};
int main()
{
    
    return 0;
}