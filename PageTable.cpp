#include "paging.h"

unsigned int e;

for(e = 0; e < 1024; e++){ //filli all of the 1024 entries in the page table and mapping it with 4 Mb

    PageTable1[e] = (e * 0x1000) | 3;
}