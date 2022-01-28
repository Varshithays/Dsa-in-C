#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],pat[100],rep[100],ans[100];
    int i,j,p,q,k,count=0;
    p=q=j=i=0;
    
    printf("Enter your main string:  ");
    scanf("%[^\n]%*c", str);
    printf("Enter the patter/sub string in main string: ");
    scanf("%[^\n]%*c", pat);
    printf("Enter the new string to replaced ");
    scanf("%[^\n]%*c", rep);
    
        while(str[p]!='\0')
        {
            if(str[p]==pat[i])
            {
                i++;
                p++;
                if(pat[i]=='\0')
                {
                    for(k=0;rep[k]!='\0';k++,j++)
                    ans[j]=rep[k];
                    i=0;
                    count=1;
                }
            }
            else
            {
                ans[j]=str[p];
                j++;
                p++;
                i=0; 
            }
        }
        ans[j]='\0';

        if(count==1)
        {
        printf("\n The resulting string is : %c",ans);
        }
        else
        {
        printf("\n pattern string is not found\n");
        }
}