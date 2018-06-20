#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

string prime_factors(int x) {
    stringstream ss;

    // TODO: This is a hack and is bad
    bool first = true;
    for (int n = 2; n <= sqrt(x); n++) {
        while (x % n == 0) {
            if (first) first = false;
            else ss << ':';
            ss << n;
            x /= n;
        }
    }
    if (x > 2) ss << ':' << x;
    return ss.str();
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Invalid number of arguments!" << endl;
        exit(1);
    }
    uint64_t input = atoi(argv[1]);
    cout << prime_factors(input) << endl;
}
