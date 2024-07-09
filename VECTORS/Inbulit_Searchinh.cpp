#include<bits/stdc++.h>
using namespace std;



int main(){
    //FIND ALGORITHM
    vector<int> v = {10,11,23,32,6,87,34};
    vector<int> w = {23,32,6};

    // int key = 6;
    // auto itv = find(v.begin(),v.end(),key);
    // if(itv!=v.end()) cout<<"found at : "<<itv-v.begin()<<endl;
    // else cout<<"Not found"<<endl;


    //SEARCH ALGORITHM
    auto itw = search(v.begin(),v.end(),w.begin(),w.end());
    if(itw!=v.end()) cout<<"found First at : "<<itw-v.begin()<<" and last at : "<<itw-v.begin()+w.size()-1<<endl;
    else cout<<"Not found"<<endl;

    //UPPER BOUND & LOWER BOUND
    int arr[] = {10,10,20,20,30,30,40,20,10,20,10,10,10,20};
    vector<int> varr(arr,arr+14);

    sort(varr.begin(),varr.end());

    for(int x : varr) cout<<x<<" ";
    cout<<endl;

    auto up = upper_bound(varr.begin(),varr.end(),20);
    auto low = lower_bound(varr.begin(),varr.end(),20);
    cout<<"UPPER BOUND : "<<up-varr.begin()<<endl;
    cout<<"LOWER BOUND : "<<low-varr.begin()<<endl;

    //COUT
    string str = "LLLLLLRRLLLRRLLL";
    int cnt = count(str.begin(),str.end(),'L');
    cout<<"Count of L : "<<cnt<<endl;
    
}

