// recursive function -> stack
// 1 2 4 5 4 8 <- top
// fn(){
// fn();// recursive call// 2nd time// 6th ex -> output
// }
// fn()// first time
// [ x,y <- top
// factorial program ->
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
    // 5 * fact(4).................... 1 * fact(0) = > -128 to 127 0 to 256
}
int main()
{
    
    int n;
    cout << "enter number";
    cin >> n;
    cout << fact(n);
    return 0;
}
