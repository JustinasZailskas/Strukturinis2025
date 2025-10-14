#include <iostream>
using namespace std;

void stars();// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void starsV2(char, int);
void getTaskai(int& taskai);
void printPazymys(int kursoTaskai);
int main() {
    int kursoTaskai;
    // char simbolis;
    // int kiekis;
    // cout <<"Iveskite simboli"<<endl;
    // cin >> simbolis;
    // cout <<"Iveskite kieki"<<endl;
    // cin >> kiekis;
    // starsV2(simbolis, kiekis);
    //
    // cout <<"Duomenu tipas       Ilgis       Diapazonos \n";
    // starsV2('*', 80);
    // cout <<"char                1B          -128 - 127"<<endl;
    // cout <<"short               2B          -32768 - 32767"<<endl;
    // starsV2('=', 70);
    cout <<"Si programa skaiciuoja kurso pazymi, \n"
            "priklausomai kiek tasku yra surinkta" << endl;
    getTaskai(kursoTaskai);
    printPazymys(kursoTaskai) ;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}

void stars() {
    for (int i = 0; i <= 60; i++) {
        cout<<"*";
    }
    cout<<endl;
}

void starsV2( char simbolis, int kiekis) {
    for (int i = 0; i <= kiekis; i++) {
        cout<<simbolis;
    }
    cout<<endl;
}

void getTaskai(int& taskai) {
    cout <<"Iveskite tasku kieki is kurso"<<endl;
    cin>>taskai;
    cout <<endl<<"Kurso surinktu tasku kiekis "<<taskai<<endl;
}

void printPazymys(int kursoTaskai) {
    cout <<"Jusu kurso pazymys yra ";
    if (kursoTaskai >= 95) {
        cout<<"10"<<endl;
    } else if (kursoTaskai >= 85) {
        cout<<"9"<<endl;
    } else if (kursoTaskai >= 75) {
        cout<<"8"<<endl;
    } else if (kursoTaskai >= 65) {
        cout<<"7"<<endl;
    } else if (kursoTaskai >= 55) {
        cout<<"6"<<endl;
    } else if (kursoTaskai >= 45) {
        cout<<"5"<<endl;
    } else {
        cout<<"Neigiamas";
    }
}