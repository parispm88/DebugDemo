#ifndef DD_KUNG_H
#define DD_KUNG_H

typedef enum attack_type
{
    LOW,
    HIGH
} attack_type_t;

typedef struct low_attack
{
    float kick;
    int punch;
} low_attack_t;

typedef struct high_attack
{
    float kick;
    int punch;
} high_attack_t;

typedef struct bruce_lee
{
    union 
    {
        low_attack_t low;
        high_attack_t high;
    };
    float health;
} bruce_lee_t;

bruce_lee_t *create_bruce(attack_type_t type, float kick, int punch, float health);

void attack(attack_type_t type, float kick, int punch);

#endif