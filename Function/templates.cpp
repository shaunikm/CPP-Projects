#include <iostream>
template <typename T>

T max (T x, T y) {
    return (x > y) ? x : y;
}

int main() {
    std::cout << max(543.543534, 5.43533453) << std::endl;

    return 0;
}