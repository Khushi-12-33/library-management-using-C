#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct library
{
    char bk_name[30];
    char author[30];
    int pages;
    float price;
};

int main()
{
    struct library l[100];
    char ar_nm[30], bk_nm[30];
    int i, j, keepcount;
    i = j = keepcount = 0;

    while (j != 6)
    {
        printf("\n\n1. Add book information\n2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. Exit");

        printf("\n\nEnter one of the above : ");
        scanf("%d", &j);

        switch (j)
        {
        /* Add book */
        case 1:

            printf("Enter book name = ");
            scanf("%s", l[i].bk_name);

            printf("Enter author name = ");
            scanf("%s", l[i].author);

            printf("Enter pages = ");
            scanf("%d", &l[i].pages);

            printf("Enter price = ");
            scanf("%f", &l[i].price);
            i++, keepcount++;

            break;

        case 2:
            printf("you have entered the following information\n");
            for (i = 0; i < keepcount; i++)
            {
                printf("\nbook name = %s\n", l[i].bk_name);

                printf("author name = %s\n", l[i].author);

                printf("pages = %d\n", l[i].pages);

                printf("price = %f\n", l[i].price);
            }
            break;

        case 3:
            printf("Enter author name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < keepcount; i++)
            {
                if (strcmp(ar_nm, l[i].author) == 0)
                    printf("\nbook name =%s\npages = %d\nprice = %f\n", l[i].bk_name, l[i].pages, l[i].price);
            }
            break;

        case 4:
            printf("Enter book name : ");
            scanf("%s", bk_nm);
            for (i = 0; i < keepcount; i++)
            {
                if (strcmp(bk_nm, l[i].bk_name) == 0)
                    printf("\nbook name =%s\nauthor name =%s\npages = %d\nprice = %f\n", l[i].bk_name, l[i].author, l[i].pages, l[i].price);
            }
            break;

        case 5:
            printf("\n No of books in library : %d", keepcount);
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}