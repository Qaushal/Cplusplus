#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    for(int time=0;time<n-1;time++){
        for(int j=0;j<n-time-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        }
    }
}

int main(){
int arr[]={5,4,-2,3,2,1,-1};
int n = sizeof(arr)/sizeof(int);
bubblesort(arr,n);

for(auto x : arr){
    cout<<x<<" , ";
}
return 0;
}