#include<bits/stdc++.h>
using namespace std;

int pairing(int arr[],int size){

    for(int i = 0; i < size; i++){ //Nested loop
        int x = arr[i];
            for(int j = i+1 ; j < size ; j++){
                int y = arr[j];
                cout<<x<<","<<y<<endl;
             }
        cout<<endl;
    }
    
    }
int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    
    pairing(arr,size);
}