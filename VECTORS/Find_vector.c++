#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10,11,4,5,2,9,7};
    int key;cin>>key;
    auto it = find(arr.begin(),arr.end(),key);
    if(it!=arr.end()){
        cout<<"Found at : "<<it-arr.begin()<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
}