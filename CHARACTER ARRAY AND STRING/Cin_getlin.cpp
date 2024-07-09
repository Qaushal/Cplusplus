#include<iostream>
using namespace std;
int main() {
    // char sentence[1000];
    // cin.getline(sentence,1000); //here stopping parameter is new line(\n)
    // cout<<sentence<<endl;
     
    char paragraph[1000];
    cin.getline(paragraph,1000,'.'); // here stopping parameter is changed to '.'
    cout<<paragraph<<endl;
}