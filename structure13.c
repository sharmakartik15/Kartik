// accession number, name of author, book title and flag to know whether book is issued or not
#include <stdio.h>
struct library
{
    int acc;
    char name_author[20];
    char book_title[20];
    char flag[10];
} s[100];

int n = 0, i;

void display()
{
    printf("Book Information:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Accession Number: %d\n", s[i].acc);
        printf("Author: %s\n", s[i].name_author);
        printf("Title: %s\n", s[i].book_title);
        printf("Status: %s\n", s[i].flag);
        printf("\n");
    }
}

void addBook()
{

    for (i = 0; i < 1; i++)
    {
        printf("Enter the accession number of the book: ");
        scanf("%d", &s[i].acc);

        printf("Enter the name of the author: ");
        scanf("%s", s[i].name_author);

        printf("Enter the title of the book: ");
        scanf("%s", s[i].book_title);

        printf("Enter if the book is issued r not: ");
        scanf("%s", s[i].flag);
        n++;

        printf("\nBook added to the library successfully!\n\n");
    }
}

void main()
{
    int choice, x = 1;

    while (x > 0)
    {
        printf("\nLibrary Menu:\n");
        printf("1. Display book information\n");
        printf("2.Add a book\n");
        printf("3.Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            display();
            break;
        case 2:
            addBook();
            break;
        case 3:
            printf("Exiting the program!!");
            break;
        default:
            printf("INVALID INPUT");
            break;
        }
    }
}