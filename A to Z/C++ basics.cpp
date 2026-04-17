#include <iostream>

using namespace std;

// Input output in C++
int main()
{

    // Simply printing without input
    // cout << "Hello World!" << endl; // endl is used to print in new line
    // cout << "Welcome to C++ programming." << endl;

    // Taking input from user
    // int age;
    // cout << "Enter your age: ";
    // cin >> age; // taking input from user and storing it in variable age
    // cout << "Your age is: " << age << endl;

    // If else statement
    // if (age < 18)
    // {
    //     cout << "You are a minor." << endl;
    // }
    // else
    // {
    //     cout << "You are an adult." << endl;
    // }

    /*
    A shool has following rules for grading for grading systems:
    a. Below 25 - F
    b. 25 to 44 - E
    c  45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f 80 to 100 - A
    */

    // int marks;
    // cout << "Enter the marks of a student : ", cin >> marks;
    // if (marks <= 24)
    // {
    //     cout << "Grade : F" << endl;
    // }
    // else if (marks <= 44)
    // {
    //     cout << "Grade : E" << endl;
    // }
    // else if (marks <= 50)
    // {
    //     cout << "Grade : D" << endl;
    // }
    // else if (marks <= 60)
    // {
    //     cout << "Grade : C" << endl;
    // }
    // else if (marks <= 80)
    // {
    //     cout << "Grade : B" << endl;
    // }
    // else if (marks <= 100)
    // {
    //     cout << "Grade : A" << endl;
    // }
    // else
    // {
    //     cout << "Invalid marks entered." << endl;
    // }

    /*
    Take the age from the user and then decide accordingly
    1. If age < 18,
        print-> not elegible for job
    2. If age >= 18 and age <= 54
        print -> eligible for job
    3. If age >= 55 and <= 57
        print -> eligible for job but retirement soon
    4. If age > 57
        print -> retirement time
    */

    // int age1;
    // cout << " Enter the age : ", cin >> age1;

    // if (age1 < 18)
    // {
    //     cout << "Not eligible for job" << endl;
    // }
    // else if (age1 <= 57)
    // {
    //     cout << "Eligible for job";
    //     if (age1 >= 55)
    //     {
    //         cout << ", retirement soon" << endl;
    //     }
    //     cout << endl;
    // }
    // else
    // {
    //     cout << "Retirement time" << endl;
    // }






    // Switch Cases

    /*
    Take the day no and pront the corresponding day 
    for 1 print Monday,
    for 2 print Tuesday and so  on for 7 Print Sunday.
    */


    // int day;
    // cout << "Enter the day number (1-7): ", cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //     break;
    // case 3:
    //     cout << "Wednesday";
    //     break;
    // case 4:
    //     cout << "Thursday";
    //     break;
    // case 5:
    //     cout << "Friday";
    //     break;
    // case 6:
    //     cout << "Saturday";
    //     break;
    // case 7:
    //     cout << "Sunday";
    //     break;
    
    // default:
    //     cout << "Invalid day number entered." << endl;
    //     break;
    // }

    return 0;
}