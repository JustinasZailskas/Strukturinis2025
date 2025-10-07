#include <iostream>
using namespace std;
int main() {

    const int N = 3;
    int masyvas[N][N];

    cout<<"Iveskite matricos elementus "<<endl;
    for (int i=0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout<<"Matricos ["<<i+1<<"]["<<j+1<<"]";
            cin >> masyvas[i][j];
        }
    }

    for (int i=0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout<<masyvas[i][j]<<" ";
        }
        cout << endl;
    }

    int det = masyvas[0][0]*masyvas[1][1]*masyvas[2][2] +
              masyvas[0][1]*masyvas[1][2]*masyvas[2][0] +
              masyvas[0][2]*masyvas[1][0]*masyvas[2][1] -
              masyvas[0][2]*masyvas[1][1]*masyvas[2][0] -
              masyvas[0][1]*masyvas[1][0]*masyvas[2][2] -
              masyvas[0][0]*masyvas[1][2]*masyvas[2][1];

    cout <<"matricos determinantas: "<<det;

    return 0;
}
