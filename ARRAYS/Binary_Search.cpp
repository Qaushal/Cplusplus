#include<iostream>
using namespace std;
//TIME COMPLEXICITY : O(logN)
//for instance : time complexicity is log16 means loop will run 4 times 
//fast and efficient
//search space is monotonic(non decreasing or non increasing)
int binarysearch(int arr[], int size, int key){
    int s =0;
    int e = size-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,12,24,36,41,56,69};
    int size = sizeof(arr)/sizeof(int);
    int key; cout<<"ENTER THE KEY : "; cin>>key;
    
    int result = binarysearch(arr,size,key);
    if(result!=-1){
        cout<<"KEY ELEMENT IS FOUND AT : "<<result<<endl;
    }
    else{
        cout<<"NOT FOUND "<<endl;
    }
    return 0;
}