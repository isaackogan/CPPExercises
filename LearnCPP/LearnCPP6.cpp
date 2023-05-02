
#include <iostream>
#include <string>
#include <vector>
using std::string;



/*
 * POINTERS
 * Takeaway: Pointers are REFERENCES to memory addresses
 * https://www.youtube.com/watch?v=2ybLD6_2gKM
 */
void main6()
{

    /*
     * (&) -> Get memory address (e.g. &var) will return 0x1231
     * (type*) -> Define a pointer
     * (*var) -> Dereference a pointer
     *
     * Dereferencing: Take the value given a mem address in the form of a pointer
     * 
     */

    // Pointer
    int var = 4;   // <--- Storing int at 0x1231
    int* p_var = &var;  // <--- Storing 0x1231

    // Dereference
    int y = *p_var;  // <--- Storing int at new mem address

    // Using dereferencing, we can change the value of var via p_var
    *p_var = 3;
    
    // Heap Variables
    char* buffer = new char[8];
    memset(buffer, 0, 8); // Filled with 8 elements of 0
    delete[] buffer; // DELETE IT, because Heap is stored FOREVER

    // Multipointer
    int** ptr = &p_var; // A pointer to a POINTER to an int
}


// All 3 of these are equivalent

void foo(int* x); // Reference to an int array
void foo1(int x[]); // NOT safe for sizeof (references destroy array size). Use std::array to preserve this!
void foo2(int x[100]); // Safe for sizeof, because we state it's a size of 100.
void foo3 (int (&x)[100]); // Means take the REFERENCE passed, which is an int[100]
