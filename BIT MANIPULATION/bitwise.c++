#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 0;
    cout<< ~x; //ouput is -1
    cout<<endl;
    cout<< (~0);
    cout<<endl;

    cout<< (5<<2) <<endl;  // a<<b => a * 2^b // here 5 * 2^2 => 20
    cout<< (8>>3) <<endl; //  a>>b => a / 2^b // here 8/2^3 => 1
}