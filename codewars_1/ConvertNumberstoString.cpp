#include <iostream>
using namespace std;

std::string number_to_string(int num){
    return to_string(num);
}
int main(){
    int angka = 12;
    string tampung;
    tampung = number_to_string(angka);
    cout << tampung;
    return 0; 
}