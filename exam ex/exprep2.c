#include <unistd.h>
#include <stdio.h>

int countWordOccurrences(const char *str, const char *word) {
    int count = 0;
    
    if (!str || !word || *word == '\0') return 0;
    
    while (*str != '\0') {
        // Skip leading spaces
        while (*str == ' ') {
            str++;
        }
        if (*str == '\0') break;
        
        // Try to match the word
        const char *s = str;
        const char *w = word;
        while (*s != '\0' && *w != '\0' && *s == *w) {
            s++;
            w++;
        }
        
        // Check if we matched the full word
        if (*w == '\0') {
            // Full word matched
            // Ensure it's bounded by space or end of string
            if (*s == ' ' || *s == '\0') {
                count++;
                str = s;  // Move past the matched word
            } else {
                str++;  // Part of a larger word, move one char
            }
        } else {
            // No match, move to next character
            str++;
        }
    }
    
    return count;
}

int main() {
    int y = countWordOccurrences("world world world", "world");
    printf("%d\n", y);  // Should print 3
    return 0;
}
