#include <stdio.h>

// Function to draw an empty square
void empty_square(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Print '*' for the border and space inside
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Function to draw a filled square
void filled_square(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Print '*' for every position
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int choice, size;

    while (1)
    {
        // Display the menu options
        printf("\nChoose an option:\n");
        printf("1. Draw an empty square\n");
        printf("2. Draw a filled square\n");
        printf("3. Stop\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Handle user input based on the choice
        if (choice == 1)
        {
            printf("Enter the size of the square: ");
            scanf("%d", &size);
            printf("\nDrawing an empty square:\n");
            empty_square(size); // Call the empty square function
        }
        else if (choice == 2)
        {
            printf("Enter the size of the square: ");
            scanf("%d", &size);
            printf("\nDrawing a filled square:\n");
            filled_square(size); // Call the filled square function
        }
        else if (choice == 3)
        {
            printf("Stopping the program...\n");
            break; // Exit the loop and end the program
        }
        else
        {
            printf("Invalid choice! Please choose between 1, 2, or 3.\n");
        }
    }

    return 0;
}
