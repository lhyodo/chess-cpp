#ifndef PIECE
#define PIECE

class Piece {
   private:
   public:
    bool white{};
    bool killed{};
    Piece() {
        white = 0;
        killed = false;
    }
};

class Pawn : public Piece {
   private:
   public:
};

#endif
