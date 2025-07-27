#include <string>
#include <iostream>
using namespace std;
class VigenèreCipher{
public:
    string key;
    string alphabet;
VigenèreCipher() : key("KEY"), alphabet("abcdefghijklmnopqrstuvwxyz") {}
    string encode(string str) {
        string result;
        for (size_t i = 0; i < str.size();++i){
            char ch = tolower(str[i]);
            size_t CharIdx  = alphabet.find(ch);
            if(CharIdx != string::npos){
                char keyChar = tolower(key[i % key.size()]);
                size_t KeyIdx = alphabet.find(keyChar);
                char encodeChar = alphabet[(CharIdx + KeyIdx ) % alphabet.size()];
                result += encodeChar;
            }else{
                result += ch;
            }
        }
        return result;
    }
    
    string decode(string str) {
        string result;
        for(size_t i = 0; i < str.size(); ++i){
            char ch = tolower(str[i]);
            size_t CharIdx = alphabet.find(ch);
            if(CharIdx != string::npos){
                char KeyChar = tolower(key[i % key.size()]);
                size_t KeyIdx = alphabet.find(KeyChar);
                char decodeChar = alphabet[(CharIdx + alphabet.size() - KeyIdx) % alphabet.size()];
                result += decodeChar;
            }else{
                result += ch;
            }
        }
        return result;
    }
    
};
int main() {
    VigenèreCipher cipher;

    string pesan;
    cout << "Masukkan pesan (gunakan huruf kecil a-z): ";
    getline(cin, pesan);

    // Encode
    string terenkripsi = cipher.encode(pesan);
    cout << "Hasil enkripsi: " << terenkripsi << endl;

    // Decode
    string terdekripsi = cipher.decode(terenkripsi);
    cout << "Hasil dekripsi: " << terdekripsi << endl;

    return 0;
}