#include <iostream>

int main(int argc, char *argv[]) {
    for (short i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }
}
