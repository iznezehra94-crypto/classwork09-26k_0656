#include<stdio.h>
#include<string.h>

int main()
{
    char email[100];
    char *ptr;
    char domain[100];
    int i;

    for(i=0; i<10; i++)
    {
        printf("Enter email of employee %d ", i+1);
        fgets(email, sizeof(email), stdin);

        for(int j=0; email[j]!='\0'; j++)
        {
           if(email[j]=='\n')
           {
              email[j]='\0';
              break;
           }
        }
            ptr = strchr(email, '@');

        if(ptr != NULL)
        {
          strcpy(domain, ptr+1);

          printf("Domain = %s\n", domain);
        }
        else
        {
          printf("Invalid email address.\n");
        }
    }

    return 0;

}