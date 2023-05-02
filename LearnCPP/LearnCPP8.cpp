#include <iostream>

void foo(int* x) // Pointer to 1st item in array
{
    std::cout << x[1];
}

void foo1(int x[]) // Also a pointer
{
    std::cout << x[1];
}

void foo2(int x[3]) // Pointer but it keeps sizeof
{
    std::cout << x[1];
}

void foo3 (int (&x)[3]) // An array of memory addresses and keeps sizeof
{
    std::cout << x[1];
}

/*
 
    Using raw arrays introduces dangerous issues:
    
    void foo(int arr[10]) { arr[9] = 0; }

    void bar() {
        int data[] = {1, 2};
        foo(data);
    }
    
 */

void main8(int argc, char* argv[])
{
    int num[3] = {1, 2, 3};
    
    // Remember that arrays DECAY to the pointer to the FIRST element when passed to an array
    // This is why all methods are equivalent (ish)
    // The way arrays work is the next item is stored NEXT to it in memory
    // So if we have the reference to the first item in the array, we can get the next "block"
    // This next block is the next item in the array
    // That's why knowing sizeof is important, so we know when the array ends
    foo(num);
    foo1(num);
    foo2(num);
    foo3(num);

    std::string foods1[5] = {"apple", "banana", "chips", "fish", "couscous"};

    // Why does this work?
    // It's because these strings are stored as POINTERS to strings in the array
    // Pointers are fixed length (duh), so this works
    std::cout << (sizeof(foods1) / sizeof(foods1[0]));
    std::cout << std::size(foods1);

    
}
