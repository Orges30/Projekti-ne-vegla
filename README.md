# Projekti-ne-vegla
## Pjesa hyrese
**Fillimi:** Krijimi i Strukturave dhe Enum.
```cpp
enum Lendet { MATEMATIK, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };

struct Student {
    string emri;
    string mbiemri;
    string id;
    double notat[NR_LENDEVE];
    double mesatarja;
};
```
**Funksioni:** Gjetja e studentit me mesataren më të lartë.
```cpp
 int indeksMaxMesatare = 0;
    for (int i = 1; i < NUM_STUDENTEVE; i++) {
        if (studentet[i].mesatarja > studentet[indeksMaxMesatare].mesatarja) {
            indeksMaxMesatare = i;
        }
    }
```
