#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

/*
    Source by Microsoft (https://docs.microsoft.com/en-us/cpp)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int compare(const void* arg1, const void* arg2);

int main(int argc, char** argv) {
    int i;
    argv++;
    argc--;

    qsort((void*)argv, (size_t)argc, sizeof(char*), compare);

    for (i = 0; i < argc; ++i) {
        printf(" %s", argv[i]);
    }
        
    printf("\n");

    _getch();
    return 0;
}

int compare(const void* arg1, const void* arg2) {
    return _stricmp(*(char**)arg1, *(char**)arg2);
}