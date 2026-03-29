#include <iostream>
#include <string>
using namespace std;


class Student{
public:
    string name;
    double* cgpaPtr;


    // in this constructor we stored the value of cgpa dynamically
    Student (string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }


    void getinfo(){
        cout<< "name: "<< name <<endl;
        cout<< "cgpa: "<<*cgpaPtr<<endl;
    }
};
int main()
{
    Student s1("rishu raj", 8.9);
    Student s2(s1);
    
    
    s1.getinfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getinfo();

    s2.name = "Neha kumari";
    s2.getinfo();
    return 0;
}