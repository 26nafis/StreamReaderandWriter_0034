#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat di belajar di prodi TI UMY" << endl;
        throw 0,5; // melemparkan sebuah integer maka
        cout << "pernyataan tidak diessekusi" << endl;
    }
    catch (int a ) {
        //blok ini akan dieksekusi 
        cout << " pengecualian akan dieksekusi " << endl;
    }
}