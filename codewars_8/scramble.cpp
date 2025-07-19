#include <iostream>
#include <string>
#include <map>

using namespace std;

bool scramble(const string& str1, const string& str2){
    map <char, int> counts;

    //hitung frekuensi huruf di str1
    for(char c : str1){
        counts[c]++;
    }

    //cek kebutuhan huruf di str2
    for(char c : str2) {
        if(counts[c] == 0){
            return false;
        }
    counts[c]--;
    }
    return true;
}
