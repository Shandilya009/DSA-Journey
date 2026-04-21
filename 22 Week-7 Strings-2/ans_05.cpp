#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    string str="proud to be pwians";
    stringstream ss(str);
    vector<string>v;
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];


}
