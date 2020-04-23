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

void test_animal_cow_walk(void)
{
    struct animal_s* cow = cow_new(true);
    animal_walk(cow);
    free(cow);

    cow = cow_new(false);
    animal_walk(cow);
    free(cow);
}

void test_animal_dog_walk(void)
{
    struct animal_s* dog = dog_new("choco");
    animal_walk(dog);
    free(dog);

    dog = dog_new("happy");
    animal_walk(dog);
    free(dog);
}
