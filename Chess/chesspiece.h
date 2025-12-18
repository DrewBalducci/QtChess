#ifndef CHESSPIECE_H
#define CHESSPIECE_H


#include <QPixmap>
#include <QDebug>
//#include <QGlobal>

class ChessPiece : public QPixmap
{
public:
    enum PIECEIDS {Pawn,Bishop,Knight,Rook,Queen,King};
    enum PLAYERIDS {White,Black};
    const int PIECE_SIDE_LEN = 40;

    ChessPiece(quint8 playerId, quint8 pieceId);

private:
    quint8 PlayerId;
    quint8 PieceId;
    QPixmap pixmap;
    void setPixmap();
    QString idToStr();
    QString getFilename();



};

#endif // CHESSPIECE_H
