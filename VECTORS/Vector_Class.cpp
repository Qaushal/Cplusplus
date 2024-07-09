#include<bits/stdc++.h>
using namespace std;

class Vector{
   
    public:

    int csize = 0;
    int msize = 1;
    *arr = new int[msize];

     void pushback(int d){
        if(csize==msize){
            int *oldarr = arr;
            arr = new int[2*msize];
            msize = 2*msize;
            for(int i=0;i<csize;i++){
                arr[i] = oldarr[i];
            }
            delete [] oldarr;
        }
        arr[csize] = d;
        csize++;
    }
    void popback(){
        csize--;
    }


};

int main(){

Vector v;
v.pushback(100);
v.pushback(200);
v.pushback(500);
v.pushback(600);
v.pushback(208);
v.popback();


}
