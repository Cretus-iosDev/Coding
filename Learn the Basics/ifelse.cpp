#include<bits/stdc++.h>
using namespace std;
/*
Q.1] write a program that take  an input of age and print if you are adult or not.
*/

/*
Answer-1
int main() {

    int age;
    cin >> age;
    if(age >= 18) {
        cout << "You are an adult" << endl;
    }else {
        cout << "You are a child" << endl;
    }

    return 0;
}

*/

/*
Q.2]  A school has following rules for grading system.
a. Below 25  - f
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter the marks and print the corresponding grade.
*/

/*
Answer -2

int main() {
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F" << endl;
    } 
    else if (marks <= 44) {
        cout << "E" << endl;
    }
    else if (marks <= 49) {
        cout << "D" << endl;
    }
    else if (marks <= 59) {
        cout << "C" << endl;
    }
    else if (marks <= 79) {
        cout << "B" << endl;
    }
    else if (marks <= 100) {
        cout << "A" << endl;
    }


    return 0;
}

*/

/*
Q.3]  take the age from the user and then decide accordingly
1. if age < 18
    print- not eligible for job
2. if age >=18
    print- eligible for job
3. if age >= 55 and age <=57
    print- eligible for job, but retirement soon.
4. if age > 57
    print-  retirement time
*/

int main() {
    int age;
    cin >> age;

    if(age <= 18) {
        cout << "not eligible for job" << endl;

    }else if(age <=57) {
        cout << "eligible for job" << endl;
    }
    else {
        cout << "retirement time" << endl;
    }
    return 0;
}