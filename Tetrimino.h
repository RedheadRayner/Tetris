#ifndef TET_H
#define TET_H

class Tetrimino {

  public:
    void initialise(int gridPass[], int rowNum, int colNum, uint16_t tetColour, int multiplier);
    virtual int blocksRight();
    virtual int blocksDown();
    virtual boolean booleanOfGrid(int,int);
    void rotateGrid();
    void spawn();
    int rows;
    int cols;
    int* startGrid;
    int* currentGrid;
    uint16_t colour;
};

#endif