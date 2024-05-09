#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void wishme() {
    time_t now = time(NULL);
    struct tm *timeinfo = localtime(&now);

    if (timeinfo->tm_hour < 12) {
        printf("Good Morning Sir\n");
        system("espeak \"Good Morning Sir\"");
    } else if (timeinfo->tm_hour >= 12 && timeinfo->tm_hour <= 16) {
        printf("Good Afternoon sir\n");
        system("espeak \"Good Afternoon sir\"");
    } else if (timeinfo->tm_hour > 16 && timeinfo->tm_hour < 24) {
        printf("Good Evening sir\n");
        system("espeak \"Good Evening sir\"");
    }
}

void datetime() {
    time_t now = time(NULL);
    char *dt = ctime(&now);
    printf("The date and time is:\n%s", dt);
}

int main() {
    system("cls");

    printf("\t\t\t<========== W E L C O M E ====================>\n");
    printf("\t\t\t<========== I'M A VIRTUAL ASSISTANT ==========>\n");
    printf("\t\t\t<========== MY NAME IS Nihal =================>\n");
    printf("\t\t\t<========== I'M HERE TO HELP YOU ===========>\n\n");

    char password[20];
    char ch[100];

    do {
        printf("=======================\n");
        printf("| ENTER YOUR PASSWORD |\n");
        printf("=======================\n\n");
        system("espeak \"Enter your password\"");
        gets(password);

        if (strcmp(password, "pratham") == 0) {
            printf("\n<=========================================>\n\n");
            wishme();
            do {
                printf("\n<===============================================>\n\n");
                printf("\nHow can I help you sir....\n\n");
                system("espeak \"How can I help you sir\"");

                printf("Your query ===> ");
                gets(ch);
                printf("\nHere is the result for your query ===> ");

                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0) {
                    printf("Hello sir.....\n");
                    system("espeak \"Hello sir\"");
                } else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0) {
                    printf("Good Bye sir, have a nice day!!!!\n");
                    system("espeak \"Good Bye sir, have a nice day\"");
                    exit(0);
                } else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0) {
                    printf("I'm a virtual assistant created by Aditi !!!\n");
                    system("espeak \"I am a virtual assistant created by Aditi\"");
                } else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0) {
                    printf("I'm good sir, tell me how can I help you..\n");
                    system("espeak \"I'm good sir, tell me how can I help you\"");
                } else if (strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0) {
                    datetime();
                } else if (strcmp(ch, "open notepad") == 0) {
                    printf("Opening notepad.....\n");
                    system("espeak \"Opening notepad\"");
                    system("start notepad.exe");
                } else if (strcmp(ch, "open google") == 0) {
                    printf("Opening Google.....\n");
                    system("espeak \"Opening Google\"");
                    system("start https://www.google.com");
                } else if (strcmp(ch, "open youtube") == 0) {
                    printf("Opening YouTube.....\n");
                    system("espeak \"Opening YouTube\"");
                    system("start https://www.youtube.com");
                } else if (strcmp(ch, "open instagram") == 0) {
                    printf("Opening Instagram.....\n");
                    system("espeak \"Opening Instagram\"");
                    system("start https://www.instagram.com");

                } else if (strcmp(ch, "open chatgpt") == 0) {
                    printf("Opening chatgpt.....\n");
                    system("espeak \"Opening chatgpt\"");
                    system("start https://www.chatgpt.com");

                } else if (strcmp(ch, "open whatsapp") == 0) {
                    printf("Opening whatsapp.....\n");
                    system("espeak \"Opening whatsapp\"");
                    system("start https://www.whatsappweb.com");

                } else {
                    printf("Sorry could not understand your query, please try again !!!\n");
                    system("espeak \"Sorry could not understand your query, please try again\"");
                }
            } while (1);
        } else {
            system("cls");
            printf("\t\t\t<=============== W E L C O M E ===================>\n");
            printf("\t\t\t<=============== I'M VIRTUAL ASSISTANT ===========>\n");
            printf("\t\t\t<=============== MY NAME IS Nihal ================>\n");
            printf("\t\t\t<=============== I'M HERE TO HELP YOU AND MAKE YOUR LIFE EASY ===========>\n\n");

            printf("===========\nX Incorrect Password X\n=============\n\n");
            system("espeak \"Incorrect Password, Please enter correct password\"");
        }
    } while (1);

    return 0;
}
