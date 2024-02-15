#include <stddef.h>

#define BASE_CAPACITY 10

void scanArr(int* a, size_t len);
void scanUArr(int** arr_to_ret, size_t* len_to_ret);
void scanVArr(int** arr_to_ret, size_t len);

void nullCheck(void* ptr);
void printArr(int* a, size_t len);
void revert(int* a, size_t len);
int maxArr(int* a, size_t len);
int findlnArr(int* a, int len, int x);
void extractDigits(int* a, size_t len, int x);
int compareArrays(int* a, size_t len_a, int* b, size_t len_b);

void concatArr(int* a, size_t len_a, int* b, size_t len_b, int** arr_to_ret, size_t* len_to_ret);
int findSubArr(int* a, size_t len_a, int* b, size_t len_b);
void removeSubArr(int* a, size_t* len_a, int* b, size_t len_b);


void scanDynArr(int** arr_to_ret, size_t* size_to_ret, size_t* capacity_to_ret);
