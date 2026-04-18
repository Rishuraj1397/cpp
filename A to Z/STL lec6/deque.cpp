#include <iostream>
#include <deque>
using namespace std;


void explainDeque() {

    deque<int> dq;
    dq.push_back(1); 
    dq.emplace_back(2); 
    dq.push_front(4); 
    dq.emplace_front(3); 

    dq.pop_back(); 
    dq.pop_front(); 

    dq.back();
    dq.front();

    for(auto it : dq)
    {
    cout << it << " ";
    }
    cout << endl;
}
int main()
{
    explainDeque();
    return 0;
}