// Are You Playing Banjo?

#include <stdlib.h>
#include <criterion/criterion.h>

char* are_you_playing_banjo(const char*);

static void do_test(const char* input, const char* expected) {
  char* actual = are_you_playing_banjo(input);
  cr_assert_str_eq(actual, expected,
    "for name = \"%s\" expected \"%s\"\nbut got \"%s\"",
    input, expected, actual
  );
  free(actual);
}

Test(should_pass_all_the_tests_provided, sample_tests) {
  do_test("Martin", "Martin does not play banjo");
  do_test("Rikke", "Rikke plays banjo");
  do_test("bravo", "bravo does not play banjo");
  do_test("rolf", "rolf plays banjo");
}

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

