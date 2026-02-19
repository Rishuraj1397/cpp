// Reversing the array using recursion function


#include <iostream>
using namespace std;

void rev(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    rev(arr, l+1, r-1);
}

void revv(int arr[],int n, int i){
    if(i >= n/2) return;

    swap(arr[i], arr[n-i-1]);
    revv(arr, n, i+1);

}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    revv(arr, n, 0);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}