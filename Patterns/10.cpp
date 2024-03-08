#include<bits/stdc++.h>
using namespace std;

void pattern10(int n) {
    for(int i=0; i<=2*n-1; i++){
        // stars would be equal to the row no. uptill first half
        int stars = i;
        // for the second half of the rotated triangle.
        if(i>n) stars = 2*n-i;

        for(int j=1; j<=stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern10(n);

}