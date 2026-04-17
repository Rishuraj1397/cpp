#include <iostream>
using namespace std;

void explainPair(){
    pair<pair<int, int>, pair<int, int>> p = {{1, 3}, {2, 4}};

    cout << p.first.first << " " << p.first.second << endl;
}
int main()
{
    explainPair();
    return 0;
}