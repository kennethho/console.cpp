#include "operators.hpp"
#include <sstream>
#if(0)
void test()
{
  std::ostringstream oss;
  std::string output =
    (oss << "Hello").str();

  std::istringstream iss;
  int v;
  (iss >> v).str("test");
}
#endif
