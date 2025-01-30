# Projekti ne vegla
## Pjesa hyrese
**Fillimi:** Krijimi i Enum.
```cpp
enum Lendet { MATEMATIK, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };
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

Gjetja e studentit me mesataren më të lartë me **for-loop**.
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
