#include<bits/stdc++.h>
using namespace std;

int caltotalmarks(vector<int> m){
    return accumulate(m.begin(),m.end(),0);
}

bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2){
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return caltotalmarks(m1) > caltotalmarks(m2);
}

int main(){
    vector<pair<string,vector<int>>> student_marks = {
        {"John", {90, 80, 70} },
        {"Jane", {80, 90, 80} },
        {"Bob", {70, 60, 70} },
        {"Alice", {90, 90, 90} },
    };

    sort(student_marks.begin(),student_marks.end(),compare);
    for (auto& student : student_marks) {
        cout << student.first << " "<<caltotalmarks(student.second)<<endl;
}
}
    