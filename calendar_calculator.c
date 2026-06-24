#include <stdio.h>

int main()
{
    int choice;
    int day, month, year, total_days, remaining_days;

    do
    {
        day = month = year = total_days = remaining_days = 0;

        printf("\n===============================\n");
        printf("       Year Calculator\n");
        printf("===============================\n");
        printf("1. Year to Total Day\n");
        printf("2. Total Day to Year, Month & Day\n");
        printf("3. Exit\n");
        printf("===============================\n");

        printf("Enter your choice 1-3: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\n--- Calculate Total Day ---\n\n");
            printf("Enter Day   : ");
            scanf("%d", &day);
            printf("Enter Month : ");
            scanf("%d", &month);
            printf("Enter Year  : ");
            scanf("%d", &year);

            if (day < 0 || month < 0 || year < 0)
            {
                printf("\nError: Please enter positive values only.\n");
            }

            else
            {
                total_days = (year * 365) + (month * 30) + day;
                printf("\n-------- Result -------\n");
                printf("Total Days : %d days\n", total_days);
            }
        }

        else if (choice == 2)
        {
            printf("\n--- Calculate Year ---\n\n");
            printf("Enter Total days: ");
            scanf("%d", &total_days);

            if (total_days < 0)
            {
                printf("\nError: Total days cannot be negative.\n");
            }

            else
            {
                year = total_days / 365;
                remaining_days = total_days % 365;
                month = remaining_days / 30;
                day = remaining_days % 30;

                printf("\n-------------- Result -------------\n");
                printf("Total Year : %d year %d month %d day\n", year, month, day);
            }
        }

        else if (choice == 3)
        {
            printf("\nHave A Nice Day, Goodbye!\n");
        }

        else
        {
            printf("\nInvalid choice! Please enter a number between 1 and 3.\n");
        }

    } while (choice != 3);

    return 0;
}
