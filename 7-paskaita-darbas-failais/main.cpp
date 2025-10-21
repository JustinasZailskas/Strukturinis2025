#include <iostream>
#include <fstream>/
using namespace std;
int main() {
    int masyvasSkaiciu [15];
    int kiekis = 0;
    int suma = 0;
    double vidurkis = 0;

    ifstream duomenuFailas;
    duomenuFailas.open("duomenys.txt");

    if (duomenuFailas.fail()) {
        cout<<"Klaida, nepavyko atverti failo Duomenys.txt"<<endl;
        return 1;
    }

    // for (int i = 0; i < 10; i++) {
    //     duomenuFailas>>masyvasSkaiciu[i];
    // }
    //
    // for (int i = 0; i < 10; i++) {
    //     cout<<masyvasSkaiciu[i]<<endl;
    // }
    while (!duomenuFailas.eof()) {
        duomenuFailas>>masyvasSkaiciu[kiekis];
        kiekis++;
    }
    // for (int i = 0; i < kiekis; i++) {
    //     cout<<masyvasSkaiciu[i]<<endl;
    // }
    duomenuFailas.close();
    for (int i = 0; i < kiekis; i++) {
        suma += masyvasSkaiciu[i];
    }
    vidurkis = double(suma)/kiekis;

    cout<<"Suma: "<<suma<<endl;
    cout<<"Vidurkis: "<<vidurkis<<endl;

    ofstream rezultatai;
    rezultatai.open("rezultatai.txt");

    if (rezultatai.fail()) {
        cout<<"Nepavyko atidaryti failo Rezultatai.txt"<<endl;
        return 1;
    }

    rezultatai<<"Duomenys faile"<<endl;
    rezultatai<<"Nuskaityta skaitmenu: "<<kiekis<<endl;
    rezultatai<<"Suma: "<<suma<<endl;
    rezultatai<<"Vidurkis: "<<vidurkis<<endl;


    duomenuFailas.close();
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}