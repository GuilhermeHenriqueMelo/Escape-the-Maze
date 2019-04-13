#ifndef DT_UTILS_H
    #define DT_UTILS_H

        #include <stdbool.h>

        struct Direction
        {
            int x, y;
        };
        
        void saveDirection(int posX, int posY, struct Direction **array, int counter);

        struct Direction sortDirection(struct Direction **array, int number_of_directions);

        void resetPossibleDirections(struct Direction **array);

        void setInitialDirectionsValues(int size, struct Direction **array);

        void generateDirectionsArray(int size, struct Direction **array);

#endif