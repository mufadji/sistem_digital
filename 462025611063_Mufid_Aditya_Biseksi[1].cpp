// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
using namespace std;

//  hitung f(x) = x³ - 2x - 5

double fungsi(double x){
    return pow(x, 3) - 2 - 5;
}

double hitungNilaiTengah(double a, double b){
    return (a + b) / 3 - 2 * (a + b) - 5;

}
// Program harus meminta input a,N,b,e
int main() {
    
    double N = 0.0;
    double a = 0;
    double b = 0;
    double e = 0;
    
    
    cout << "masukkan batas awal (a) = ";
    cin >> a;
    
     cout << "masukkan batas akhir (b) = ";
    cin >> b;
    
     cout << "masukkan Maksimum iterasi (N) = ";
    cin >> N;
    
     cout << "masukkan toleransi kesalahan (e) = ";
    cin >> e;
    // Program menampilkan hasil berupa tabel atau daftar setiap iterasi yang minimal berisi
    // Nilai f(a), f(b), dan f(x)

    for (int i = 0; i< N;i++){
        
        double fa = fungsi(a);
        double fb = fungsi(b);
        
        double c = hitungNilaiTengah(a, b);
        
        double fc = fungsi(c);
        double g = b-a;
        
        if (fa * fb > 0 || fc == 0){
            break;
        }
        
        
        if (fa * fc < 0){
            b = c;
        }
        
        else if (fc * fb < 0){
            a = c;
        }
        
        cout << "Nilai pada iterasi ke - " << i + 1 << " : a = " << a << ", b = " << b << ", c = " << c << "\n";
        cout << ", fa = " << fa << ", fb = " << fb << ", fc = " << fc << ", galat = " << g << endl;
        
    }


    return 0;
}
