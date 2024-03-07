/*
Switch-case is one of the ways to implement them.

In a menu-driven program, the user is given a set of choices of things to do 
(the menu) and then is asked to select a menu item.

There are 2 choices in the menu:

Choice 1 is to find the area of a circle having radius 'r'.

Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.

You are given the choice 'ch' and an array 'a'.

If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, 
‘l’ and ‘b’.

Consider the choice and print the appropriate area.
*/

/*
Logic - 
1. Start
2. Accept the choice 'ch' and an array 'a' as input.
3. Switch on 'ch':
    4. Case 1:
        5. Extract the radius 'r' from array 'a'.
        6. Calculate the area of the circle using the formula: area = π * r * r.
        7. Print the area of the circle.
    8. Case 2:
        9. Extract the length 'l' and width 'b' from array 'a'.
        10. Calculate the area of the rectangle using the formula: area = l * b.
        11. Print the area of the rectangle.
    12. Default:
        13. Print "Invalid choice".
14. End

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int ch;
    double a[2];
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "enter the radius of circle- " << endl;
        cin >> a[0];
        cout << " area of circle is- " << 3.14 * a[0] * a[0] << endl;
        break;
    case 2:
        cout << "enter the length and width of the rectangle- " << endl;
        cin >> a[0] >> a[1];
        cout << "area of rectangle is- " << a[0] * a[1] << endl;
        break;
    default:
        cout << "invalid choice" << endl;
    }
    return 0;
}