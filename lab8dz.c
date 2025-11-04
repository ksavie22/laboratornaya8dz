#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
        int a, n;
        double sum = 0.0;

        printf("¬ведите значение a: ");
        scanf("%d", &a);
        printf("¬ведите значение n: ");
        scanf("%d", &n);

        
        for (int i = 0; i <= n; i++) {
            double chisl = 1.0;

            
            for (int j = 0; j <= i; j++) {
                chisl *= (a + j);
            }

            sum += 1.0 / chisl;
        }

        printf("—умма р€да: %.10f\n", sum);

        return 0;
    }