#include <stdio.h>
#include <stdlib.h>

/* A lookup table of GUID vs their favourite thing */
char* favouriteThing(unsigned long guid){
    switch (guid){
        case 2785066: // David
            return "a model train";
        default:
            return NULL;
    }
}

int main(int argc, char* argv[]){
    if (argc < 2){ // no argument provided
        printf("ERR: Please provide the student's GUID as argument.\n");
        return 1;
    } else {
        char* end;
        unsigned long guid = strtoul(argv[1], &end, 10);
        char* fav = favouriteThing(guid);
        if (!fav) { // input is invalid or no such student
            printf("ERR: No student with GUID %lu is found.\n", guid);
            return 1;
        } else {
            printf("The favourite thing for student %lu is %s.\n", guid, fav);
            return 0;
        }
    }
}
