// Printing 1 to 4 using recursion function

#include <iostream>
using namespace std;

int cnt = 1;

void f(){
    if(cnt == 6){
        return;
    }else{
        cout << cnt << endl;
        cnt ++;
        f();
    }
}
int main()
{
    f ();
    return 0;
}