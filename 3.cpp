#include<bits/stdc++.h>
using namespace std;

void pattern3(int n) {
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern3(n);

}

/*
5
1 
1 2 
1 2 3 
1 2 3 4 
*/