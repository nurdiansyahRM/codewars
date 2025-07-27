#include <string>
#include <iostream>
#include <vector>
using namespace std;
string factorial(int factorial){
    if(factorial < 0) return "";

    vector<int> result = {1}; //sebagai basis 1!
    for(int i = 2; i <= factorial; ++i){
      int carry = 0;
      for(int j = 0; j < result.size(); ++j){
        int prod = result[j] * i + carry;
        result[j] = prod % 10;
        carry = prod / 10;
      }
      while(carry){
        result.push_back(carry % 10);
        carry /= 10;
      }
    }
    string res;
    for(auto it = result.rbegin(); it != result.rend(); ++it) res += to_string(*it);
    return res;
}