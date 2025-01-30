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


//Gjetja per mesataren me te larte:
int indeksMaxMesatare = 0;
for (int i = 1; i <= NR_LENDEVE; i++) {
    if (studentet[i].mesatarja > studentet[indeksMaxMesatare].mesatarja) {
        indeksMaxMesatare = i;
    }
}

int main()
{
    cout << "Hello World!\n";
}
