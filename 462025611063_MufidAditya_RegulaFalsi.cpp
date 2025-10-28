#include <iostream>
#include <cmath>
using namespace std;

//  hitung f(x) = sin(x) - x

double fungsi(double x){
    return sin(x) - x;
}

double hitungNilaiTengah(double a, double b){
    return (a * fungsi(b) - b * fungsi(a)) / (fungsi(b) - fungsi(a));

}

int main() {
    
    double N = 0.0;
    double a = 0;
    double b = 0;
    double e = 0;
    //Program harus meminta input dari pengguna berupa:
    // batas bawah (a), batas atas (b),Toleransi kesalahan (ε), Maksimum iterasi (N)  
    
    cout << "masukkan batas bawah (a) = ";
    cin >> a;
    
     cout << "masukkan batas atas (b) = ";
    cin >> b;
    
     cout << "masukkan Maksimum iterasi (N) = ";
    cin >> N;
    
     cout << "masukkan toleransi kesalahan (e) = ";
    cin >> e;

    // Nilai f(a), f(b), dan f(x)
    for (int i = 0; i < N; i++) {
    double c = (a + b) / 2;    
    double fa = fungsi(a);
    double fb = fungsi(b);
    double fc = fungsi(c);
    
     cout << "Iterasi ke-" << i + 1
     << " : a=" << a << ", b=" << b << ", c=" << c
     << ", fa=" << fa << ", fb=" << fb << ", fc=" << fc << endl;

    //logika rumus f(x)= sin(x) - x
    if (fa * fb > 0) {
        break;
    }

       if (fabs(fc) < e) {
        break;
    }

    if (fa * fc < 0) {
        b = c;
    } else {
        a = c;
    }

     

        
    }


    return 0;
}