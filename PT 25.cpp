//WAP to find prime numbers from 1 to 300.	
#include<stdio.h>
int main() {
    int num, i;
    for (num = 2; num <= 300; num++) {
        int Prime = 1;
        for (i = 2; i< num; i++) {
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime) {
            printf("%d\t", i);
        }
    }
    return 0;
}




