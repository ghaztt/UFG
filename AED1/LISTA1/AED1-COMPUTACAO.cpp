#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int tip[K];
    for (int i = 0; i < K; i++) {
        tip[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        int rot;
        scanf("%d", &rot);
        tip[rot - 1]++;
    }

    int min_rot = tip[0];
    for (int i = 1; i < K; i++) {
        if (tip[i] < min_rot) {
            min_rot = tip[i];
        }
    }

    printf("%d\n", min_rot);

    return 0;
}

