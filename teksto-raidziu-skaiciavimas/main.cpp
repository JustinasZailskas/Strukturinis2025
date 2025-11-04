#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int& lc, int list[]);
void characterCount(char ch, int list[]);
void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]);
void writeTotal(ofstream& outtext, int lc, int list[]);

int main() {

    int lineCount;
    int letterCount[26];
    char ch;
    ifstream inputFile;
    ofstream outputFile;

    inputFile.open("tekstas.txt");
    if (!inputFile) {
        cout<<"Nepavyksta atidaryti failo"<<endl;
    }
    outputFile.open("rezultatas.txt");
    if (!outputFile) {
        cout<<"Nepavyksta atidaryti rezultatu failo"<<endl;
    }

    initialize(lineCount, letterCount);
    inputFile.get(ch);

    while(inputFile) {
        copyText(inputFile,outputFile, ch, letterCount);
        lineCount++;
        inputFile.get(ch);
    }

    writeTotal(outputFile, lineCount,letterCount);

    inputFile.close();
    outputFile.close();

    return 0;
}

void initialize(int& lc, int list[]) {
    lc = 0;
    for (int i = 0;  i < 26; i++) {
        list[i]=0;
    }
}

void characterCount(char ch, int list[]) {
    int index;
    ch = toupper(ch);
    index = static_cast<int>(ch) - static_cast<int>('A');

    if (0 <= index && index < 26) {
        list[index]++;
    }
}

void copyText(ifstream& intext, ofstream& outtext, char& ch, int list[]) {
    while (ch != '\n' && intext) {
        outtext << ch;
        characterCount(ch, list);
        intext.get(ch);
    }
    outtext <<ch;
}

void writeTotal(ofstream& outtext, int lc, int list[]) {
    outtext << endl;
    outtext << "Eiluciu skaicius yra = "<<lc<<endl;
    for (int index = 0; index < 26; index++) {
        outtext << static_cast<char>(index + static_cast<int>('A'))<<" kiekis = "<<
            list[index] <<endl;
    }
}