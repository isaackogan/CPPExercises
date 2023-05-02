#include <array>
#include <deque>
#include <iostream>

/*
 * Deques are O(1) at the ends, O(n) on the inside
 * Better than vectors if you are touching the front and ends
 *
 */
void main10()
{
    std::deque<std::string> foods = {"apple", "banana"};

    // Adds the ability to push FRONT which vector cannot
    foods.push_front("lettuce");
    foods.push_back("tomato");
    
}

