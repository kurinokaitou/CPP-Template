#include <iostream>
#include <add.hpp>

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "a + b = " << add(a, b) << std::endl;
    return 0;
}