#include "list.h"
#include <stdlib.h>

struct ArrayList* list_create(){
    struct ArrayList* list = malloc(sizeof(struct ArrayList));
    list->data = malloc(sizeof(uint16_t));
    list->capacity = 1;
    list->length = 0;
    return list;
}

void list_free(struct ArrayList** list){
    free((*list)->data);
    free((*list));
}

void list_append(struct ArrayList* list, uint16_t data){
    if(list->length == list->capacity){
        void* ptr = realloc(list->data, sizeof(uint16_t) * list->capacity * 2);
        list->data = ptr;
        list->capacity = list->capacity * 2;
    }
    list->data[list->length] = data;
    list->length++;
}


uint16_t list_get(struct ArrayList* list, uint16_t index){
    return list->data[index];
}

uint16_t list_remove(struct ArrayList* list, uint16_t index){
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