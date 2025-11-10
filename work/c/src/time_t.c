#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <limits.h>
 
int main() {
    time_t epoch = INT_MIN;
    printf("%jd seconds since the epoch began\n", (intmax_t)epoch);
    printf("%s", asctime(gmtime(&epoch)));
    printf("%ld\n", sizeof(time_t));
}
