#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    
    cout<<"IN PRINTARRAY FUNCTION "<< sizeof(arr) <<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);

    cout<<"IN MAIN FUNCTION "<< sizeof(arr) <<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    printarray(arr,n);
    return 0;
}