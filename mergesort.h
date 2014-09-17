//
//    mergesort.h
//
//    Author: Sebastian Mach
//    Created on Sep. 17 2014
//

#include <stdlib.h> 
#include <stdio.h>


typedef struct elem_t {
    int e;
    struct elem_t *n;
} elem_t;


void m_mergesort(elem_t *head);
void ziplist(elem_t *list1, elem_t *list2, elem_t *newList);
void splitlist(elem_t *originalList, size_t size, elem_t *newList1, elem_t *newList2);
