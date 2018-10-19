//Carlos Yael Hernandez Alcala
//A01412016
//A01412016@ITESM.MX

#include <stdio.h>
#include <string.h>

//-------------------------------------------COUNTING WORDS FUNCTION----------------------------------------------------
void Counting_words(char string[]) {

    int count = 0; //Count declaration

    // This loop goes throught the string
    for (int i = 0; i <= strlen(string); i++) {

        if (string[i] == ' ' || string[i]=='\n') { //This "if" counts hoy many words there are
            count++;
        }
    }
    printf("You Wrote %d words", count); //output
}

//-------------------------------------------MAIN FUNCTION----------------------------------------------------

int main() {
    char string[100]; // Declaration of the Variable of the string.

    printf("Give me a string:\n");
    fgets(string, sizeof(string), stdin); // string request
    Counting_words(string); //Counting_words(); call, using string as a parameter.
    return 0;
}