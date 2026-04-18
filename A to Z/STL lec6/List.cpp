#include <iostream>
#include<list>
using namespace std;


void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(3); // {3, 2, 4}

    ls.emplace_front(4); // {4, 3, 2, 4}

    for(auto it = ls.begin(); it != ls.end(); it++){
        cout << *(it) << " ";
    }cout << endl;





    // rest function are as same as a vector

}
int main()
{
    explainList();
    return 0;
}