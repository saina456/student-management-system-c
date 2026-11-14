
#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Calculate Result\n");
        printf("4. Search Student\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Add Student Selected\n");
                break;

            case 2:
                printf("Display Students Selected\n");
                break;

            case 3:
                printf("Calculate Result Selected\n");
                break;

            case 4:
                printf("Search Student Selected\n");
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}
