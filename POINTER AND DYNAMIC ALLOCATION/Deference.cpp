#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
   if(n==1){
   return 1;
   }
   return  n*factorial(n-1);

}

void sortt(int arr[],int n){
    if(n==1){
        return 1;
    }

    sortt(&arr,n-1)

}

int main(){
    /*int n;cin>>n;
    int ans = factorial(n);
    cout<<ans;
*/

int arr[]={5,6,3,4,8,1,2};
int n = 7;

sortt(&arr,n)




    // int x = 10;
    // int *ptr = &x;

    // cout<<x<<endl;
    // cout<<&x<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl; //deference operator

    // cout<<&*ptr<<endl; //same as above

}
