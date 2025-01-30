# Projekti-ne-vegla
## Pjesa hyrese
**Fillimi:** Krijimi i Strukturav dhe Enum.
```cpp
enum Lendet { MATEMATIK, PROGRAMIM, VEGLAT_SOFTUERIKE, FIZIKE, NR_LENDEVE };

struct Student {
    string emri;
    string mbiemri;
    string id;
    double notat[NR_LENDEVE];
    double mesatarja;
};
