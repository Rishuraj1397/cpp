#include <iostream>
#include <vector>
#include <list>
using namespace std;

void explainVector(){
    vector<int> v;  //Declaring/initializung vector

    v.push_back(1);
    v.emplace_back(2);


    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    v.emplace_back(1,2);


    vector<int> v(5,100);   //This means container of size 5 and 100 as int value in each

    vector<int> v(5);

    vector<int> v1(5,20);
    vector<int> v2(v1);




    vector<int>::iterator it = v.begin();

    it++;
    cout<<*(it) << " ";


    it = it + 2;
    cout<< *(it)<<" ";

    vector<int>::iterator it = v.end();//end means after the end value


    cout<< v[0] << " " << v.at(0);

    cout << v.back()<< " ";//it prints or give the acess of last element



    for (vector<int>::iterator it = v.begin(); it !=v.end(); it++){
        cout << *(it) << " ";
    }


    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }

    for (auto it : v){
        cout << it << " ";
    }


    v.erase(v.begin() + 1);
    
    v.erase(v.begin() + 2, v.begin() + 4);



    vector<int>v(2,100);
    v.insert(v.begin(), 300);
    v.insert(v.begin() +1, 2,10);


    cout<<v.size();


    v.pop_back();

    v1.swap(v2);//this will swap the declared values of v1 and v2


    v.clear();//erase the entire vector

    cout<< v.empty();//return true if the vector is empty otherwise it will return false

}


void explainList(){
    list<int> ls;
}






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