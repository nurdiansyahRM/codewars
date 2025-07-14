#include <iostream>
#include <string>
using namespace std;


string get_middle(string input){
    int tampung = input.length();
    if(tampung % 2 == 0){
        return input.substr((tampung / 2) - 1, 2);
    }else{
        return input.substr(tampung / 2, 1);
    }
    
}