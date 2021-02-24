#include <stdio.h>
#include <stdlib.h>

#include "words_comparer.h"

enum { WORDS_LENGTH = 6 };

int main(void)
{
    size_t i;
    const char* words[WORDS_LENGTH] = {
        "premium", "level", "cultured",
        "moaning", "skinny", "curve"
    };

    puts("\n== sort ascending ==");
    qsort(words, WORDS_LENGTH, sizeof(const char*), compare_words);
    for (i = 0; i < WORDS_LENGTH; ++i) {
        printf("%s\n", words[i]);
    }

    puts("\n== sort descending ==");
    qsort(words, WORDS_LENGTH, sizeof(const char*), compare_words_desc);
    for (i = 0; i < WORDS_LENGTH; ++i) {
        printf("%s\n", words[i]);
    }

    return 0;
}



