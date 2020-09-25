#include <cstdlib>
#include <iostream>

#include "step1_config.h"

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Step1_VERSION_MAJOR << "."
              << Step1_VERSION_MINOR << "."
              << Step1_VERSION_PATCH << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }
  const double inputValue = std::stod(argv[1]);
}