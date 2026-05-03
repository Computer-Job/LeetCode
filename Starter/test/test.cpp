#include <iostream>
#include <vector>

int main () {
    std::cout << "The byte size of an int: " << sizeof(int) << "\n";
    std::cout << "The byte size of an char: " << sizeof(char) << "\n";
    std::cout << "The byte size of an double: " << sizeof(double) << "\n";
    std::cout << "The byte size of an float: " << sizeof(float) << "\n";

    std::vector<int> values;

    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    values.push_back(4);
    values.push_back(5);

    std::cout << "The byte size of the vector: " << sizeof(values) << "\n";

    // for (int i = 0; i < sizeof(values); i ++) {
    //     std::cout << values. << "\n";
    // }

    return 0;
}
