// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string str = "11271";
    int x= stoi(str);
    int nn=x;
    vector<int>v;
    while(nn>0){
        int d=nn%10;
        v.push_back(d);
        nn/=10;
    }
    int max=v[0];
   for(int i=0;i<v.size();i++){
       if(max<v[i]){
           max=v[i];
       }
   }
       int smax=v[0];
   for(int i=0;i<v.size();i++){
       if(smax<v[i] && v[i]<max){
           smax=v[i];
       }
   }
    cout<<smax;
    return 0;
}
