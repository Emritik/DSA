#include <iostream>
using namespace std;
int main(){
    // & -> refrence operator ,* -> derefrence opertor
    // & -> data cconvert Address
    // * -> Address convert data;
    int a = 10;
    int *p = &a; // &10 = x0a114 => *p // 1000
    cout<<p<<endl; // 10
    cout<<*(&a)<<endl;
   // Generic Pointer?  -> void *p = &a
    int **ptr = &p;
    cout<<**ptr<<endl;
    cout<<*(p+2);//  1000 + 2*4 = 1000+8 = 1008
    int arr[] = {1,2,3,4,5};
    cout<<*(arr + 0)<<endl;

    return 0;
}