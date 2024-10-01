#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n]; 
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int item, loc=0;
    cout<<"enter the number which you want to search: ";
    cin>>item;
    for(int i=0;i<n;i++){
        if(arr[i]==item){
            loc += 1; 
        }
    }
    if(loc == 0 ){
        cout<<"item not found";
    }
    else{
        cout<<"Found";
    }
    return 0;
}
// Worst = O(n)
// average = o(n)
// best = omega(n)