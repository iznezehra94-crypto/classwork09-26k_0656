#include<stdio.h>
#include<string.h>

int main()
{
    char feedback[300];
    char sub1[] = "bad";
    char sub2[] = "good";
    char replace[] = "not good";
    char temp[300];
    char *ptr;

    printf("Enter customer feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    printf("\nTotal characters: %d", strlen(feedback));

    if(strstr(feedback, sub1) || strstr(feedback, sub2))
    {
        printf("\nThe word bad or good exists.");
    }
    else
    {
        printf("\nNeither bad nor good exists.");
    }

    ptr = strstr(feedback, sub1);

    if(ptr != NULL)
    {
        strcpy(temp, ptr + 3);

        *ptr = '\0';

        strcat(feedback, replace);
        strcat(feedback, temp);

        printf("\nUpdated review: %s", feedback);
    }

    return 0;
}
