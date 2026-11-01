#include <stdio.h>

#define MAX_ELEM 25


struct permutare {
  int elemente[MAX_ELEM];
  int n;
};


int gcd(int a, int b) {
    while( b!= 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int cmmmc(int a, int b) {
    if(a == 0 || b == 0 ) {
        return 0;
    }
    return(a / gcd(a, b)) * b;
}

int grad_permutare(const struct permutare p) {
    int vizitat[MAX_ELEM] = {0};
    int grad = 1;

    for(int i = 0; i < p.n; i++) {
        if(!vizitat[i]) {
            int lungime_ciclu = 0;
            int current = i;

            while(!vizitat[current]) {
                vizitat[current] = 1;
                current = p.elemente[current] - 1;
                lungime_ciclu++;
            }

            grad = cmmmc(grad, lungime_ciclu);
        }
    }
    return grad;
}
int main(void) {
  int nr_permutari;
  scanf("%d", &nr_permutari);
  struct permutare p;
  for(int i = 0; i < nr_permutari; i++) {
    scanf("%d", &p.n);
    for(int j = 0; j < p.n; j++) {
      scanf("%d", &p.elemente[j]);
    }
    printf("%d\n", grad_permutare(p));
  }
}