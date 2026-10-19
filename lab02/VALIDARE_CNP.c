#include <stdio.h>

int main() {
    int ajutator[]={2,7,9,1,4,6,3,5,8,2,7,9};
    char cifra_CNP;
    int suma = 0;
    int i = 0;
    int ultima_cifra, luna1, luna2, ziua1, ziua2;
    while( i <= 12) {
        scanf("%c", &cifra_CNP);
        int valoare = cifra_CNP - '0';
        ultima_cifra = cifra_CNP - '0';
        /*if( i == 3) {
            luna1 = valoare;
        }
        if( i == 4) {
            luna2 = valoare;

        }
        if( i == 5) {
            ziua1 = valoare;

        }
        if( i == 6) {
            ziua2 = valoare;
        }*/
        switch(i) {
            case 3:
                luna1 = valoare;
                break;
            case 4:
                luna2 = valoare;
                break;
            case 5:
                ziua1 = valoare;
                break;
            case 6:
                ziua2 = valoare;
            default:
                break;
        }
        if(i < 12) {
            valoare *= ajutator[i++];
            suma += valoare;
        }
        else if(i == 12) {
            break;
        }
    }
    int control = suma % 11;
    int luna = luna1 * 10 + luna2;
    int ziua = ziua1 * 10 + ziua2;
    if(control == 10) {
        control = 1;
    }
    if(control != ultima_cifra || (luna > 12 || luna < 1 || ziua < 1 || ziua > 31)||(luna % 2 == 0 && luna < 8 && ziua > 30)||(luna % 2 != 0 && luna >= 8 && ziua > 30)||(luna == 2 && ziua > 29)){ 
        printf("INVALID"); 

    }
    else {
        printf("VALID");
    }
    return 0;
}