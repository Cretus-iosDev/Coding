#include<bits/stdc++.h>
using namespace std;

void pattern11(int n) {
    int start = 1;
    for(int i=0; i<n; i++) {
         // if the row index is even then 1 is printed first
          // in that row.
        if(i%2 == 0) start =1;

       // if odd, then the first 0 will be printed in that row.
        else start = 0;

        for(int j=0; j<=i; j++) {
            cout << start;
            start = 1-start;
        }
        cout << endl;

    }
}

int main() {
    int n;
    cin >> n;
    pattern11(n);

}

/*
5
1
01
101
0101
10101
*/