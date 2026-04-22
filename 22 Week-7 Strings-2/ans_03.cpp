// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
string  str = "abjkoiaue";
int len=0;
int ans=0;
for(int i=0;i<str.length();i++){
    if(str[i]=='a' ||str[i]=='e'||str[i]=='i'|| str[i]=='o'||str[i]=='u'){
        len++;
        ans+=len;
    }
    else{
        len=0;
    }
    
}
cout<<ans;
    
}
