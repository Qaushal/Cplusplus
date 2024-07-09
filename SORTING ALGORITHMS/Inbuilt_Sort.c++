#include<iostream>
#include<algorithm> //that includes sort() , reverse().....functions
using namespace std;


void fun(int arr[],int size){
    
    for(int i=0;i<size;i++){
        if(i!=size-1)
            cout<<arr[i]<<" , ";  
        else
            cout<<arr[i];
    }
    cout<<endl;
}
int main(){
    int arr[]={10,4,56,7,33,4,2,9,6,77};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n); //O(Nlogn)
    fun(arr,n);
    reverse(arr, arr+n);
    fun(arr,n);

   

}
