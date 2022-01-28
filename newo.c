#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],pat[100],rep[100],ans[100];
    int i,j,c,m,k,flag=0;
    c=m=j=i=0;
    
    printf("Enter your main string:  ");
    scanf("%[^\n]%*c", str);
    printf("Enter the patter/sub string in main string: ");
    scanf("%[^\n]%*c", pat);
    printf("Enter the new string to replaced ");
    scanf("%[^\n]%*c", rep);
    
        while(str[c]!='\0')
        {
            if(str[c]==pat[i])
            {
                i++;
                c++;
                if(pat[i]=='\0')
                {
                    for(k=0;rep[k]!='\0';k++,j++)
                    ans[j]=rep[k];
                    i=0;
                    flag=1;
                }
            }
            else
            {
                ans[j]=str[c];
                j++;
                c++;
                i=0; 
            }
        }
        ans[j]='\0';

        if(flag==1)
        {
        printf("\n The resulting string is : %s",ans);
        }
        else
        {
        printf("\n pattern string is not found\n");
        }
}