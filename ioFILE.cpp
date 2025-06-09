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
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menuliskan dan memasukan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekaran tutup filenya
    outfile.close();

    // operasi file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file untuk membuka 
    infile.open("contohfile.txt");

    cout << endl << ">= membuka dan membaca file " << endl;
    //jika file ada maka 
    if (infile.is_open())
    {
        // melakukan penggulangan setiap baris
        
    }
}
