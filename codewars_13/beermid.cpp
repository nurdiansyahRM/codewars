// Returns number of complete beeramid levels
#include <iostream>
using namespace std;
int beeramid(int bonus, double price)
{
  if(bonus <= 0 || price <= 0 ){
    return 0;
  }
  int totalCans = bonus / price;
  int level = 0;
  int needed = 0;
  
  while(true){
    ++level;
    needed += level * level;
    if(needed > totalCans){
      return level -1;
    }
  }
}