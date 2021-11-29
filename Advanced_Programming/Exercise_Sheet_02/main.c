#pragma once

#include <stdio.h>
#include <math.h>

#include "exercise_02.h"

int main() {
    setvbuf(stdout, NULL, _IONBF, 0); // simply to display print statements while debugging :)
    //exerciseOne();
    //exerciseTwo();

    exerciseThree();
    return 0;
}