#define N 16
typedef int fix_matrix[N][N];

/* Compute i, k of fixed matrix product */
int fix_probe_ele_opt(fix_matrix A, fix_matrix B, long i, long k) {
    int *Aptr = &A[i][0];   /* Points to elements in row i of A */
    int *Bptr = &B[0][k];   /* Points to elements in column k of B */
    int *Bend = &B[N][k];   /* Marks stopping point for Bptr */
    int result = 0;

    do {
        result += *Aptr * *Bptr;
        Aptr++;
        Bptr += N;
    } while (Bptr != Bend);

    return result;
}
