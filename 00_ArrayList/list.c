#include "list.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct ArrayList* list_create(){
    struct ArrayList* list = calloc(sizeof(struct ArrayList),0);
    list->data = calloc(sizeof(uint16_t),0);
    list->capacity = 1;
    list->length = 0;
    return list;
}

void list_free(struct ArrayList** list){
    if(*list != NULL && (*list)->data != NULL){
        free((*list)->data);
        (*list)->data = NULL;
    }    
    if (*list != NULL && (*list) != NULL){
        free((*list));
        *list = NULL;
    }
}

void list_append(struct ArrayList* list, uint16_t data){
    if(list->length == list->capacity){
        void* ptr = realloc(list->data, sizeof(uint16_t) * list->capacity * 2);
        if(ptr != NULL){
            list->data = ptr;
            list->capacity = list->capacity * 2;
            size_t diff = list->length * sizeof(uint16_t);
            void* pStart = ((uint8_t*)list->data) + diff * sizeof(uint16_t);
            memset(pStart, 0, diff);
        }else{
            exit(0);
        }
    }

    list->data[list->length] = data;
    list->length++;
}


uint16_t list_get(struct ArrayList* list, uint16_t index){
    if(index <= list->length){
        return list->data[index];
    }
    return 0;
}

uint16_t list_remove(struct ArrayList* list, uint16_t index){
    if(index >= list->length){
        return 0;
    }
    uint16_t temp = list->data[index];
    for(int i = index; i < list->length; i++){
        list->data[i] = list->data[i+1];
    }
    list->length--;
    return temp;
}

uint16_t list_size(struct ArrayList* list){
    return list->length;
}