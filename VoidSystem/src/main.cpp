#include "Alpha.h"
#include "Beta.h"
#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "VoidSystem is running...\n";

    std::cout << "Invoked with arguments:\n";
    for (int i = 0; i < argc; ++i) {
        std::cout << "argv[" << i << "]" << "=" << argv[i] << "\n";
    }

    std::cout << "Starting Alpha/Beta check...\n";

    Alpha a;
    Beta b;

    for (int i = 0; i < 5; ++i) {
        std::cout << "alpha=" << a.getAlphaValue() << " beta=" << b.getBetaValue() << "\n";
    }

    std::cout << "Exiting...\n";

    return 0;
}
