#include <iostream>
using namespace std;
int rev(int n,int d){
    if(n==0) return d;
    return rev(n/10, d*10+n%10);
}
int main() {
    rev(878,0)
    return 0;
}
