#include <iostream>
using namespace std;

int main() {
    int pasirinkimas, sk1, sk2, rezultatas;

    do {
        //Menu isvedimas
        cout << "\nPASIRIKITE VEIKSMA: \n";
        cout << "1 - sudetis \n";
        cout << "2 - skirtumas \n";
        cout << "3 - kvadratas \n";
        cout << "4 - iseiti is programos \n";
        cout <<"Iveskite pasirinkima: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                cout <<"Iveskite pirma skaiciu: "<<endl;
                cin >> sk1;
                cout <<"Iveskite antra skaiciu: "<<endl;
                cin >> sk2;
                rezultatas = sk1 + sk2;
                cout << "Suma rezultatas: " << rezultatas << endl;
                break;
            }
            case 2: {
                cout <<"Iveskite pirma skaiciu: "<<endl;
                cin >> sk1;
                cout <<"Iveskite antra skaiciu: "<<endl;
                cin >> sk2;
                rezultatas = sk1 - sk2;
                cout << "Skirtumo rezultatas: " << rezultatas << endl;
                break;
            }
            case 3: {
                cout <<"Iveskite pirma skaiciu: "<<endl;
                cin >> sk1;
                rezultatas = sk1 * sk1;
                cout << "Kvadrato rezultatas: " << rezultatas << endl;
                break;
            }
            case 4: {
                cout <<"Programa baigta "<<endl;
                break;
            }
            default:
                cout <<"Tokio pasirinkimo nera."<< endl;
        }
    } while (pasirinkimas != 4);
    return 0;
}
