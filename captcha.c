#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    char generatedCaptcha[6];
    char userInput[6];
    int i, attempt = 0;

    srand(time(NULL));

    // Generate random CAPTCHA (letters + numbers)
    for(i = 0; i < 5; i++) {
        int type = rand() % 2;

        if(type == 0)
            generatedCaptcha[i] = 'A' + rand() % 26;   // letter
        else
            generatedCaptcha[i] = '0' + rand() % 10;   // digit
    }

    generatedCaptcha[5] = '\0';

    printf("Generated CAPTCHA: %s\n", generatedCaptcha);

    while(attempt < 3) {

        printf("Enter the CAPTCHA: ");
        scanf("%s", userInput);

        if(strcmp(generatedCaptcha, userInput) == 0) {
            printf("Access Granted! You are verified as human.\n");
            return 0;
        }
        else {
            printf("Incorrect CAPTCHA. Try again.\n");
            attempt++;
        }
    }

    printf("Access Blocked! Too many incorrect attempts.\n");

    return 0;
}