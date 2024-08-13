#include "create presets.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> presets = createPresets();

    for (const auto &preset : presets) {
        std::cout << preset << std::endl;
    }

    return 0;
}