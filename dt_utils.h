#ifndef DT_UTILS_H
    #define DT_UTILS_H

        #include <stdbool.h>

        struct Direction
        {
            int x, y;
        };
        
        void saveDirection(int x, int y, int ***matrix);

        struct Direction sortDirection(int ***matrix);

        void resetPossibleDirections(int ***matrix);
#endif