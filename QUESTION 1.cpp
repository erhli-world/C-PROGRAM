// A PROGRAM THAT TAKES TWO NUMBERS AS INPUT AND PRINTS THEIR SUM,DIFFERENCE,PRODUCT AND QUOTIENT
#include <iostream>
using namespace std;

int main() {
    int num1,num2;

cout <<"Enter the the first number: ";
cin >> num1;
cout <<"Enter the the second number: ";
cin >> num2;

cout << "Sum: " << num1 + num2 << endl;
cout << "Difference: " << num1 - num2 << endl;
cout << "Product: " << num1 * num2 << endl;
cout << "Quotient: " << num1 / num2 << endl;

    return 0;
}