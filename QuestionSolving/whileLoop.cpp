/*
Write a program to input an integer 'n' and print the sum of all its even 
digits and the sum of all its odd digits separately.

Digits mean numbers, not places! That is, if the given integer is "132456",
even digits are 2, 4, and 6, and odd digits are 1, 3, and 5.

Constraints- 
0<= 'n' <=10000
*/

/*
Logic - 
1. Start
2. Accept an integer 'n' as input.
3. Initialize two variables, 'sum_even' and 'sum_odd', to 0.
4. While 'n' is greater than 0:
    5. Extract the rightmost digit of 'n' and store it in a variable, let's call it 'digit'.
    6. If 'digit' is even:
        7. Add 'digit' to 'sum_even'.
    8. Else:
        9. Add 'digit' to 'sum_odd'.
    10. Update 'n' by removing the rightmost digit.
11. Print the sum of even digits as "Sum of even digits: sum_even".
12. Print the sum of odd digits as "Sum of odd digits: sum_odd".
13. End

*/

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, sum_even = 0, sum_odd = 0, digit;
    cin >> n;

    while(n>0){
       // Extract the rightmost digit
        digit = n % 10;

        if (digit % 2 == 0){
            sum_even += digit;
        } else{
            sum_odd += digit;
        }

        //  removing the rightmost digit.
        n /= 10;
    }

    cout << "sum of even digits - " << sum_even << endl;
    cout << "sum of odd digits - " << sum_odd << endl;

    return 0;
}