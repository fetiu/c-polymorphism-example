#include "cow.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

struct animal_s
{
    void (*walk)(struct animal_s* this);
    bool horn;
};

static void cow_walk(struct animal_s* this)
{
    printf("cow %s horn walks\n", (this->horn)?"with":"without");
}

struct animal_s* cow_new(void)
{
    struct animal_s* this = malloc(sizeof(struct animal_s));
    this->walk = cow_walk;
    this->horn = true;
    return this;
}
