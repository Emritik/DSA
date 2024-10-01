#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int item,loc = 0;
    cout<<"enter item number: ";
    cin>>item;
    int low,high,mid;
    low = 0;
    high = n-1;
    mid = int((low+high)/2);// 2

    while(low <= high){ 
        mid = int((low + high) / 2);// 3+5/2=4

        if(arr[mid] == item){
            loc = 1;
            //cout<<"assas";
            break;
        }
        else if(arr[mid] > item){// 0 1 2 4 5 (2>5 )
            high = mid -1 ;
            //cout<<"high";
        }
        else{
            low = mid + 1;//2+1=3
            //cout<<"low";
        }
        
    }
    if(loc == 0){
        cout<<"Not Found";

    }
    else{
        cout<<"Found!!";
    }
    return 0;
}
// O(n/2)