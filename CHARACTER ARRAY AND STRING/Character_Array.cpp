#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[] = {'a','b','c','d','e','\0'};
    char b[] = "kaushal";
    cout << a<<endl;
    cout<<b<<endl;

    cout<<strlen(a)<<endl;
    cout<<sizeof(a)<<endl; // +1 in character array because it also counts \0

    char c[100];
    cout<<"ENTER THE CHARACTER ARRAY WITHOUT SPACE : ";
    cin>>c;  // doesn't requird of for loop to take inputs
    cout<<c;
}