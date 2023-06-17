#include <iostream>
using namespace std;

void swap(int* a, int* b){
    int* temp = a;
    a = b;
    b = temp;
}

int main() {


    // Make a for loop that uses the pointer num and prints all numbers in the array

    int a = 10, b = 20;


    swap(a,b);

    cout << "a = " << a << ", b = " << b << endl;
    
    /*

    int a = 10;
    int* b = &a;
    int** c = &b;

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << c << endl;
    cout << &c << endl;

    cout << *b << endl;
    cout << **c << endl;

    */

    /*

    int a = 10;
    int* b = &a;

    cout << a << endl;  // prints 10
    cout << &a << endl; // prints address of a
    cout << b << endl;   // prints address of a
    cout << *b << endl;  // prints 10

    */

    return 0;
}