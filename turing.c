#include <stdio.h>
#include <string.h>

int main() {

    char input[100];

    printf("Simple Turing Test Chatbot\n");
    printf("Type 'exit' to stop the program\n");

    while(1) {

        printf("\nAsk something: ");
        fgets(input, sizeof(input), stdin);

        if(strstr(input, "exit") != NULL) {
            printf("AI: Goodbye!\n");
            break;
        }

        else if(strstr(input, "hello") != NULL || strstr(input, "hi") != NULL) {
            printf("AI: Hello! Nice to talk with you.\n");
        }

        else if(strstr(input, "name") != NULL) {
            printf("AI: I am a simple AI chatbot.\n");
        }

        else if(strstr(input, "weather") != NULL) {
            printf("AI: The weather seems pleasant today.\n");
        }

        else if(strstr(input, "how are you") != NULL) {
            printf("AI: I am functioning perfectly!\n");
        }

        else {
            printf("AI: Sorry, I don't understand that yet.\n");
        }
    }

    return 0;
}