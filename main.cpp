#include <iostream>

int main() {
    auto lang2 = "C++";
    std::cout << "Hello and welcome to " << lang2 << "!\n";

    for (int i = 1; i <= 5; i++) {
        std::cout << "i = " << i << std::endl;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "Hello and welcome to " << lang2 << "!\n";

    return 0;
}