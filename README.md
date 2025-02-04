# Projekti ne vegla
## Pjesa hyrese
**Fillimi:** Krijimi i Enum.
```cpp
enum Lendet { MATEMATIKE, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };
```
Krijimi i **Strukturave** te studentit.
```cpp
struct Student {
    string emri;
    string mbiemri;
    string id;
    double notat[NR_LENDEVE];
    double mesatarja;
};
```
Llogaritja e mesatares te studentit me **for-loop**
```cpp
double llogaritMesataren(const Student& s){
double shuma = 0;
for (int i = 0; i < NR_LENDEVE; i++) {
    shuma += s.notat[i];
}
return shuma / NR_LENDEVE;
}
```
##
## Pjesa kryesore (main)
Gjetja e studentit me **mesataren** më të lartë.
```cpp
 int indeksMaxMesatare = 0;
    for (int i = 1; i < NUM_STUDENTEVE; i++) {
        if (studentet[i].mesatarja > studentet[indeksMaxMesatare].mesatarja) {
            indeksMaxMesatare = i;
        }
    }
```
Gjetja e studentit me notën më të lartë **maxNotaIndex[j]** për secilën lëndë:

Ruajtja indeksit te studentit me notën më të lartë
```cpp
 int maxNotaIndex[NR_LENDEVE] = { 0 };
```
Pjesa tjeter per gjetjen e indeksit **i**:
```cpp
    for (int j = 0; j < NR_LENDEVE; j++) {
        for (int i = 1; i < NUM_STUDENTEVE; i++) {
            if (studentet[i].notat[j] > studentet[maxNotaIndex[j]].notat[j]) {
                maxNotaIndex[j] = i;
            }
        }
    }
```
Gjetja e studenteve qe **fitojn burse:**
```cpp
 int bursaFakulteti = 0, bursaShteti = 0;
    for (int i = 0; i < NUM_STUDENTEVE; i++) {
        if (studentet[i].mesatarja >= 8.0) {
            bursaFakulteti++;
        }
        if (studentet[i].mesatarja >= 9.0) {
            bursaShteti++;
        }
    }
```
Gjetja e studenteve qe kane note me te larte se 7 ne **MATEMATIKE:**
```cpp
  int numriStudenteveMatematikeMbi7 = 0;
    for (int i = 0; i < NUM_STUDENTEVE; i++) {
        if (studentet[i].notat[MATEMATIKE] > 7) {
            numriStudenteveMatematikeMbi7++;
        }
    }
```
Shkruajtja e te dhenave te studenteve nga perdoruesi
```cpp
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
```
Vendosja e notave dhe llogaritja e notes mesatare
```cpp
        for (int j = 0; j < NR_LENDEVE; j++) {
            cout << "Lenda " << j + 1 << " ka noten: ";
            cin >> studentet[i].notat[j];
        }

   
```
