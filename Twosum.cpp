#include <iostream>
using namespace std;

// selection sort
// 11 25 12 22 64
// 25 12 22 64
// i, j, min= 11
// 11 12 22 25 64
void sort(int arr[],int n){
    for(int i =0;i<n-1;i++){
        int min_ind = i;//0
        // 64 25 12 22 11
        for(int j =i+1;j<n;j++){// 1 25
            if(arr[j]<arr[min_ind]){// 11 < 12
               min_ind =j;// n-1
            }
        }
        // int temp;
        // temp = arr[i];
        // arr[i] = arr[min_ind];
        // arr[min_ind] = temp;
        swap(arr[min_ind],arr[i]);
    }
}

int main(){
    int n;
   cout<<"Enter the size of Array: "<<endl;
   cin>>n;
   int arr[n];
   cout<<"Enter the element of array: ";
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
    sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int i  = 0;
    int j = n-1;
    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    while(i<=j){
        if(arr[i] + arr[j] == target){
            cout<<i<< " "<< j<<endl;
            break;
        }
        else{
            if(arr[i]+arr[j] > target){
                j--;
            }
            else if(arr[i] + arr[j] < target){
                i++;
            } 
        }
    }
    return 0;
}
//  for i=0, n-1 , i++
// n arr[n-1]// arr[i+1] - arr[i]
//diff[n-1]= {  1 2 1 84 }
// for(){
// int diff