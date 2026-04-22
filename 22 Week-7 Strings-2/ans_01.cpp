
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
    string str = "PWSkills";
    string s1=str;
    reverse(str.begin(),str.end());
    cout<<s1+str;


    return 0;
}
