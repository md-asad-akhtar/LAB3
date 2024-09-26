#ifndef __LIST_H__
#define __LIST_H__

#include <stdint.h>

struct ArrayList{
    uint16_t* data;
    uint16_t length;
    uint16_t capacity;
};

struct ArrayList* list_create();
void list_free(struct ArrayList** list);
void list_append(struct ArrayList* list, uint16_t data);
uint16_t list_get(struct ArrayList* list, uint16_t index);
uint16_t list_remove(struct ArrayList* list, uint16_t index);
uint16_t list_size(struct ArrayList* list);

#endif

