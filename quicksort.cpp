#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &arr,int left,int right){
    int pivot = arr[right];
    cout<<"\npivot element is :"<<pivot<<endl;
    // 0 n-1
    int i = (left-1);
    for(int j=left;j<right;j++){// 0,0
        if(arr[j] <= pivot){
            i++;//0
            swap(arr[i],arr[j]);
            cout<<"swap between "<<arr[i]<<" "<<i <<" & "<<arr[j]<<" "<< j<<endl;
        }
    }
    swap(arr[i+1],arr[right]);
    cout<<"outside the loop swap between "<<arr[i+1]<<" "<<i<<" & "<<arr[right]<<" "<<right<<endl;
    return (i+1);
}

void quickSort(vector<int> &arr,int left,int right){
    if(left<right){
        int pivot = partition(arr,left,right);
        quickSort(arr,left,pivot - 1);
        quickSort(arr,pivot + 1,right);
    }
}

int main(){
    vector<int> arr = {2,8,7,1,2,5,6,4};
    int n = arr.size();
    cout<<"Unsorted arr:";
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // for(auto i : arr){
    //     cout<<i;
    // }
    quickSort(arr,0,n-1);
    cout<<"\nSorted arr:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}