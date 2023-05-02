#include <array>
#include <iostream>


template<typename T>
void print(T collection, int size)
{
    for (int i=0; i < size; i++)
    {
        std::cout << collection[i] << std::endl;
    }
}

template<typename T>
void print(T collection)
{
    print(collection, collection.size());
}

void main9()
{
    std::string foods1[] = {"a", "b", "c"};
    std::array<std::string, 3> foods2 = {"a", "b", "c"}; // Remember to include <array> definition
    
    print(foods1, std::size(foods1));
    
    print(foods2); 
    // print(foods1) would fail, it does not define size()

}
