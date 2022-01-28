/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<string.h>
    int str_cmpi(char p[],char t[],int i);
    int str_cmpi(char p[],char t[],int i)
    {
        int j,m;
        j=0;
        m=strlen(p);
        while(j<m && p[j]==t[i+j])
        j++;
        if(j==m)
        return 1;
    }
    void my_search_replace(char p[],char t[],char r[],char d[])
    {
        int i,j,k,m,n ,flag;
        i=k=j=0;
        n=strlen(t);
        m=strlen(p);
        while(i<n-m)
        {
            flag =str_cmpi(p,t,i);
            if(flag==1)
            {
                while(j<i)
                d[k++]=t[j++];
                j=0;
                while(j<strlen(r))
                d[k++]=r[j++];
                i=i+strlen(p);
                j=i;
            }
            else
            i++;
        }
        while(j<n)
        d[k++]=t[j++];
        d[k]='\0';
        
        void main()
        {
            char t[100],p[50],r[100],d[50]
            printf("Enter the text string t: ");
            gets(t);
            printf("Enter the pattern string p: ");
            gets(p);
            printf("Enter the replace string r: ");
            gets(r);
            my_search_replace(p,t,r,d);
            
            printf("The final string after replacing: %s\n",d);
        }
    }
    