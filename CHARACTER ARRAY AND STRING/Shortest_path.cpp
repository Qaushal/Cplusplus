#include<bits/stdc++.h>
using namespace std;
 
 int main(){
    char route[1000];
    cout<<"ENTER THE ROUTE : ";
    cin.getline(route,1000);
    int x=0;
    int y=0;
    for(int i=0;route[i]!='\0';i++){
        switch(route[i]){
            case 'N':
            y++;
            break;
            case 'S':
            y--;
            break;
            case 'E':
            x++;
            break;
            case 'W':
            x--;
            break;
            default:
            continue;
            }

        }
        if(x>=0 && y>=0){
        while(x--){
            cout<<'E';
        }
        while(y--){
            cout<<'N';
        }
        if(x<=0 && y>=0){
            while(x++){
                cout<<'W';
            }
            while(y--){
                cout<<'N';
            }
        }
        if(x<=0 && y<=0){
            while(x++){
                cout<<'W';
            }
            while(y++){
                cout<<'S';
            }
        }if(x>=0 && y<=0){
            while(x++){
                cout<<'E';
            }
            while(y++){
                cout<<'S';
            }
        }
    }
 }
 