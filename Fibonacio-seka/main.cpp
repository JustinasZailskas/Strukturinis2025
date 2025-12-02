#include <iostream>
using namespace std;

int seka (int skaicius) {
    int sekosSk;
    if (skaicius == 0) {
        sekosSk = 0;
    } else if (skaicius == 1) {
        sekosSk = 1;
    } else {
        sekosSk = (seka(skaicius-2) + seka(skaicius-1));
    }
    return sekosSk;
}

int main() {
    int sekosElemSk, i = 0;
    cout << "Kiek sekos elementu norite atspaudinti?"<<endl;
    cin>>sekosElemSk;
    while(i < sekosElemSk) {
        cout<<" "<<seka(i);
        i++;
    }

    return 0;
}



