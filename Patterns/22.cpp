#include<bits/stdc++.h>
using namespace std;

void pattern22(int n){
    for(int i=0; i<n; i++){
         // inner loop for no. of columns.
        for(int j=0;j<2*n-1;j++){
            
            // Initialising the top, down, left and right indices of a cell.
            int top = i;
            int bottom = j;
            int right = (2*n - 2) - j;
            int left = (2*n - 2) - i;
            
            // Min of 4 directions and then we subtract from n
            // because previously we would get a pattern whose border
            // has 0's, but we want with border N's and then decreasing inside.
            cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern22(n);
}

/*
5
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
*/