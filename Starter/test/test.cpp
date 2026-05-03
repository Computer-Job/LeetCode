#include <iostream>
#include <vector>
#include <cassert>

int returnFive () {
    return 5;
}

#ifndef NDEBUG
void debugTest() {
    assert(returnFive() == 5);
}
#endif

int main () {
    std::cout << "The byte size of an int: " << sizeof(int) << "\n";
    std::cout << "The byte size of an char: " << sizeof(char) << "\n";
    std::cout << "The byte size of an double: " << sizeof(double) << "\n";
    std::cout << "The byte size of an float: " << sizeof(float) << "\n";
    std::cout << "The byte size of a size_t: " << sizeof(std::size_t) << "\n";
    std::cout << "The byte size of a long: " << sizeof(long) << "\n";

    std::vector<int> values {};

    std::cout << "The byte size of the vector: " << sizeof(values) << "\n";

    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);
    values.push_back(5);

    std::cout << "The byte size of the vector now is: " << sizeof(values) << "\n";

    for (const int& i : values) {
        std::cout << i << "\n";
    }

    for (std::size_t i = 0; i < values.size(); i ++) {
        std::cout << values[i] << "\n";
    }

    int five {returnFive()};

    std::cout << "The value of the int 'five' is: " << five << "\n";
    std::cout << "The byte size of the int 'five' is: " << sizeof(five) << "\n";

    int input {};
    
    std::cout << "\n\nPlease type an integer: " << std::flush;
    std::cin >> input;
    std::cout << "Thank you, your input is: " << input << "\n";

    #ifndef NDEBUG
        debugTest();
    #endif

    return 0;
}
