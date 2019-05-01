#include <stdlib.h>
#include "dt_utils.h"

    int generateDirectionsArray(int size, struct Direction **array)
    {
        const int SIZE = size * (sizeof **array);
        *array = malloc(SIZE);

        return SIZE;
    }

    void resetPossibleDirections(struct Direction **array, const int BYTE_SIZE)
    {
        const int ARR_SIZE = BYTE_SIZE / sizeof((*array)[0]);
        struct Direction d = {.x = 0, .y = 0};

        for (int i = 0; i < ARR_SIZE; i++)
        {
            (*array)[i] = d;
        }
    }

    void setInitialDirectionsValues(int size, struct Direction **array)
    {
        struct Direction d = {.x = 0, .y = 0};

        for (int i = 0; i < size; i++)
        {
            (*array)[i] = d;
        }
    }

    void saveDirection(int posX, int posY, struct Direction **array, int counter)
    {
        struct Direction direction = { .x = 0, .y = 0};
        direction.x = posX;
        direction.y = posY;

        (*array)[counter] = direction;
    }

    struct Direction sortDirection(struct Direction **array, int number_of_directions)
    {
        int number_of_options = number_of_directions;

        if (number_of_options == 1)
        {
            return (*array)[number_of_options];
        }

        int sorted_position = -1;
        sorted_position = rand() % number_of_options;

        return (*array)[sorted_position];
    }