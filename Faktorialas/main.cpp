#include <iostream>
using namespace std;

int faktorialas(int skaicius) {
    int faktorialoSk;
    if (skaicius == 1) {
        faktorialoSk = 1;
    } else {
        faktorialoSk = faktorialas(skaicius-1) * skaicius;
    }
    return faktorialoSk;
}

int main() {
    int skaicius;
    cout<<"Kokios skaiciaus faktoriala norite apskaiciuoti?"<<endl;
    cin>>skaicius;
    cout <<faktorialas(skaicius);
    return 0;
}
