// Printing all the subsequent of a vector



#include <iostream>
using namespace std;

void subs(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto it : ds){
            cout << it << " ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // for not pick condition
    subs(ind+1, ds, arr, n);

    // pick the particular index

    ds.push_back(arr[ind]);
    subs(ind+1, ds, arr, n);
    ds.pop_back();
}


int main()
{
    int arr[] = {3, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> ds;
    subs(0, ds, arr, n);
    return 0;
}