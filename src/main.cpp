#include <iostream>

#ifndef APP_VERSION
#define APP_VERSION "dev"
#endif

#ifndef GIT_HASH
#define GIT_HASH "unknown"
#endif

#ifndef BUILD_OS
#define BUILD_OS "unknown"
#endif

int main() {
    std::cout << "Hello CI!\n";
    std::cout << "Version: " << APP_VERSION << "\n";
    std::cout << "Commit: " << GIT_HASH << "\n";
    std::cout << "Built on: " << BUILD_OS << "\n";

    return 0;
}