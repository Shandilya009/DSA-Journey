#include<iostream>
using namespace std;
int print1(int a){
    if(a==0) return 0;
    print1(a-1);
    cout<<a;
    return 0;
}
int print(int a){
    if(a==0) return 0;
    cout<<a;
    return print(a-1);
}
int main(){
    int a;
    cin>>a;
    print1(a);
    print(a);
}


#include <iostream>
using namespace std;

void sequence(int n, int current = 1) {
    if (current > n) return;   // Base case

    cout << current << " ";    // Increasing part
    sequence(n, current + 1);  // Recursive call
    if (current != n)
        cout << current << " "; // Decreasing part
}

int main() {
    int n;
    cin >> n;

    sequence(n);

    return 0;
}
