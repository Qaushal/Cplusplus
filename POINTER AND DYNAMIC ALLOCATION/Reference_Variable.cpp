#include<bits/stdc++.h>
using namespace std;

void applyTax(int &income){
    income = income - income*0.1;
    
}
int main(){
    int x = 10;
    int &y = x; //x and y both contain same value , here y is not another container
    x = 12;
    cout<<x <<" "<<y<<endl;

    int income = 100;

    applyTax(income);
    
    cout<<income<<endl;
}
