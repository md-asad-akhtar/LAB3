#include "list.h"
#include <stdio.h>

#define NUMBER 8

void printList(const struct ArrayList* list){
    printf("List: ");
    for(int i = 0; i < list->capacity; i++){
        printf("%u ",list->data[i]);
    }
    printf("\n");
}

int main(){
    struct ArrayList* list = list_create();
    printList(list);
    for(int i = 0; i < NUMBER; i++){
        list_append(list, i);
        printList(list);
    }

    printList(list);
    printf("Get\n");
    for(int i = 0; i < NUMBER; i++){
        printf("Get: %u\n",list_get(list, i));
    }
    printf("Bad Get\n");
    for(int i = NUMBER; i < NUMBER*2; i++){
        printf("Bad Get: %u\n",list_get(list, i));
    }
    printList(list);
    for(int i = 0; i < NUMBER; i++){
        printf("Removed: %u\n",list_remove(list, 0));
        printList(list);
    }
    for(int i = 0; i < NUMBER; i++){
        printf("Bad remove: %u\n",list_remove(list, 0));
        printList(list);
    }
    printf("Free\n");
    list_free(&list);
    printf("Bad Free\n");
    list_free(&list);
    return 0;
}