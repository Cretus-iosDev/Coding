#include<bits/stdc++.h>
using namespace std;

// create function
void pattern1(int n){
    // Outer Loop
    for(int i=0; i<n; i++) {
        // Inner loop
        for(int j=0; j<n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern1(n);

}

/*
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/