#include<bits/stdc++.h>
using namespace std;

//space complexicity is 1
//time complexicity is O(N)

int reverse(int arr[],int size){
    int s = 0;
    int e = size - 1;

    while(s<e){
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(int);
    cout<<"BEFORE REVERSING"<<endl;
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;

    reverse(arr,size);

    cout<<"AFTER REVERSING"<<endl;
    for(int x : arr){
        cout<<x<<" ";
    }
    cout<<endl;
}