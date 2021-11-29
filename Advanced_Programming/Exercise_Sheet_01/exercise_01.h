#ifndef ADVANCED_PROGRAMMING_EXERCISE_01_H
#define ADVANCED_PROGRAMMING_EXERCISE_01_H

void printCharArray(const char array[]){
    printf("%s", array );
    printf("\n");
}

void exerciseOne(){
    for (int i = 0; i < 10; ++i) {
        char one[] = {'C', '+', '+'};
        char two[] = {'C', '+', '+', '\0'};
        char three[] = "foo";
        char four[3] = "foo";

        printCharArray(one);
        printCharArray(two);
        printCharArray(three);
        printCharArray(four);
        printf("\n");
    }
}

void exerciseTwo(){
    printf("Size_of_char_\t%u\n", sizeof(char));
    printf("Size_of_char_\t%u\n", sizeof(int));
    printf("Size_of_char_\t%u\n", sizeof(long));
    printf("Size_of_char_\t%u\n", sizeof(short));
    printf("Size_of_char_\t%u\n", sizeof(double));
    printf("Size_of_char_\t%u\n", sizeof(float));
}

void copy(char* source, char* dest){
    while ((*dest++ = *source++));
}

void exerciseThree()
{
    char* a = "Aaaaaaaaa";
    char* b = "Bbbbbbbbb";

    printf("%s", a);
    printf("\n");
    printf("%s", b);
    printf("\n");

    copy(a, b);

    printf("%s", a);
    printf("\n");
    printf("%s", b);
    printf("\n");
}

#endif //ADVANCED_PROGRAMMING_EXERCISE_01_H
