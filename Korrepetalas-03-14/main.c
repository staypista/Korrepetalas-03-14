/**
 * main.c
 *
 * Created: 2017. 03. 14. 22:04:32
 * Author : Nagy Zsolt
 */
#include <stdio.h>
#include <stdlib.h>

/**Programozás korrepetálás első heti házifeladat.
 * Téma: syntaxis és alap algoritmus gyakorlás.
 * Kérem a teljesítési időket rögzítse!
 * A feladatokat a kiírás alá végezze el.
 * Célidő: 11 perc + 4 perc(bónusz)
 * Superuser idő: 5 perc
 */

 double replusz(double r1, double r2);

int main()
{
    printf("*** 1. feladat ***\n");
    /** 1. Feladat:
     *  Adja össze "a" és "b" változót úgy hogy az eredmény "c" változóban képződjön.
     *  Szorozza össze "a" és "b" változót úgy hogy az eredmény "c" változóban képződjön.
     *  Az eredményeket printf függvénnyel írassa ki mindkét esetben.
     *  Célidő: 2 perc
     *  Teljesítési idő:
     */
    unsigned char a=10, b=39, c=0;
    int eredmeny1 = a + b;
    int eredmeny2 = a * b;
    printf("Osszeg:%d \t Szorzat:%d", eredmeny1, eredmeny2);

    printf("\n\n*** 2. feladat ***\n");
    /** 2. Feladat:
     *  Ossza el "a" és "b" változót úgy hogy az osztás eredményét és a maradékot is
     *  kiiratja printf függvénnyel.
     *  Célidő: 3 perc
     *  Teljesítési idő:
     */
    a=193;
    b=7;
    double eredmeny3 = a/b;
    printf("Hanyados:%3.5f", eredmeny3);

    printf("\n\n*** 3. feladat ***\n");
    /** 3. Feladat:
     *  Készítsen egy olyan feltételt amely megvizsgálja "a" változó nagyobb-e "b"
     *  változónál. Ha az állítás igaz printf függvénnyel írjon ki egy tetszőleges
     *  szöveget a képernyőre.
     *  Célidő: 3 perc
     *  Teljesítési idő:
     */

    if(a > b){
        printf("Tetszoleges szoveg");
    }

    printf("\n\n*** 4. feladat ***\n");
     /** 4. Feladat:
     *  Készítsen egy olyan ciklust mely számokat ír ki printf függvénnyel 10-től
     *  57-ig. A számokat tabulárral válassza el egymástól.
     *  tabulátor -> "\t"  sorelemelés -> "\n"
     *  Célidő: 3 perc
     *  Teljesítési idő:
     */
    int i;
    for(i=10;i<57;i++) printf("%d\t", i);

     printf("\n\n*** Bunusz feladat ***\n");
     /** Bónusz Feladat:
     *  Készítsen egy olyan függvényt mely a bemenetében vár 2 változót és a
     *  visszatérési értékben a 2 beadott változó replusszával tér vissza.
     *
     *  Célidő: infinit perc
     *  Teljesítési idő:
     */
    double eredmeny4 = replusz(3.14, 12.64);

    printf("%f", eredmeny4);


    return 0;
}

double replusz(double r1, double r2){
    double szamlalo, nevezo, eredmeny;
    szamlalo = r1 * r2;
    nevezo = r1 + r2;
    eredmeny = szamlalo / nevezo;
    return eredmeny;
}
