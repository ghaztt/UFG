#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int decimal;
        scanf("%d", &decimal);
        char base4[32]; 

        if (decimal == 0) {
            printf("A\n");
            continue;
        }

        int index = 0;
        while (decimal > 0) {
            int remainder = decimal % 4;
            switch (remainder) {
                case 0:
                    base4[index] = 'A';
                    break;
                case 1:
                    base4[index] = 'C';
                    break;
                case 2:
                    base4[index] = 'G';
                    break;
                case 3:
                    base4[index] = 'T';
                    break;
            }
            decimal /= 4;
            index++;
        }

        
        for (int j = index - 1; j >= 0; j--) {
            printf("%c", base4[j]);
        }
        printf("\n");
    }

    return 0;
}

