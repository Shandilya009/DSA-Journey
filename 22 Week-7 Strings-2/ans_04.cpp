// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
string s,t;
getline(cin,s);
getline(cin,t);
vector<int>v(26);
for( char k:s){
    v[k-'a']++;
}
for( char k:t){
    v[k-'a']--;
}
for(int k:v){
    if(k!=0){
        return false;
    }
}return true;

}
