#include<iostream>
using namespace std;
//TIME COMPLEXICITY : O(N)
int linearsearch(int arr[], int size , int key){
    for(int i = 0 ; i < size ;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,45,34,7,93,36,8,22,9,31};
    int size = sizeof(arr)/sizeof(int);

    int key;
    cout<<"ENTER THE KEY ELEMENT : ";
    cin>>key;

    int result = linearsearch(arr,size,key);
    if(result!=-1){
        cout<<"KEY ELEMENT IS FOUND AT "<<result<<endl;
    }
    else{
        cout<<"NOT FOUND"<<endl;
    }

    return 0;

}