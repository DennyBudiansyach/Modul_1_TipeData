#include <iostream>
using namespace std;
float panjang, lebar;

float luasP (int p, int l){
    return p*l;
}

float keliling (int p, int l){
    return 2*(p+l);
}

int main(){
    cout << "masukan panjang persegi : ";
    cin >> panjang;
    cout << "masukan lebar persegi : ";
    cin >> lebar;
    cout << "luas persegi panjang adalah " << luasP(panjang, lebar)<<endl;
    cout << "keliling persegi panjang adalah " << keliling(panjang, lebar);
    
}