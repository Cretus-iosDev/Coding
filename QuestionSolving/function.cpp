/*
Functions - Take this coding challenge to test your coding skills to
-define a function
-pass arguments by value to a function
-pass arguments by reference to a function

This coding challenge is organized in the following way:
First line of input reads an integer to select the coding challenge:

-Reading value '1' selects the coding-challenge 1
( tests the ability to define a function and pass arguments by value.)

-Reading value '2' selects the coding challenge 2
(tests the ability to pass arguments by reference to a function)

Coding Challenge -1
Define a function named "Maximum" that accepts two integers 
(pass by value) as arguments and returns the greatest of the two arguments.


Coding Challenge -2
Define a function named "Swap" that accepts two integers 
(pass by reference) as arguments and swaps their value
*/

/*
Logic - 
1. Start
2. Accept an integer 'challenge' as input to select the coding challenge.
3. If 'challenge' equals 1:
    4. Call the function Maximum to find the greatest of two integers (pass by value).
    5. Function Maximum:
        6. Accept two integers 'a' and 'b' as arguments.
        7. If 'a' is greater than 'b', return 'a'.
        8. Else, return 'b'.
4. Else if 'challenge' equals 2:
    9. Call the function Swap to swap the values of two integers (pass by reference).
    10. Function Swap:
        11. Accept two integers 'a' and 'b' as reference arguments.
        12. Initialize a temporary variable 'temp' to store the value of 'a'.
        13. Assign 'b' to 'a'.
        14. Assign 'temp' to 'b'.
5. End

*/

#include<bits/stdc++.h>
using namespace std;

// find max of two interger
int Maximum(int a , int b) {
    return(a>b) ? a:b;
}

//swap value of two integer
void Swap(int &a, int &b) {
    int temp = a;
    a=b;
    b=temp;
}

int main() {
    int challenge;
    cin >> challenge;

    if(challenge == 1) {
        int num1, num2;
        cin >> num1 >> num2;
        cout << "max of " << num1 << " and " << num2 << " is-  " << Maximum(num1, num2) << endl;
    }
    else if(challenge == 2) {
        int num1, num2;
        cin >> num1 >> num2;
        Swap(num1, num2);
        cout << "after swapping, num1= " << num1 << " and num2= " << num2 << endl; 
    }
    else {
        cout << "invalid choice" << endl;
    }

    return 0;
}