#include <iostream>
using namespace std;

class solution{
public:
    vector<int> getDivisor(int n){

        vector<int> res;

        for (int i = 1; i * i <= n; i++)
        {
            if(n % i == 0){
                res.push_back(i);
            

            if (i != n / i)
            {
                res.push_back(n / i);
            }
        }

        }
        return res;
    }
};
int main()
{
    solution sol;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> result = sol.getDivisor(n);

    cout << "Divisor of " << n <<" : ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}