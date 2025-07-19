#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
bool scramble(const string& s1, const string& s2){
    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));
    return includes(begin(s1), end(s1), begin(s2),end(s2));
}