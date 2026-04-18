#include <iostream>
using namespace std;

void explainVector(){
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);//Emplace back is faster than push back as it constructs the element in place rather than copying it.

    // -----------------------------------------------------------ITERARTOR ON A VECTOR ------------------------------------------------------
    // this is a ful fledged iterator of vector
    // for(vector<int>::iterator it = vec.begin(); it != vec.end(); it++){
    //     cout << *(it) << " ";
    // }


    // by using auto keyword

    cout << "Before deletion" << endl;
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " " ;
    }
    cout << endl;


    // this is the most concise form of iterator in a vector we can also called this for each loop
    // for(int num : vec) {
    //     cout << num << " ";
    // }


    // ------------------------------------------------------Deletion on a vector ------------------------------------


    // it will erase 1st element which is 1 and then print rest of all (2, 3, 4, 5, 6)
    vec.erase(vec.begin());
    cout << "After deletion first element" <<endl;
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    //Inserting few more values
    vec.emplace_back(30);
    vec.emplace_back(40);
    vec.emplace_back(45);

    cout << "Adding more element" <<endl;
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;


    vec.erase(vec.begin() + 1 , vec.begin() + 4);//isme jo v delete krna hota hai uske first element mention krna hota hai fiir last ke baad wala elemnt mention krna hota hai

    cout << "Deleting multiple elements at a time " <<endl;//(2,6,30,40,45)
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;



    cout << "Initialization of another vector to understand the insert function" << endl;

    vector<int> v2(2,100);
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;

    v2.insert(v2.begin(), 300);// (300, 100, 100)
    cout << "After insertion at begining " << endl;
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *(it) << " ";
    }
    cout << endl;



    cout << "Now inserting multiple values at specific position" << endl;

    v2.insert(v2.begin() + 1, 2, 10);
    for(auto it = v2.begin(); it != v2.end(); it++){
        cout << *(it) << " ";
    }cout << endl;

    cout << "the size of vector v2 is" <<" " << v2.size();

    



}
int main()
{
    
    explainVector();
    return 0;
}
