// 20 15 17 21 04 85 10 n= 7
// 20 15 17 21 // 04 85 10
//20 15 17 21 04 85 10
// arr[1]={25}
// merge
// sort 
#include <iostream>
using namespace std;
// 2,5
void merge(int arr[],int left, int mid,int right){
    int n1 = mid - left +1;// 10 left= 0,right = 9 mid = 4
    cout<<"size of n1: "<<n1<<endl;
    // 4 -0 +1 = 5
    int n2 = right -mid;
    cout<<"size of n2: "<<n2<<endl;
    // 9-4=5
    int L[n1],R[n2];// L[0,1A,2,3,4],R[0,1,2,3,4] = 10
    for(int i=0;i<n1;i++){
        L[i] = arr[left + i];//0//10 = 5
    }
    for(int j=0;j<n2;j++){
        R[j] = arr[mid + 1 + j];// 5
    }
    int i = 0,j=0,k = left;//0
    while(i<n1 && j < n2){// 4 6 2
        if(L[i]<=R[j]){
            arr[k] = L[i];//arr[0] = L[0]
            i++;
            cout<<"arr[k] is "<<arr[k]<<endl;
        }
        else{
            arr[k] = R[j];
            j++;
            cout<<"arr[k] is "<<arr[k]<<endl;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        cout<<"arr[k] is "<<arr[k]<<endl;
        k++;

    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        cout<<"arr[k] is "<<arr[k]<<endl;
        k++;
    }

}


void mergesort(int arr[], int left/*0 */ , int right/* 0*/){
    if(left >= right){ // 0 >= 0 arr[1] ={ 25 }
        return;
    }

    int mid = left + (right - left) / 2;// 3 // 0 + (1 - 0 )/2 = 0 
    mergesort(arr,left,mid);// 0, 3//2ns -> (3rd time 0,1)->return
    mergesort(arr,mid + 1, right);// (3,6)-> 6,6// return 
    merge(arr, left, mid, right);
}

int main(){
    int arr[7] = { 20, 15, 17, 21, 4 ,85,10 };// unsorted;
    int n= 7;
    cout<<"Unsorted array: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // *(arr + 2) = arr[2]
    mergesort(arr,0,n-1);//1st
    cout<<"\nSorted array: ";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
