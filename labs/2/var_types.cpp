#include <iostream>
#define MIN_ARG 2

int main(int argc, char *argv[]) {
    if (argc < MIN_ARG) {
        std::cerr << "Not enough arguments (" << MIN_ARG << " required)" << std::endl;
        return 1;
    }
    int a = atoi(argv[1]),
        b = atoi(argv[2]);

    std::cout << (a + b) << std::endl;
    return 0;
}
