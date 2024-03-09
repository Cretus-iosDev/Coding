#include<bits/stdc++.h>
using namespace std;

void pattern19(int n){
    //upper side

    //initial space
    int iniS = 0;
    for(int i=0; i<n; i++){
        // stars in row
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        //space in row
        for(int j=0;j<iniS; j++){
            cout << " ";
        }
        //stars in row
        for(int j=1;j<=n-i;j++){
            cout << "*";
        }
        //spaces increase by 2 every time we hit a new row
        iniS +=2;
        cout<<endl;
    }


    //lower side
    iniS = 2*n-2;
    for(int i=1; i<=n; i++){
        //stars in row
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //space in row
        for(int j=0; j<iniS; j++){
            cout<<" ";
        }
        //stars in row
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
       // spaces decrease by 2 every time we hit a new row
       iniS -=2;
       cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern19(n);
}

/*
5
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/