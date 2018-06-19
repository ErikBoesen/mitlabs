#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;

vector<uint64_t> prime_factors(int x) {
    vector<uint64_t> factors;

    for (int n = 2; n <= sqrt(x); n++) {
        while (x % n == 0) {
            factors.push_back(n);
            x /= n;
        }
    }
    if (x > 2) factors.push_back(x);
    return factors;
}

string vrepr(vector<uint64_t> v) {
    stringstream ss;
    ss << v[0];
    for (int i = 1; i < v.size(); i++)
        ss << ':' << v[i];
    return ss.str();
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        cerr << "Invalid number of arguments!" << endl;
        exit(1);
    }
    uint64_t input = atoi(argv[1]);
    cout << vrepr(prime_factors(input)) << endl;
}
