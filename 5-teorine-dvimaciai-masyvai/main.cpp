#include <iostream>
using namespace std;
int main() {
    const int eilutes = 3, stulpeliai = 3;
    int masyvas[eilutes][stulpeliai];

    cout << "iveskite 5 eiluciu ir 3 stulpeliu masyvo elementus"<<endl;

    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout << "Elementas ["<<i<<"]["<<j<<"] :"<<endl;
            cin >> masyvas[i][j];
        }
    }

    for (int i = 0; i < eilutes; i++) {
        for (int j = 0; j < stulpeliai; j++) {
            cout<< masyvas[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < eilutes; i++) {
        int eilutesSuma = 0;
        for (int j = 0; j < stulpeliai; j++) {
            eilutesSuma += masyvas[i][j];
        }
        cout << "Eilutes "<<i+1<<" suma: "<<eilutesSuma<<endl;
    }

    for (int j = 0; j < stulpeliai; j++) {
        int stulpelioSuma = 0;
        for (int i = 0; i < eilutes; i++) {
            stulpelioSuma += masyvas[i][j];
        }
        cout << "Stulpelio "<<j+1<<" suma: "<<stulpelioSuma<<endl;
    }

    for (int j = 0; j < stulpeliai; j++) {
        int maxElem = masyvas[0][j];
        for (int i = 1; i < eilutes; i++) {
            if (masyvas[i][j] > maxElem) {
                maxElem = masyvas[i][j];
            }
        }
        cout << "Stulpelio "<<j+1<<" didziausias elementas yra: "<<maxElem<<endl;
    }




    return 0;
}
