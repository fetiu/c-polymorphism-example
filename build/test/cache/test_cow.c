#include "@@@@animal.c"
#include "src/animal.c"
#include "build/temp/_test_cow.c"
#include "src/cow.h"
#include "/usr/local/lib/ruby/gems/2.6.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"




                     ;



void setUp(void)

{

}



void tearDown(void)

{

}



void test_cow_new(void)

{

    struct animal_s* cow = cow_new();

    animal_walk(cow);

}
