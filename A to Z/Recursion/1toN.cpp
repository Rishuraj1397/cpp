//  Printing 1 to n using recursion

#include <iostream>
using namespace std;

class Solution {
public:
    void Num( int count, int N) {
        if (count > N)
            return;

        cout << count << "\n";

        Num( count + 1, N);
    }
};

int main() {
    Solution sol;
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    sol.Num(1, N);

    return 0;
}
