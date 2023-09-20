#include <stdio.h>
#include <stdlib.h>

// A global variable to store the number of solutions
int count = 0;

// A function to check if a queen can be placed at board[row][col]
int is_safe(int board[10][10], int row, int col)
{
    int i, j;
    // Check the row on the left
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;
    // Check the upper diagonal on the left
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;
    // Check the lower diagonal on the left
    for (i = row, j = col; i < 10 && j >= 0; i++, j--)
        if (board[i][j])
            return 0;
    // If no conflict, return 1
    return 1;
}

// A recursive function to solve the n-queen problem
void solve_n_queen(int board[10][10], int col)
{
    // If all queens are placed, print the solution and increment the count
    if (col == 10)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                printf("%d ", board[i][j]);
            printf("\n");
        }
        printf("\n");
        count++;
        return;
    }
    // Try placing a queen in each row of the current column
    for (int i = 0; i < 10; i++)
    {
        // If the position is safe, mark it as 1 and recur for the next column
        if (is_safe(board, i, col))
        {
            board[i][col] = 1;
            solve_n_queen(board, col + 1);
            // Backtrack and unmark the position as 0
            board[i][col] = 0;
        }
    }
}

// A function to create and initialize the board and call the solver function
int n_queen()
{
    // Create a 10x10 board and fill it with zeros
    int board[10][10];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            board[i][j] = 0;
    // Call the solver function with the board and the first column
    solve_n_queen(board, 0);
    // Return the number of solutions
    return count;
}

// A main function to test the n_queen function
int main()
{
    // Call the n_queen function and print the number of solutions
    int result = n_queen();
    printf("The number of possible placements of the ten queens is %d\n", result);
    return 0;
}
