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

    switch (type)
    {
        case LOW:
            bruce->low.kick = kick;
            bruce->low.punch = punch;
            break;
        case HIGH:
            bruce->high.kick = kick;
            bruce->high.punch = punch;
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
