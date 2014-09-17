//
//    mergesort.c
//
//    Author: Sebastian Mach
//    Created on Sep. 17 2014
//

#include "mergesort.h"



void m_mergesort(elem_t *head)
{
    printf("Calling mergesort\n");
}


void ziplist(elem_t *list1, elem_t *list2, elem_t *newList)
{

}


void splitlist(elem_t *originalList, size_t size, elem_t *newList1, elem_t *newList2)
{

}


size_t lenlist(elem_t *head)
{
    size_t  length = 0;
    elem_t *cursor = head;

    while (cursor->n != NULL)
    {
        length ++;
        cursor = cursor->n;
    }

    return length;
}
