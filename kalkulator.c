#include <stdio.h>
/*

 __           __ __           __         __              
|  |--.---.-.|  |  |--.--.--.|  |.---.-.|  |_.-----.----.
|    <|  _  ||  |    <|  |  ||  ||  _  ||   _|  _  |   _|
|__|__|___._||__|__|__|_____||__||___._||____|_____|__|  

[c] Kodiran od strane : https://github.com/Stane034
[i] Kalkulator koji ce vam sluziti za akcije sa 2 broja.
[d] Skolski rad.

*/
int main() {
    char unos[20];
    printf("[c] Dobrodosao na Stane034's kalkulator\n[?] Unesi zeljenu opciju ( sabiranje / oduzimanje / mnozenje / deljenje ) : ");
    scanf("%19s", unos);
    odradi(unos);
    return 0;
}

void odradi(arg) { 
   char sabiranje[] = "sabiranje";
   char oduzimanje[] = "oduzimanje";
   char mnozenje[] = "mnozenje";
   char deljenje[] = "deljenje";
   if (strcmp(arg, sabiranje) == 0) { 
       trazibrojeve("sabiranje");
   }
   else if (strcmp(arg, oduzimanje) == 0) { 
       trazibrojeve("oduzimanje");
   }
   else if (strcmp(arg, mnozenje) == 0) { 
       trazibrojeve("mnozenje");
   }
   else if (strcmp(arg, deljenje) == 0) { 
       trazibrojeve("deljenje");
   }
   else { 
       obrisiConsole();
       printf("[x] Greska : uneo si neispravnu opciju");
   }
}

void obrisiConsole() { 
   printf("\e[1;1H\e[2J");
}

int trazibrojeve(opcija) {
    int broj1;
    int broj2;
    char sabiranje[] = "sabiranje";
    char oduzimanje[] = "oduzimanje";
    char mnozenje[] = "mnozenje";
    char deljenje[] = "deljenje";
    obrisiConsole();
    printf("[?] Unesi broj 1 : ");
    scanf("%d", &broj1);
    printf("[?] Unesi broj 2 : ");
    scanf("%d", &broj2);
    if (strcmp(opcija, sabiranje) == 0) {
       izvrsiSabiranje(broj1, broj2); 
    }
    else if (strcmp(opcija, oduzimanje) == 0) {
       izvrsiOduzimanje(broj1, broj2); 
    }
    else if (strcmp(opcija, mnozenje) == 0) {
       izvrsiMnozenje(broj1, broj2); 
    }
    else if (strcmp(opcija, deljenje) == 0) {
       izvrsiDeljenje(broj1, broj2); 
    }
    return 0;
}

int izvrsiSabiranje(broj1,broj2) { 
    printf("[i] Rezultat sabiranja je : %d", broj1+broj2);
    return broj1+broj2;
}

int izvrsiOduzimanje(broj1,broj2) { 
    printf("[i] Rezultat oduzimanja je : %d", broj1-broj2);
    return broj1-broj2;
}

int izvrsiMnozenje(broj1,broj2) { 
    printf("[i] Rezultat mnozenja je : %d", broj1*broj2);
    return broj1*broj2;
}

int izvrsiDeljenje(broj1,broj2) { 
    printf("[i] Rezultat deljenja je : %d", broj1/broj2);
    return broj1/broj2;
}