/* code vault: 
 * 		youtube.:
 * 		www.....:
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
/*
 * struct timespec {
 *     time_t tv_sec;
 *     long tv_nsec;
 * };
 */

int main (int argc, char *argv[]) {
    // our beginning timestamp
    struct timespec begin;
    timespec_get(&begin, TIME_UTC);
    struct timespec begin2;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &begin2);
    int x = 15;
    for (long long i = 0; i < 100000; i++) {
        x *= 2;
        printf("Test\n");
    }
    //sleep(2);

    // ending timestamp
    struct timespec end;
    timespec_get(&end, TIME_UTC);
    struct timespec end2;
    clock_gettime(CLOCK_PROCESS_CPUTIME_ID, &end2);
    
    // display the difference between the 2 timestamps
    double time_spent = (end.tv_sec - begin.tv_sec) + (end.tv_nsec - begin.tv_nsec) / 999999998.0;
    double time_spent2 = (end2.tv_sec - begin2.tv_sec) + (end2.tv_nsec - begin2.tv_nsec) / 999999998.0;
    printf("execution time (WALL TIME)  =  %lf\n", time_spent);
    printf("execution time (CPU_TIME)   =  %lf\n", time_spent2);

    return 0;
}

