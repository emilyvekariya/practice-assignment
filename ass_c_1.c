#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
     int  book_no;
     char book_name[40];
     char book_author[40];
     int  no_pages;
};
int main()
{
     struct book b[20];
     int    ch,n,i,count = 0;
     char   temp[40];
     do
     {
          printf("1. ADD BOOK DETAILS.");
          printf("\n2. DISPLAY BOOK DETAILS.");
          printf("\n3. DISPLAY BOOK OF GIVEN AUTHOR.");
          printf("\n4. COUNT NUMBER OF BOOKS.");
          printf("\n5. EXIT.");
          printf("\n");
          printf("Enter Your Choice: ");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1:
                    printf("\nHow Many Records You Want to Add: ");
                    scanf("%d",&n);
                    printf("\n");
                    printf("Add Details of %d Book\n",n);
                    printf("\n");
                    for(i = 0 ; i < n ; i++)
                    {
                         printf("Enter Book No.     : ");
                         scanf("%d",&b[i].book_no);
                         printf("Book Name          : ");
                         scanf("%s",b[i].book_name);
                         printf("Enter Author Name  : ");
                         scanf("%s",b[i].book_author);
                         printf("Enter No. of Pages : ");
                         scanf("%d",&b[i].no_pages);
                         printf("\n");
                    }
                    break;
               case 2:
                    printf("\n");
                    printf("Book No. | Book Name | Author Name | No. of Pages");
                    for( i = 0 ; i < n ; i++)
                    {
                         printf("\n %d\t  %s\t   %s\t      %d",b[i].book_no,b[i].book_name,b[i].book_author,b[i].no_pages);
                    }
                    printf("\n\n");
                    break;
             case 3:
                    printf("\nEnter Author Name: ");
                    scanf("%s",temp);
                    for( i = 0 ; i < n ; i++)
                    {
                         if(strcmp(b[i].book_author,temp) == 0)
                         {
                              printf("\nBook name: %s\n",b[i].book_name);
                         }
                    }
                    break;
               case 4 :
                    for( i = 0 ; i < n ; i++)
                    {
                         count++;
                    }
                    printf("\nTotal Number of Books in Library : %d\n",count);
                    printf("\n");
                    break;
               case 5 :
                    exit(0);
          }
     }while(ch != 5);
     return 0;
}
