#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum Lendet { MATEMATIK, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };

struct Student {
    string emri;
    string mbiemri;
    string id;
    double notat[NR_LENDEVE];
    double mesatarja;
};


int indeksMaxMesatare = 0;
for (int i = 1; i <= NR_LENDEVE; i++) {
    if (studentet[i].mesatarja > studentet[indeksMaxMesatare].mesatarja) {
        indeksMaxMesatare = i;
    }
}

int maxNotaIndex[NR_LENDEVE] = { 0 };
for (int j = 0; j < NR_LENDEVE; j++) {
    for (int i = 1; i <= NUM_STUDENTEVE; i++) {
        if (studentet[i].notat[j] > studentet[maxNotaIndex[j]].notat[j]) {
            maxNotaIndex[j] = i;
        }
    }
}


int main()
{
    cout << "Hello World!\n";
}
