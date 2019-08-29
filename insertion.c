#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char** argv) {
    struct timespec start, end;
    int size = atoi(argv[1]);
    int ary[size];
    for(int i = -1; ++i < size;)
      ary[i] = random() % 10000;

    clock_gettime(CLOCK_REALTIME, &start);
    int tem, k;
    for(int j = -1; ++j < size;){
      tem = ary[j];
      for(k = j; k > 0 && ary[k-1] > tem; k--)
            ary[k] = ary[k-1];
      ary[k] = tem;
    }
    clock_gettime(CLOCK_REALTIME, &end);
    printf("%d %lld\n", size, (long long)(end.tv_nsec - start.tv_nsec));
    return 0;
}