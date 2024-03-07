/*
Data type refers to the type of value a variable has and the way the computer interprets it.


Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

Integer: 4 bytes
Long: 8 bytes
Float: 4 bytes
Double: 8 bytes
Character: 1 byte


You’re given a data type. Print its size in bytes.
*/

/*
Logic - 
1. Start
2. Accept the data type as input, let's call it 'data_type'.
3. If 'data_type' is "Integer":
    4. Print "4 bytes"
5. Else if 'data_type' is "Long":
    6. Print "8 bytes"
7. Else if 'data_type' is "Float":
    8. Print "4 bytes"
9. Else if 'data_type' is "Double":
    10. Print "8 bytes"
11. Else if 'data_type' is "Character":
    12. Print "1 byte"
13. End

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    string data_type;
    cin >> data_type;

    if(data_type == "Integer"){
        cout << "4 bytes" << endl;
    }
    else if(data_type == "Long") {
        cout << "8 bytes" << endl;
    }
    else if(data_type == "Float") {
        cout << "4 bytes" << endl;
    }
    else if(data_type == "Doubles") {
        cout << "8 bytes" << endl;
    }
    else if(data_type == "Character") {
        cout << "1 bytes" << endl;
    }
    else {
        cout << "unknown data" << endl;
    }
    

    return 0;
}