#include <cstdlib>
#include <iostream>
using namespace std;

int Permutasi (int x, int y,) {
    int Nilai_Permut, selisih;
    int faktorial = 1;
    selisih = x - y;
    
    while (x > 0) {
        faktorial = faktorial * x;
        x = x-1;
    }
    Nilai_Permut = faktorial/selisih;
    return(Nilai_Permut);
}
int Main {
    int n, r;
    cout << "Masukan Nilai n: ";
    cin >> n;
    while (n < 0) {
        cout << "Masukan Nilai n Kembali: ";
        cin >> n;
        cin >> n;
    }
   
