#include <iostream>
#include <fstream>
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int sk;
    int teigiami[50];
    int kiek = 0, suma = 0;

    ifstream skaiciuFailas("skaiciai.txt");

    if (skaiciuFailas.fail()) {
        cout<<"Nepavyko atidaryti failo Skaiciai.txt"<<endl;
        return 1;
    }

    while (skaiciuFailas >> sk) {
        if (sk > 0) {
            teigiami[kiek] = sk;
            suma += sk;
            kiek++;
        }
    }

    skaiciuFailas.close();

    if (kiek == 0 ) {
        cout<<"Nerasta teigiamu skaiciu"<<endl;
    }

    ///rasome rezultatus i faila
    ofstream teigiamiSkaiciai("teigiami.txt");

    if (teigiamiSkaiciai.fail()) {
        cout<<"Nepavyko atidaryti failo Tegiami.txt";
        return 1;
    }

    for (int i = 0; i < kiek; i++) {
        teigiamiSkaiciai << teigiami[i]<< " ";
    }

    teigiamiSkaiciai<<endl<< "Is viso: "<<kiek<<" skaiciai"<<endl;
    teigiamiSkaiciai <<"Suma: "<<suma<<endl;
    teigiamiSkaiciai.close();

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}