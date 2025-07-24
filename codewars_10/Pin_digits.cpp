#include <iostream>
#include <vector>
#include <map>

using namespace std;

class PINVariator {
public: vector<string> getPINs(string observed) {
        map<char, string> adjacent = {
            {'1', "124"}, {'2', "1235"}, {'3', "236"},
            {'4', "1457"}, {'5', "24568"}, {'6', "3569"},
            {'7', "478"}, {'8', "57890"}, {'9', "689"},
            {'0', "80"}
        };

        vector<string> result = {""};
        for (char digit : observed) {
            vector<string> temp;
            for (string prefix : result) {
                for (char alt : adjacent[digit]) {
                    temp.push_back(prefix + alt);
                }
            }
            result = temp;
        }
        return result;
    }
};