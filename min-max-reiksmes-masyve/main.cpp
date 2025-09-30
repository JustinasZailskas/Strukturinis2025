#include <iostream>
using namespace std;// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    int masyvas[100];
    int n, temp; //elementu kiekis masyve
    cout<<"Iveskite kiek elementu norite tureti masyve"<<endl;
    cin>>n;
    cout<<"Iveskite masyvo elementus"<<endl;
    for(int i=0;i<n;i++) {
        cout<<i+1<<" - aj masyvo elementas"<<endl;
        cin>>masyvas[i];
    }

    int max = masyvas[0];
    int imax = 0;
    int min = masyvas[0];
    int imin = 0;

    for ( int i=0 ; i<n ; i++) {
        if (masyvas[i]>max) {
            max = masyvas[i];
            imax = i;
        }
        if (masyvas[i]<min) {
            min = masyvas[i];
            imin = i;
        }
    }

    cout<<"Rezultatai"<<endl;
    cout<<"Didziausias masyvo elementas yra "<<max<<" jo pozicija "<<imax+1<<endl;
    cout<<"Maziausias masyvo elementas yra "<<min<<" jo pozicija "<<imin+1<<endl;

    for (int i = 0; i < n; i++) {
        for (int j = i +1; j < n; j++) {
            if (masyvas[i] > masyvas[j]) {
                temp = masyvas[i];
                masyvas[i] = masyvas[j];
                masyvas[j] = temp;
            }
        }
    }
    cout <<"Isrikiuoti elementai: "<<endl;
    for (int i = 0; i < n; i++) {
        cout<<masyvas[i]<<" ";
    }


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}