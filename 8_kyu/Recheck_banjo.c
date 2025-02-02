/*
Are You Playing Banjo?

Description:
Create a function which answers the question "Are you playing banjo?".
If your name starts with the letter "R" or lower case "r", you are playing banjo!

The function takes a name as its only argument, and returns one of the following strings:

name + " plays banjo" 
name + " does not play banjo"
Names given are always valid strings.
*/

#include <stdlib.h>

char *are_you_playing_banjo(const char *name) {
	const char *plays = " plays banjo";
    const char *noplays = " does not play banjo";
    size_t name_len = 0;
    size_t suffix_len = 0; //src len
    char *result;
    int i = 0, j = 0;

    while (name[name_len] != '\0') {
        name_len++;
    }

    if (name[0] == 'R' || name[0] == 'r') {
        while (plays[suffix_len] != '\0') {
            suffix_len++;
        }
    } else {
        while (noplays[suffix_len] != '\0') {
            suffix_len++;
        }
    }

    result = (char *)malloc(name_len + suffix_len + 1); // two strings len plus \0
    if (result == NULL) {
        return NULL;
    }
   
    while (i < name_len) {
        result[i] = name[i];
        i++;
    }
    
    if (name[0] == 'R' || name[0] == 'r') {
        while (plays[j] != '\0') {
            result[i] = plays[j];
            i++;
            j++;
        }
    } else {
        j = 0;
        while (noplays[j] != '\0') {
            result[i] = noplays[j];
            i++;
            j++;
        }
    }
    result[i] = '\0';
    return result;
}

