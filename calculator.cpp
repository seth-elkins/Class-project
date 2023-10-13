
//Seth Elkins 
//problem: make a claculator


#include <iostream>


using namespace std;

int main() {

char op;

float num1, num2; // assigning floats

cout << "Enter two numbers: "; // getting numbers from users

cin >> num1 >> num2; // assigning the numbers to the floats

cout << "Enter operator either + or - or * or /: "; // getting operation from user

cin >> op;

double result = 0;

switch(op)

{

case '+':

result = num1+num2;

break;

case '-':

result = num1-num2;

break;

case '*':

result = num1*num2;

break;

case '/':

if (num2 == 0)
{

cout << "error";

return 0;

}

result = num1/num2;

break;

default:

// all of these cases are to assign the operations 

// If the operator is other than +, -, * or /, error message is shown

cout << "Error! operator is not correct";

break;

}

printf("%.2lf %c %.2lf = %.2lf", num1, op, num2, result);

// printing the product of the function
return 0;

}