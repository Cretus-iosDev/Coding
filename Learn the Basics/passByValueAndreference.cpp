#include<bits/stdc++.h>
using namespace std;



/*
//pass by value
void doSomething(int num) {
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;

}
int main() {
    int num  = 10;
    doSomething(num);
    cout << num << endl;

    return 0;
}
//pass by value
void doSomething(string s) {
s[0] = 't';
cout << s << endl;

}
int main() {
    string s = "rutik";
    doSomething(s);
    cout << s << endl;

    return 0;
}
*/

/*
// pass by reference
void doSomething(string &s) {
s[0] = 't';
cout << s << endl;

}
int main() {
    string s = "rutik";
    doSomething(s);
    cout << s << endl;

    return 0;
}
*/


// array example for pass by reference
void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}
int main() {
    int n = 5;
    int arr[n];
    for(int i=0; i<n; i=i+1){
        cin>> arr[i];
    }

    doSomething(arr, n);

    cout << "value inside int main: " << arr[0] << endl; 

    return 0;
}