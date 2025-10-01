#include <iostream>
using namespace std;
int main () {
    int num1;
    int num2;
    char op;

    cout<< "Enter first number = ";
    cin>>num1;
    
    cout<< "Enter a operation ( + , - , * , /) = ";
    cin>>op;

    cout<< "Enter second number = ";
    cin>>num2;

    if ( op =='+') {

      cout<< "Result = " << num1 + num2;
    }
    else if ( op =='-') {
        cout<< "Result = " << num1 - num2;

    }
    else if ( op == '*') {
        cout<< "Result = " << num1 * num2;
    }
    else if ( op == '/') {
        if (num2 != 0)
        cout<< "Result = " << (float) num1 / num2;
        else 
        cout<< "Error: division by zero !";

    }
    else {
     cout<< "Invalid operator! ";
    }



    return 0;
}