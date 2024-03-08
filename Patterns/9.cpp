#include<bits/stdc++.h>
using namespace std;

void upperSide(int n) {
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //starts
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}

void BottomSide(int n) {
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
    upperSide(n);
    BottomSide(n);

}

/*
5
    *    
   ***   
  *****  
 ******* 
*********
********* 
 ******* 
  ***** 
   *** 
    * 
*/