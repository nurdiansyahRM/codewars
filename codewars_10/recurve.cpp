#include <iostream>
#include <vector>
#include <map>

using namespace std;

class PinVariator {
    public : 
        map<char, string> adjacent = {
            {'1', "124"}, {'2', "1235"}, {'3', "236"},
            {'4', "1457"}, {'5', "24568"}, {'6', "3569"},
            {'7', "478"}, {'8', "57890"}, {'9', "689"},
            {'0', "80"}
        };        
        vector<string> get_pins(string observed){
            vector<string> result;
            recurse(observed, 0 ,"",result);
            return result;
            
        }
        void recurse(const string& observed, size_t idx, string current, vector<string>& result){
            if(idx == observed.size()){
                result.push_back(current);
                return;
            }
            char digit = observed[idx];
                for(char c : adjacent[digit]){
                    recurse(observed, idx + 1, current + c, result);
                }
        }
    
};
vector<string> get_pins(string observed) {
    PinVariator solver;
    return solver.get_pins(observed);
}

