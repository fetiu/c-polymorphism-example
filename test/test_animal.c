#include "unity.h"

#include "animal.h"

#include "cow.h"
#include "dog.h"

void setUp(void)
{
}

void tearDown(void)
{
}

struct collection;

void test_animal_walk(void)
{
    struct animal_s* cow = cow_new();
    animal_walk(cow);

    struct animal_s* dog = dog_new("choco");
    animal_walk(dog);
}
