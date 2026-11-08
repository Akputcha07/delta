#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "usage: delta <itch-file>\n";
        return 1;
    }
    std::cout << "Delta starting, reading " << argv[1] << "\n";
    return 0;
}