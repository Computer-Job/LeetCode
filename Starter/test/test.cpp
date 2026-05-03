#include <iostream>
#include <vector>

#ifndef NDEBUG
void debugTest() {
    std::cout << "response" << "\n";
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

    #ifndef NDEBUG
        debugTest();
    #endif

    return 0;
}
