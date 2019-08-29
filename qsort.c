#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int cmp(const void* a,const void* b){
  return *(int *)a - *(int *)b;
}

int main(int argc, char** argv) {
    struct timespec start, end;
    int size = atoi(argv[1]);
    int ary[size];
    for(int i = -1; ++i < size;)
      ary[i] = random() % 10000;

    clock_gettime(CLOCK_REALTIME, &start);
    qsort(ary, size, sizeof(ary[0]), cmp); 
    clock_gettime(CLOCK_REALTIME, &end);
    printf("%d %lld\n", size, (long long)(end.tv_nsec - start.tv_nsec));
    return 0;
}