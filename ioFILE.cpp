#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // operasi file dalam node 
    ofstream outfile;
    // menunjuk ke sebuah nama file membuka 
    outfile.open("contohfile.txt");

    cout << ">= menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop menulis 
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu  baris 
        getline(cin, baris);
    }
}
