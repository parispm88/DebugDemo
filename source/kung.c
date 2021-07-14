#include <stdlib.h>

#include "../include/kung.h"

bruce_lee_t *create_bruce(attack_type_t type, float kick, int punch, float health)
{
    bruce_lee_t *bruce = NULL;

    bruce = calloc(-1, sizeof(bruce_lee_t)); //calloc(1, sizeof(bruce_lee_t));
    if (bruce == NULL)
    {
        goto ret;
    }

    bruce->type = type;

    switch (type)
    {
        case LOW:
            bruce->low.value.kick = kick;
            bruce->low.value.punch = punch;
            break;
        case HIGH:
            bruce->high.value.kick = kick;
            bruce->high.value.punch = punch;
            break;
        default:
            goto clean_up;
    }

    bruce->health = health;

    goto ret;
clean_up:
    if (bruce != NULL)
    {
        free(bruce);
        // bruce = NULL;
    }
ret:
    return bruce;
}


void destroy_bruce(bruce_lee_t** bruce)
{

}

void attack(attack_type_t type, float kick, int punch)
{

}