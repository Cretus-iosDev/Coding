#include<bits/stdc++.h>
using namespace std;

void pattern8(int n) {
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout << " ";
        }
        //starts
        for(int j=0; j<2*n-(2*i+1); j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern8(n);

}

/*
5
********* 
 ******* 
  ***** 
   *** 
    * 
*/