#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<float>& temp){
    for(int i = 1;i<temp.size();++i){
        float key = temp[i];
        int j = i-1;
        while(j>=0 && key<temp[j]){
            temp[j+1] = temp[j];
            j--;
        }
        temp[j+1] = key;
    }
}

void bucket_sort(float arr[],int n){
    vector<float> temp[n];

    for(int i=0;i<n;i++){
        //0.12*n=0.12 * 10  = 1.2 = 1
        int bi = n * arr[i];
        temp[bi].push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        insertionSort(temp[i]);
    }
    // 0.12 0.21 
    int index = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<temp[i].size();j++){
            arr[index++] = temp[i][j];
        }
    }
}

int main(){
    float arr[] = {0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.12,0.23,0.68};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted arr: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    bucket_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}