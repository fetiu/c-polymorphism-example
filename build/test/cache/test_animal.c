#include "build/temp/_test_animal.c"
#include "src/dog.h"
#include "src/cow.h"
#include "src/animal.h"
#include "/usr/local/lib/ruby/gems/2.6.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"






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
