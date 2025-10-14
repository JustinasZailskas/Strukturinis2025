#include <iostream>
using namespace std;

void stars();// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
void starsV2(char, int);
int main() {
    char simbolis;
    int kiekis;
    cout <<"Iveskite simboli"<<endl;
    cin >> simbolis;
    cout <<"Iveskite kieki"<<endl;
    cin >> kiekis;
    starsV2(simbolis, kiekis);

    cout <<"Duomenu tipas       Ilgis       Diapazonos \n";
    starsV2('*', 80);
    cout <<"char                1B          -128 - 127"<<endl;
    cout <<"short               2B          -32768 - 32767"<<endl;
    starsV2('=', 70);
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