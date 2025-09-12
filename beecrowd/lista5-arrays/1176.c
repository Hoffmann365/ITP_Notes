#include <stdio.h>

long long fib(int N) {
    long long numbers[N+1];
    for (int i = 0; i <= N; i++) {
        if (i == 0) {
            numbers[i] = 0;
        } else if (i == 1) {
            numbers[i] = 1;
        } else {
            numbers[i] = numbers[i-1] + numbers[i-2];
        }
    }
    return numbers[N];
}

int main() {
    int count;
    scanf("%d", &count);
    while (count--) {
        int N;
        long long result;
        scanf("%d", &N);

        result = fib(N);
        printf("Fib(%d) = %lld\n", N, result);
    }
    return 0;
}