#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "rutik";
    // find length 
    int len = s.size();
    s[len - 1] = 'z';
    cout << s[len -1] << endl;
    return 0;
}