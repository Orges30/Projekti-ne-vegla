# Projekti-ne-vegla
## Pjesa hyrese
**Fillimi:** Krijimi i Enum.
```cpp
enum Lendet { MATEMATIK, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };
```
**Krijimi** i Strukturav te studentit.
```cpp
struct Student {
    string emri;
    string mbiemri;
    string id;
    double notat[NR_LENDEVE];
    double mesatarja;
};
```
**Llogaritja e mesatares te studentit me for-loop**
```cpp
double llogaritMesataren(const Student& s){
double shuma = 0;
for (int i = 0; i < NR_LENDEVE; i++) {
    shuma += s.notat[i];
}
return shuma / NR_LENDEVE;
}
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
