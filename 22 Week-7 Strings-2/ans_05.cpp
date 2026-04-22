#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s, temp, maxWord = "";
    getline(cin, s);

    stringstream ss(s);

    while(ss >> temp){
        if(temp > maxWord){
            maxWord = temp;
        }
    }

    cout << maxWord;
}
