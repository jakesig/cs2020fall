/* Jacob Sigman
 * CS-102-E
 * Professor Cusack
 * Homework 6 - Functions C File
*/

int string_length(char* string) {
    int i = 0;
    while (string[++i] != '\0');
    return i;
}

void reverse_string(char* string) {
    int len = string_length(string);
    int i = 1;
    char placeholder = '\0';
    while (i <= len/2) {
	placeholder = string[i-1];
	string[i-1] = string[len-i];
	string[len-i] = placeholder;
	i = i+1;
    }
}