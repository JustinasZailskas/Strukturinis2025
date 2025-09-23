#include <iostream>
using namespace std;

int main() {
    // string vaisius = "vysnia";
    //
    // if (vaisius == "obuolys") {
    //     cout << "Jus turite obuolys"<<endl;
    // } else if (vaisius == "vysnia") {
    //     cout <<"Jus turie vysnia" <<endl;
    // } else {
    //     cout << "Jus turite visai kita vaisiu"<<endl;
    // }

    // int diena = 7;
    //
    // switch (diena) {
    //     case 1:
    //         cout << "Pirmadienis"<< endl;
    //         break;
    //     case 2:
    //         cout <<"Antradienis"<< endl;
    //         break;
    //     case 3:
    //         cout << "Treciadienis"<< endl;
    //         break;
    //     case 4:
    //         cout <<"ketvirtadienis"<< endl;
    //         break;
    //     case 5:
    //         cout << "Penktadienis"<< endl;
    //         break;
    //     case 6:
    //         cout <<"Sestadienis"<< endl;
    //         break;
    //     case 7:
    //         cout <<"Sekmadienis"<<endl;
    //         break;
    //     default:
    //         cout <<"Tokios savaites dienos nera"<< endl;
    // }
    // int diena;
    // while(true) {
    //
    //     cout <<"Iveskite diena (1-7)"<<endl;
    //     cin>>diena;
    //     switch (diena) {
    //         case 1:
    //             cout << "Pirmadienis"<< endl;
    //         break;
    //         case 2:
    //             cout <<"Antradienis"<< endl;
    //         break;
    //         case 3:
    //             cout << "Treciadienis"<< endl;
    //         break;
    //         case 4:
    //             cout <<"ketvirtadienis"<< endl;
    //         break;
    //         case 5:
    //             cout << "Penktadienis"<< endl;
    //         break;
    //         case 6:
    //             cout <<"Sestadienis"<< endl;
    //         break;
    //         case 7:
    //             cout <<"Sekmadienis"<<endl;
    //         break;
    //         default:
    //             cout <<"Tokios savaites dienos nera"<< endl;
    //     }
    //
    // }

    int number;
    cout <<"Iveskite sveikaji skaiciu Number"<<endl;
    cin >> number;
    int sum = 0;

    for (int i = 1; i <= number; i++) {
        sum = sum + i; // sum += i;
    }

    cout <<"Suma skaiciu nuo 1 iki "<<number<<" yra: "<<sum<<endl;

    return 0;
}