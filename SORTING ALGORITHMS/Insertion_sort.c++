#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
for(int i=1;i<=n-1;i++){
    int curr = arr[i];
    int prev = i-1;
    while(prev>=0 && arr[prev]>curr){
        arr[prev+1] = arr[prev];
        prev=prev-1;
}
arr[prev+1]=curr;
}
}

int main(){
    int arr[]= {20,56,3,8,34,65,12,2};
    int size = sizeof(arr)/sizeof(int);

    InsertionSort(arr,size);

    for(int x : arr){
        cout<<x<<" , ";
    }
    cout<<endl;
    return 0;
}