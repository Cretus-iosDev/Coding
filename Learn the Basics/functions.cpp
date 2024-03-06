#include<bits/stdc++.h>
using namespace std;

/*
Information about functions-
1. set of code which performs something for you
2. use to modularise code
3. use to incerease readability
4. used to use same code multiple times
types-
1. void -> which does not return anything
2. return
3. parameterised
4. non-parameterised
*/

/*
function
void printName(string name) {
    cout << "Hello " << name << endl;
}

int main() {
    string name;
    cin >> name;
    printName(name);
    return 0;
}
*/

/*
Q.1] take two number and print its sum

// function
void sum(int num1, int num2) {
    int num3 = num1 + num2;
    cout << num3 << endl;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    sum(num1, num2);
    return 0;
}

*/

int maxx(int num1, int num2) {
    if (num1 >= num2) return num1;
    else return num2;
}

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    int minimum = maxx(num1, num2);
    cout<< minimum;
}

