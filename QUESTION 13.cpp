// A CODE TO SWAP THE VALUES OF TWO VARIABLES

#include <iostream>
using namespace std;

int main(){
    int num1,num2;

    cout << " Enter first number: ";
    cin>> num1;

    cout << " Enter second number: ";
    cin>> num2;

    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;

    cout<< " NUMBERS SWAPPED: "<<endl;
    cout <<" num1= "<<num1<< endl;
    cout <<"num2= "<<num2<<endl;

    return 0;


}
