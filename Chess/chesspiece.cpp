#include "chesspiece.h"


ChessPiece::ChessPiece(quint8 playerId, quint8 pieceId)
{
    PieceId     = PieceId;
    PlayerId    = playerId;
    setPixmap();

}


void ChessPiece::setPixmap()
{
    pixmap = QPixmap(getFilename());

}


QString ChessPiece::idToStr()
{
    QString ret = "";

    switch (PlayerId)
    {
    case White:     ret += 'w'; break;
    case Black:     ret += 'b'; break;
    default:
        qDebug() << "Invalid PlayerId: " << PlayerId;
        break;
    }

    switch (PieceId)
    {
    case Pawn:      ret += 'p'; break;
    case Bishop:    ret += 'b'; break;
    case Knight:    ret += 'n'; break;
    case Rook:      ret += 'r'; break;
    case Queen:     ret += 'q'; break;
    case King:      ret += 'k'; break;
    default:
        qDebug() << "Invalid PieceId: " << PieceId;
        break;
    }

    return ret;
}


QString ChessPiece::getFilename()
{
    QString ret = ":/images/" + idToStr() + ".png";
    return ret;
}


