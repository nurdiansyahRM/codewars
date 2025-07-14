#include <string>
#include <vector>
#include <sstream>
#include <limits>
std::string highAndLow(const std::string& numbers){
  std::istringstream stream(numbers);
  int num;
  int maxval = std::numeric_limits<int>::min();
  int minval = std::numeric_limits<int>::max();
  
  while (stream >> num){
    if(num > maxval) maxval = num;
    if(num < minval)  minval = num;
  }
  
  return std::to_string(maxval) + " " + std::to_string(minval);
}