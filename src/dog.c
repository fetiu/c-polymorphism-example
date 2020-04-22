#include "dog.h"
#include "stdio.h"
#include "stdlib.h"

struct animal_s
{
    void (*walk)(struct animal_s* this);
    const char* name;
};

void dog_walk(struct animal_s* this)
{
    printf("%s the dog walks\n", this->name);
}

struct animal_s* dog_new(const char* name)
{
    struct animal_s* this = malloc(sizeof(struct animal_s));
    this->walk = dog_walk;
    this->name = name;
    return this;
}