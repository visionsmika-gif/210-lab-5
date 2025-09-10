// COMSC-210 | Lab 5 | Mika Aquino
// IDE used: Visual Studio 2022

#include <iostream>
using namespace std;

int swap(int*, int*); // This function has been modified to take two pointers instead of two references.

int main() {
    // Values pointed to by xPtr and yPtr
    int x = 5, y = 10;

    // Pointers to x and y
    int* xPtr = &x;
    int* yPtr = &y;

    // xPtr and yPtr are dereferenced to print the values they point to rather than their addresses.
    cout << "x = " << *xPtr << "  | y = " << *yPtr << endl; 
    cout << "Swapping...\n";
    int sum = swap(xPtr, yPtr);
    cout << "x = " << *xPtr << " | y = " << *yPtr << endl;
    cout << "sum = " << sum << endl;
    return 0;
}

// Function swap() takes two int pointers as arguments and swaps the values they point to.
// swap() also returns an integer for the sum of the values pointed to by the pointers.
int swap(int* aPtr, int* bPtr) {
    int temp = *aPtr; // temp is assigned with the value pointed to by aPtr.
    *aPtr = *bPtr; // aPtr now points to the value bPtr points to.
    *bPtr = temp; // bPtr now points to temp (which is the value that was pointed to by aPtr).
    return *aPtr + *bPtr;
}