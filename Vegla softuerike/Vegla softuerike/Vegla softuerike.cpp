#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum Lendet { MATEMATIKE, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };

struct Student {
    string emri;
    string mbiemri;
    string id;
    double notat[NR_LENDEVE];
    double mesatarja;
};

double llogaritMesataren(const Student& s){
double shuma = 0;
for (int i = 0; i < NR_LENDEVE; i++) {
    shuma += s.notat[i];
}
return shuma / NR_LENDEVE;
}


int main()
{
    const int NUM_STUDENTEVE = 5;
    Student studentet[NUM_STUDENTEVE];


    for (int i = 0; i < NUM_STUDENTEVE; i++) {
        cout << "------ Shkruani te dhenat per studentin " << i + 1 <<" ------\n\n";
        cout << "Emri: ";
        cin >> studentet[i].emri;
        cout << "Mbiemri: ";
        cin >> studentet[i].mbiemri;
        cout << "ID: ";
        cin >> studentet[i].id;
        cout << endl;
        cout << "Shkruani notat (Matematike, Programim, Vegla Softuerike, Fizike): "<<endl;
        for (int j = 0; j < NR_LENDEVE; j++) {
            cout << "Lenda " << j + 1 << " ka noten: ";
            cin >> studentet[i].notat[j];
        }
        cout << "-----------------------------------------------------------\n";
        studentet[i].mesatarja = llogaritMesataren(studentet[i]);
        cout << endl;
    }


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

    int bursaFakulteti = 0, bursaShteti = 0;
    for (int i = 0; i < NUM_STUDENTEVE; i++) {
        if (studentet[i].mesatarja >= 8.0) {
            bursaFakulteti++;
        }
        if (studentet[i].mesatarja >= 9.0) {
            bursaShteti++;
        }
    }
   
    int numriStudenteveMatematikeMbi7 = 0;
    for (int i = 0; i < NUM_STUDENTEVE; i++) {
        if (studentet[i].notat[MATEMATIKE] > 7) {
            numriStudenteveMatematikeMbi7++;
        }
    }
   
    
    cout << "\nStudenti me mesataren me te larte:\n";
    cout << "Emri: " << studentet[indeksMaxMesatare].emri
        << " " << studentet[indeksMaxMesatare].mbiemri
        << " | ID: " << studentet[indeksMaxMesatare].id
        << " | Mesatarja: " << fixed << setprecision(2) << studentet[indeksMaxMesatare].mesatarja << endl;


    string emratLendeve[] = { "Matematike", "Programim", "Vegla Softuerike", "Fizike" };
    cout << "\nStudentet me noten me te larte ne secilen lende:\n";
    for (int j = 0; j < NR_LENDEVE; j++) {
        cout << emratLendeve[j] << ": "
            << studentet[maxNotaIndex[j]].emri << " "
            << studentet[maxNotaIndex[j]].mbiemri
            << " me noten " << studentet[maxNotaIndex[j]].notat[j] << endl;
    }


    cout << "\nStudentet qe fitojne vetem bursen e fakultetit (mbi 8.0): " << bursaFakulteti - bursaShteti << endl;
    cout << "Studentet qe fitojne bursen e fakultetit dhe ate te shtetit (mbi 9.0): " << bursaShteti << endl;
    cout << "\nNumri i studenteve qe kane noten mbi 7 ne Matematike: " << numriStudenteveMatematikeMbi7 << endl;

    cout << "************************************************************\n";


    return 0;
}
