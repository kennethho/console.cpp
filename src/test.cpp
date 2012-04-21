#include "operators.hpp"
#include <sstream>

void test()
{
  std::ostringstream oss;
  std::string output =
    (oss << "Hello").str();

  std::istringstream iss;
  int v;
  (iss >> v).str("test");
}
