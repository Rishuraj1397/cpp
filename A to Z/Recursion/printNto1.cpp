#include <iostream>
using namespace std;

class Solution {
public:
    void Num(int count) {
    if (count == 0)
        return;

    cout << count << "\n";
    Num(count - 1);
}
};

int main() {
    Solution sol;
    int N;
    cout << "Enter the value of N: ";
    cin >> N;

    sol.Num(N);

    return 0;
}
