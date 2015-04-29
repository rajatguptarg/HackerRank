/*
 * USER: rajat_gupta712
 * TASK: Project Euler Problem #02
 * ALGO: ad-hoc
 * TAG: Project Euler HackerRank
 */

#include <bits/stdc++.h>

#define ll long long int
#define ull unsigned long long int

using namespace std;

int main(int argc, char *argv[]) {
    ll T;
    scanf("%lld", &T);
    while(T--) {
        ull i, N, a, b, c, sum=0;
        scanf("%llu", &N);
        a = c = 0;
        b = 1;
        i = 0;
        while(c <= N) {
            c = a + b;
            a = b;
            b = c;
            if((c%2 == 0) &&(c <= N)) {
                sum += c;
            }
        }
        printf("%llu\n", sum);
    }
    return 0;
}
