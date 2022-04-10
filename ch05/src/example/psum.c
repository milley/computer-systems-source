#include <stdio.h>
#include <time.h>

#define MAX_LEN 100000

/* Compute prefix sum of vector a */
void psum1(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    for (i = 1; i < n; i++)
	p[i] = p[i - 1] + a[i];
}

void psum2(float a[], float p[], long n)
{
    long i;
    p[0] = a[0];
    for (i = 1; i < n - 1; i += 2) {
        float mid_val = p[i - 1] + a[i];
	p[i] = mid_val;
	p[i + 1] = mid_val + a[i + 1];
    }

    /* For even n, finish remaing element */
    if (i < n)
	p[i] = p[i - 1] + a[i];
}



int main()
{
    float a[MAX_LEN] = {0};
    float p[MAX_LEN] = {0};
    for (int i = 0; i < MAX_LEN; ++i) {
        a[i] = i + 0.1;
    }

    clock_t t;
    t = clock();
    psum1(a, p, MAX_LEN);
    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("psum1() took %f seconds to execute \n", time_taken);

    t = clock();
    psum2(a, p, MAX_LEN);
    t = clock() - t;
    time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("psum2() took %f seconds to execute \n", time_taken);
    return 0;    
}

