#include <cstdlib>
#include <cmath>
#include <iostream>

#include "step3_config.h"

#ifdef USE_MYMATH
#  include "math_functions.h"
#endif

int main(int argc, char* argv[])
{
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Step3_VERSION_MAJOR << "."
              << Step3_VERSION_MINOR << "."
              << Step3_VERSION_PATCH << std::endl;
    std::cout << "Usage: " << argv[0] << " number" << std::endl;
    return 1;
  }
  const double input_value = std::stod(argv[1]);
#ifdef USE_MYMATH
  const double output_value = mysqrt(input_value);
#else
  const double output_value = std::sqrt(input_value);
#endif
}