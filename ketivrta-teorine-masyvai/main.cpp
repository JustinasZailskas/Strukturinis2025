#include <iostream>
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int numbers[5];
    numbers[3] = 15;
    numbers[0] = 4;
    numbers[1] = numbers[0] + numbers[3];
    numbers[2] = numbers[1] - numbers[0];
    numbers[4] = numbers[2] * numbers[1];

    cout <<numbers[0]<< endl;
    cout <<numbers[1]<< endl;
    cout <<numbers[2]<< endl;
    cout <<numbers[3]<< endl;
    cout <<numbers[4]<< endl;

    for (int i = 0; i < 5; i++) {
        cout << "Masyvo "<<i+1<< " elemento reiksme "<<numbers[i] << endl;
    }

    // int newArray[5];
    // for (int i = 0; i < 5; i++) {
    //     cout << "Iveskite skaiciu: "<<endl;
    //     cin >> newArray[i];
    // }
    // for (int i = 0; i < 5; i++) {
    //     cout <<"Naujo masyvo elementas "<<i+1<<" reiksme: "<< newArray[i] << endl;
    // }

    int randomArray[10] = {0};
    for (int i = 0; i < 10; i++) {
        cout <<randomArray[i]<<endl;
    }

    randomArray[0] = randomArray[1];
    return 0;// TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}