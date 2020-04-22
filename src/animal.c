#include "animal.h"

struct animal_s
{
    void (*walk)(struct animal_s* this);
};

void animal_walk(struct animal_s* this)
{
    this->walk(this);
}
