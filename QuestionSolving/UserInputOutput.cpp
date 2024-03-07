/*
Problem statement

Write a program that takes a character as input and prints
1, 0, or -1 according to the following rules.

1, if the character is an uppercase alphabet (A - Z).
0, if the character is a lowercase alphabet (a - z).
-1, if the character is not an alphabet.

Example:
Input: The character is 'a'.
Output: 0
Explanation: The input character is lowercase, so our answer is 0.
*/

/*
Logic - 
1. Start
2. Accept a character as input and store it in a variable, let's call it 'ch'.
3. If 'ch' is between 'A' and 'Z' (inclusive):
    4. Print 1
5. Else if 'ch' is between 'a' and 'z' (inclusive):
    6. Print 0
7. Else:
    8. Print -1
9. End

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cin >> ch;


    if(ch >= 'A' && ch <= 'Z'){
        cout << "1" << endl;
    }
    else if(ch >= 'a' && ch <= 'z' ){
        cout << "0" << endl;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}