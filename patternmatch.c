#include<stdio.h>
#include<string.h>
    char str[100],pat[100],rep[100],ans[100];
    void compare()
    {
    printf("Enter your main string:  ");
    gets(str);
    printf("Enter the patter/sub string in main string: ");
    gets(pat);
    printf("Enter the new string to replaced ");
    gets(rep);
    }
    void pat_match()
    {
        int i,j,m,c,k,flag=0;
        i=j=c=m=0;
        while(str[c]!='\0')
        {
            if(str[m]==pat[i])
            {
                i++;
                m++;
                if(pat[i]=='\0')
                {
                    for(k=0;rep[k]!='\0';k++,j++)
                    ans[j]=rep[k];
                    i=0;
                    c=m;
                    flag=1;
                }
            }
            else
            {
                ans[j]=str[c];
                j++;
                c++;m=c;
                i=0;
            }
        }
        ans[j]='\0';
        if(flag==0)
        printf("\n pat %s is not found in str:%s",pat,str);
        else
        printf("\n The resulting string is : %s",ans);
    }
    void main()
    {
        read();
        pat_match();
        getch();
    }
    