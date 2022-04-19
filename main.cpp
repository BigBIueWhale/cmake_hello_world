#include <iostream>

int main() {
    for (int i = 0; i < 100; ++i) {
        std::cout << " " << i << " ";
    }
    std::cout << "\nPress any key to continue...\n";
    std::cout.flush();
    std::cin.get();
    return 0;
}
