#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int inverted_A = 0;
    int inverted_B = 0;

    
    while (A > 0) {
        inverted_A = inverted_A * 10 + (A % 10);
        A /= 10;
    }

    while (B > 0) {
        inverted_B = inverted_B * 10 + (B % 10);
        B /= 10;
    }

    if (inverted_A > inverted_B) {
        printf("%d\n", inverted_A);
    } else {
        printf("%d\n", inverted_B);
    }

    return 0;
}

	
	
	
	
	

