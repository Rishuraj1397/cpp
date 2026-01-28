#include <iostream>
# include <vector>
using namespace std;
int main()
{
    vector <char> Letters = {'A', 'B', 'C', 'D', 'E'};
    // cout<<"Size of vector Letters is: "<<Letters.size()<<endl;
    // cout<<"Capacity of vector Letters is: "<<Letters.capacity()<<endl;
    Letters.push_back('F');
    // cout<<"Size of vector Letters after push_back is: "<<Letters.size()<<endl;
    // cout<<"Capacity of vector Letters after push_back is: "<<Letters.capacity()<<endl;
    Letters.push_back('G');
    Letters.push_back('H');
    
    cout<<"Size of vector Letters after another push_back is: "<<Letters.size()<<endl;
    cout<<"Capacity of vector Letters after another push_back is: "<<Letters.capacity()<<endl;
    // cout<<Letters[1]<<endl;
    for(char i : Letters)
    {
        cout<<i<<", ";
    }
    cout<<endl;
    return 0;
}