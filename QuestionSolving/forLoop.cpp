/*
The n-th term of Fibonacci series F(n), where F(n) is a function, 
is calculated using the following formula -

    F(n) = F(n - 1) + F(n - 2), 
    Where, F(1) = 1, F(2) = 1


Provided 'n' you have to find out the n-th Fibonacci Number. 
Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like 
if else and return what's expected.

"Indexing is start from 1"

*/

/* 
Logic - 
1. Start
2. Accept the value of 'n' as input.
3. If 'n' equals 1 or 2:
    4. Return 1
5. Else:
    6. Initialize variables 'a' and 'b' to 1 (to represent F(1) and F(2)).
    7. Initialize a variable 'c'.
    8. Loop from 3 to 'n':
        9. Set 'c' to the sum of 'a' and 'b' (F(n) = F(n - 1) + F(n - 2)).
        10. Update 'a' to the value of 'b'.
        11. Update 'b' to the value of 'c'.
    12. Return the value of 'b' (which represents F(n)).
13. End

*/

#include<bits/stdc++.h>
using namespace std;

// create a function
int fibonnaci(int n) {
    if(n == 1 || n == 2){
        return 1;
    } else {
        int a = 1,  b = 1, c;
        for(int i=3; i<=n; i=i+1) {
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
}

int main() {
    int n;
    cin >> n;

    cout << "the " << n << "-th fibonnaci number is- " << fibonnaci(n) << endl;

}