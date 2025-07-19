// chalange : 
// Selesaikan solusinya sehingga string terbagi menjadi dua pasangan karakter. Jika string berisi jumlah karakter ganjil, karakter kedua yang hilang dari pasangan terakhir harus diganti dengan garis bawah ('_').

#include <string>
#include <vector>
using namespace std;

vector <string> solution (const string &s){
    vector <string> pairs;
    int len = s.length();
    for (int i = 0; i < len; i += 2 ){
        if(i + 1 < len){
            pairs.push_back(s.substr(i, 2));
        }else{
            pairs.push_back(s.substr(i, 1) + "_");
        }
    }
    return pairs;
}
