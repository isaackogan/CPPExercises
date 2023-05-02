#include <array>
#include <deque>
#include <fstream>
#include <iostream>

class Food
{
    public:
        std::string name;
        double cost;

        Food(const std::string &name, const double &cost)
        {
            this->name=name;
            this->cost=cost;
            this->hitme();
        }

        void print_food() const // const specifies the function reads but does NOT modify values
        {
            std::cout << name << " " << cost << std::endl;
        }

        template<int T>
        static void print_foods(std::array<Food, T> &foods)
        {
            for (Food food : foods)
            {
                food.print_food();
            }
        }

    private:
        void hitme()
        {
            std::cout << "Hit!\n";
        }
};

void main()
{
    std::array<Food, 2> foods = {
        Food("Cheese", 20.23),
        Food("Banana", 13.23)
    };

    Food::print_foods(foods);

}

