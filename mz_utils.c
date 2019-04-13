#include <stdlib.h>
#include "mz_utils.h"

    void getRandomPositon(int *x, int *y, int size, int ***matrix)
    {
        int posX = 0;
        int posY = 0;

        srand(time(0));

        while (posX < 1 || posX == size-1 || posY < 1 || posY == size-1)
        {
            posX = rand() % (size-1);
            posY = rand() % (size-1);
        }

        *x = posX;
        *y = posY;
    }

    bool isMazeSizeAcceptable(int rows, int columns)
    {
        if (rows != columns || rows < 4 || columns < 4)
        {
            return false;
        }

        return true;
    }

    bool isExit(int x, int y, int ***matrix)
    {
        if (matrix[x][y] == 0)
        {
            return true;
        }

        return false;
    }

    void moveToPosition(int *oldX, int *oldY, int newX, int newY)
    {
        *oldX = newX;
        *oldY = newY;
    }

    void incrementWeightValueInPosition(int x, int y, int ***matrix)
    {
        matrix[x][y] += 1;
    }

    void setInitialDirectionsValues(int rows, int columns, bool ***matrix)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                (*matrix)[i][j] = false;
            }
        }
    }

    void setInitialWeightValue(int x, int y, int ***matrix)
    {
        (*matrix)[x][y] = 1;
    }

    void generatePathWeightValues(int rows, int columns, int ***matrix)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                (*matrix)[i][j] = 0;
            }
        }
    }

    void generateMaze(int rows, int columns, int ***matrix)
    {
        *matrix = malloc(rows * sizeof **matrix);

        for (int i = 0; i < rows; i++)
        {
            (*matrix)[i] = malloc(columns * sizeof (*matrix)[i]);
        }

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                (*matrix)[i][j] = 1;
            }
        }
    }