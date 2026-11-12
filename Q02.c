#include<stdio.h>
#include<string.h>

int main()
{
    char name[10][50];
    char temp[50];
    int i, j;

    for(i=0; i<10; i++)
    {
        printf("Enter name of student %d : ", i+1);
        fgets(name[i], sizeof(name[i]), stdin);

        for(j=0; name[i][j] != '\0'; j++)
        {
            if(name[i][j] == '\n')
            {
                name[i][j] = '\0';
                break;
            }
        }
        printf("\n");
    }

    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for(i=0; i<10; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;

}