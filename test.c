#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"


int main(int argc, const char *argv[])
{
    hash* HT;
    HT = hash_create();
    linklist r;

    int data[] = {23, 34, 14, 38, 46, 16, 68, 15, 7, 31, 26};
    int key;

    if (HT == NULL){
        return -1;
    }

    for (int i = 0; i < N; i++){
        hash_insert(HT, data[i]);
    }

    printf("search input:\n");
    scanf("%d", &key);
    r = hash_search(HT, key);

    if (r == NULL){
        printf("not found\n");
    }else{
        printf("found:%d, %d\n", key, r->key);
    }

    return 0;
}
