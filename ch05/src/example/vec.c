#include <stdio.h>
#include <stdlib.h>

typedef long data_t;
/* Create abstract data type for vector */
typedef struct {
    long len;
    data_t *data;
} vec_rec, *vec_ptr;


/* Create vector of specified length */
vec_ptr new_vec(long len)
{
    /* Allocate header structure */
    vec_ptr result = (vec_ptr)malloc(sizeof(vec_rec));
    data_t *data = NULL;
    if (!result)
	return NULL;	/* Couldn't allocate storage */
    result->len = len;
    /* Allocate array */
    if (len > 0) {
        data = (data_t *)calloc(len, sizeof(data_t));
	if (!data) {
	    free((void *)result);
	    return NULL;	/* Couldn't allocate storage */
	}
    }
    /* Data will either be NULL or allocated array */
    result->data = data;
    return result;
}

/**
 * Retrieve vector element and store at dest.
 * Return 0 (out of bounds) or 1(successful)
 */
int get_vec_element(vec_ptr v, long index, data_t *dest)
{
    if (index < 0 || index >= v->len)
	return 0;
    *dest = v->data[index];
    return 1;
}

/**
 * Set vector element by index and val
 * Return 0 (out of bounds) or 1(successful)
 */
int set_vec_element(vec_ptr v, long index, data_t *val)
{
    if (index < 0 || index >= v->len)
	return 0;
    v->data[index] = *val;
    return 1;
}

/* Return length of vector */
long vec_length(vec_ptr v)
{
    return v->len;
}

int main()
{
    vec_ptr vec = new_vec(100);
    for (long i = 0; i < 100; i++) {
	int ret = set_vec_element(vec, i, &i);
	if (!ret)
	    exit(1);
    }
    printf("The length of vec is: %ld\n", vec_length(vec));

    data_t dest;
    long index = 10;
    int ret = get_vec_element(vec, index, &dest);
    if (ret) {
        printf("The index 10 of element in vec is: %ld\n", dest);
    } else {
        printf("get_vec_element failed");
    }

    return 0;
}

