#include <iostream>
#include <string>
using namespace std;

int mirror_collapse(int n) {
    while (n > 9) {
        string str = to_string(n);
        int hasil = 0;
        int len = str.length();

        for (int i = 0; i < len / 2; ++i) {
            hasil += (str[i] - '0') + (str[len - 1 - i] - '0');
        }

        // Kalau jumlah digit ganjil, tambahkan digit tengah
        if (len % 2 != 0) {
            hasil += str[len / 2] - '0';
        }

        n = hasil;
    }
    return n;
}