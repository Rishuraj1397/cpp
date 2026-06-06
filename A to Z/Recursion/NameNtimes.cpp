// Printing name N times
#include <iostream>
using namespace std;

class Solution {
public:
    void printName(string name, int count, int N) {
        if (count == N)
            return;

        cout << name << "\n";

        printName(name, count + 1, N);
    }
};

int main() {
    Solution sol;
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    string name = "Rishu";

    sol.printName(name, 0, N);

    return 0;
}
