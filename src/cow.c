#include "cow.h"
#include "stdio.h"
#include "stdlib.h"

struct animal_s
{
    void (*walk)(struct animal_s* this);
    bool has_horn;
};

static void cow_walk(struct animal_s* this)
{
    printf("cow %s horn walks\n", this->has_horn? "with" : "without");
}

struct animal_s* cow_new(bool horn)
{
    struct animal_s* this = malloc(sizeof(struct animal_s));
    this->walk = cow_walk;
    this->has_horn = horn;
    return this;
}

