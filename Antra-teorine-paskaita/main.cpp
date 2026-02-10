#include <iostream>
#include <format>
#include <string>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    // //pirmas pavyzdys
    // int a = 5;       // priskyrimas: a gauna reikšmę 5
    // double b = 3.14; // priskyrimas: b gauna reikšmę 3.14
    // char c = 'A';    // priskyrimas: c gauna simbolį 'A'
    //
    // cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    // // antras pavyzdys veiksmų operatoriai
    //
    // int x = 10;
    // int y = 3;
    //
    // int suma = x + y;        // sudėtis
    // int skirtumas = x - y;   // atimtis
    // int sandauga = x * y;    // daugyba
    // int dalyba = x / y;      // dalyba (sveikųjų skaičių)
    // int likutis = x % y;     // likučio operacija
    //
    // cout << "Suma: " << suma << endl;
    // cout << "Skirtumas: " << skirtumas << endl;
    // cout << "Sandauga: " << sandauga << endl;
    // cout << "Dalyba: " << dalyba << endl;
    // cout << "Likutis: " << likutis << endl;

    //trečias pavyzdys su didinimo ir mažinimo operatoriais
    // int z = 5;
    //
    // z++; // padidina z reikšmę 1
    // cout << "Po didinimo: " << z << endl;
    //
    // z--; // sumažina z reikšmę 1
    // cout << "Po mazinimo: " << z << endl;
    //
    //
    // int a = 5;
    // int b;
    //
    // b = a++; // b gauna 5, o a padidėja iki 6
    // cout << "Po b = a++: a = " << a << ", b = " << b << endl;
    //
    // a = 5;   // grąžiname a į pradinę reikšmę
    // b = ++a; // a padidėja iki 6, b gauna 6
    // cout << "Po b = ++a: a = " << a << ", b = " << b << endl;
    // 4 pavyzdys su sudėtiniu bloku
    // int a = 2, b = 3, c;
    //
    // {
    //     // Sudėtinis sakinys: keli veiksmai viename bloke
    //     c = a + b;
    //     cout << "a + b = " << c << endl;
    // }
    //
    // cout <<c<<endl;
    //------Getline ir format pavyzdys
    // string vardas;

    // cout << "Iveskite varda ir pavarde: ";
    // getline(cin, vardas);
    //
    // cout << format("Sveiki, {}!\n", vardas);

    // string miestas;
    //
    // cout << "Iveskite miesto pavadinima: ";
    // getline(cin, miestas);
    //
    // cout << format("|{:^20}|\n", miestas);
    return 0;

}
