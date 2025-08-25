#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int d1, m1, y1, d2, m2, y2;
    scanf("%2d-%2d-%4d", &d1, &m1, &y1);
    scanf("%2d-%2d-%4d", &d2, &m2, &y2);

    int month[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int ans = 0;

    while (1) {
        long long x = (long long)d1*1000000 + (long long)m1*10000 + y1;
        if (x % 4 == 0 || x % 7 == 0) ans++;

        // next day
        d1++;
        if (m1 == 2) {
            int leap = (y1 % 400 == 0) || (y1 % 4 == 0 && y1 % 100 != 0);
            if ((leap && d1 > 29) || (!leap && d1 > 28)) { d1 = 1; m1++; }
        } else if (d1 > month[m1-1]) { d1 = 1; m1++; }
        if (m1 > 12) { m1 = 1; y1++; }

        if (d1 == d2 && m1 == m2 && y1 == y2) {
            long long x2 = (long long)d1*1000000 + (long long)m1*10000 + y1;
            if (x2 % 4 == 0 || x2 % 7 == 0) ans++;
            break;
        }
    }

    printf("%d\n", ans);
    return 0;
}
