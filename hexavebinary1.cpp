#include <iostream>
#include <string>

using namespace std;

int main() {
    int sayi;

    // Kullanıcıdan sayıyı al
    cout << "Bir sayi giriniz: ";
    cin >> sayi;

   
    string ikili = "";
    while (sayi > 0) {
        ikili += (sayi % 2 == 0 ? '0' : '1');
        sayi /= 2;
    }
    reverse(ikili.begin(), ikili.end());

    
    string onaltılık = "";
    char hex[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    for (int i = 10; i < 16; i++) {
        hex[i] = i + 55;
    }

    while (sayi > 0) {
        onaltılık += hex[sayi % 16];
        sayi /= 16;
        if (sayi > 0) {
            onaltılık += hex[sayi / 16];
            sayi %= 16;
        }
    }
    reverse(onaltılık.begin(), onaltılık.end());

    cout << "Iki tabaninda: " << ikili << endl;
    cout << "Onaltılık tabaninda: " << onaltılık << endl;

    return 0;
}
