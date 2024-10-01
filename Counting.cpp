#include<bits/stdc++.h>

using namespace std;

void count_sort(int arr[],int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    // count[9] = {0,0,3,4,6,6,6,6,7}
    // arr [] = {4,2,2,8,3,3,1}
    int count[max + 1] = { 0 };
    for(int i=0;i<n;i++){
        count[arr[i]]++;// arr[2] = 2 count[2]++ =>0++
    }
    for(int i =1 ; i<= max ;i++){
        count[i] += count [i-1];
    }
    int ans[n];
    for(int i= n-1;i>=0;i--){
        ans[--count[arr[i]]] = arr[i];// arr[4] = 3 count[3] => 4 ans[--4]=> ans[3] = arr[4]
    }
    //[1, , ,3 ,3]
    for(int i=0;i<n;i++){
        arr[i] = ans[i];
    }    

}

int main(){
    int arr[] = {4,2,2,8,3,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    count_sort(arr, n);
    cout<<"\nSorted Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}