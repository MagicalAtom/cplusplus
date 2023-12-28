    // %d or %i: For printing integers in decimal format.
    // %u: For printing unsigned integers in decimal format.
    // %f: For printing floating-point numbers, such as float and double.
    // %lf: For printing double precision floating-point numbers.
    // %e or %E: For printing numbers in scientific notation format.
    // %g or %G: For printing floating-point numbers in either decimal or scientific notation, automatically chosen based on the value’s magnitude.
    // %c: For printing a single character.
    // %s: For printing a string of characters.
    // %p: For printing a memory address (pointer).
    // %x or %X: For printing an integer in hexadecimal format.
    // %%: For printing the percent sign (%).


#include <iostream>
using namespace std;


int main(){
    int age = 22;
    string name = "Alex";

    printf("Hey my name is %s and %d years old ,",name.c_str(),age);
    // Correct usage: Pass the C-style string representation of the std::string object to printf
}
