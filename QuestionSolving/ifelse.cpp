/*
Programming languages have some conditional / decision-making statements that 
execute when some specific condition is fulfilled.

If-else is one of the ways to implement them.

You are given two numbers 'a' and 'b'.

Compare the numbers and print the relation.

Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater 
than ‘b’, or equal to ‘b’ respectively.

Example :
Input: ‘a’ = 5 and ‘b’ = 3
Output: greater
Explanation: Since ‘a’ (= 5) is greater than ‘b’ (= 3), we are printing “greater”.


*/

/*
Logic - 
1. Start
2. Accept two numbers 'a' and 'b' as input.
3. If 'a' is smaller than 'b':
    4. Print "smaller"
5. Else if 'a' is greater than 'b':
    6. Print "greater"
7. Else:
    8. Print "equal"
9. End

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a<b){
        cout << "smaller" << endl;
    }
    else if(a>b) {
        cout << "greater" << endl;
    }
    else {
        cout <<  "equal" << endl;
    }
    return 0;

}