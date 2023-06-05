#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    //converting to loop
    while (true) {
        double angka;
        cout << "Konversi angka Romawi By G.PAUDRA \n";
        cout << "Masukkan Angka: ";
        cin >> angka;
        if (angka < 1 || angka > 3999) {
            cout << "Angka Tidak Boleh Lebih Dari 3999!! \n" << endl;
        }
        else {
            while (angka >= 1000) {
                cout << "M";
                angka -= 1000;
            }
            if (angka >= 500) {
                if (angka > 500) {
                    if (angka >= 900) {
                        cout << "CM";
                        angka -= 900;
                    }
                    else {
                        cout << "D";
                        angka -= 500;
                    }
                }
            }

            while (angka >= 100) {
                if (angka >= 400) {
                    cout << "CD";
                    angka -= 400;
                }
                else {
                    angka -= 100;
                }
            }
            if (angka >= 50) {
                if (angka >= 90) {
                    cout << "XC";
                    angka -= 90;
                }
                else {
                    cout << "L";
                    angka -= 50;
                }
            }

            while (angka >= 10) {
                if (angka >= 40) {
                    cout << "XL";
                    angka -= 40;
                }
                else {
                    cout << "X";
                    angka -= 10;
                }
            }
            if (angka >= 5) {
                if (angka == 9) {
                    cout << "IX";
                    angka -= 9;
                }
                else {
                    cout << "V";
                    angka -= 5;
                }
            }

            while (angka >= 1) {
                if (angka == 4) {
                    cout << "IV";
                    angka -= 4;
                }
                else {
                    cout << "I";
                    angka -= 1;
                }
            }
            cout << endl << endl;
        }
    }
    return 0;
}
