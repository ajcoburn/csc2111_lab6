#if !defined (NULL)
   #define NULL 0
#endif

#if !defined (DIRECTION)
#define DIRECTION
   enum Direction {DOWN = 1, RIGHT, UP, LEFT, DEAD_END};
#endif

#if !defined (CELL_H)
#define CELL_H

class Cell
{

   private:
      int row;
      int col;
      Direction dir;  //next Direction to try

   public:
      Cell(int row, int col);  //constructor
      virtual ~Cell();  //destructor
      int getRow();
      int getCol();
      Direction getDir();  //get next Direction to try
      Cell* nextCell();  //create & return new Cell depending on dir 

};

#endif
