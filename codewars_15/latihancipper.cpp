#include <string>
#include<iostream>
using namespace std;
class Cipher{
   public:
        string key;
        string alphabet;
        Cipher() : key("KEY"), alphabet("abcdefghijklmnopqrstuvwxyz") {}
        string decode(string str){
            string result;
            for(size_t i = 0 ; i < str.size(); ++i){
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

int main(){

}