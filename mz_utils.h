#ifndef MZ_UTILS_H
    #define MZ_UTILS_H

        #include <stdbool.h>

        void generateMaze(int rows, int columns, int ***matrix);

        void generatePathWeightValues(int rows, int columns, int ***matrix);

        void getRandomPositon(int *x, int *y, int size, int ***matrix);

        void setInitialDirectionsValues(int rows, int columns, bool ***matrix);

        void setInitialWeightValue(int x, int y, int ***matrix);

        void incrementWeightValueInPosition(int x, int y, int ***matrix);

        void moveToPosition(int *oldX, int *oldY, int newX, int newY);

        bool isExit(int x, int y, int ***matrix);

        bool isMazeSizeAcceptable(int rows, int columns); 
#endif