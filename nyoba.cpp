#include <iostream>
using namespace std;

float luasPersegiPanjang(float x, float y){
    return x * y;
}

float luasLingkaran(float x){
    return 3.14 * x * x;
}

    int main (){
        int pilihan;
        float panjang,lebar,jejari;
        do{
            cout << "===Menu===" << endl;
            cout << "1. Menghtung Luas Persegi Panjang" << endl;
            cout << "2. Menghitung Luaas Lingkaran" << endl;
            cout << "3. Exit" << endl;
            cout << "pilih (1/2/3) : ";
            cin >> pilihan;

            switch(pilihan){
                case 1 :
                    cout << "Menghitung Luas Persegi Panjang" << endl;
                    cout << "Masukkan Panjang : ";
                    cin >> panjang;
                    cout << "Masukkan Lebar :";
                    cin >> lebar;
                    cout << "Luas Persegi Panjang"
                    << luasPersegiPanjang(panjang,lebar) << endl;
                    break;
            }
        }while(pilihan != 3);
    }