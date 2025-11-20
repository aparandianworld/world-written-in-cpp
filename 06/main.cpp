#include <iostream>
#include <string>

int main() {

    // (old) uncoped enum
    enum Color {
        Red, // 0
        Green, // 1
        Yellow // 2
    };

    enum Fruit {
        Apple, // 0
        Pineapple, // 1
        Banana // 2
    };

    Color c = Red;
    Fruit f = Pineapple;

    std::cout << "c: " << c << std::endl;
    std::cout << "f: " << f << std::endl;

    // (modern) scoped enum

    enum class ColorModern {
        Red,
        Green,
        Yellow
    };

    enum class FruitModern {
        Apple,
        Pineapple,
        Banana
    };

    ColorModern cModern = ColorModern::Red;
    FruitModern fModern = FruitModern::Pineapple;

    // explicit cast to int required (safer)
    std::cout << "cModern Red: " << static_cast<int>(cModern) << std::endl;
    std::cout << "fModern Pineapple: " << static_cast<int>(fModern) << std::endl;


    std::cout << std::endl << std::endl;
    return 0;
}