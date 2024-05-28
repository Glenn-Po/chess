#include "./types.hpp"


// Overload the output stream operator for PieceType
std::ostream& operator<<(std::ostream& os, PieceType piece) {
    switch (piece) {
        case PieceType::PAWN:     os << "Pawn"; break;
        case PieceType::KNIGHT:   os << "Knight"; break;
        case PieceType::BISHOP:   os << "Bishop"; break;
        case PieceType::ROOK:     os << "Rook"; break;
        case PieceType::QUEEN:    os << "Queen"; break;
        case PieceType::KING:     os << "King"; break;
        case PieceType::NO_PIECE: os << "No Piece"; break;
        default:                  os << "Unknown Piece";
    }
    return os;
}

// Overload the output stream operator for Team
std::ostream& operator<<(std::ostream& os, Team team) {
    switch (team) {
        case Team::CHESS_WHITE: os << "White"; break;
        case Team::CHESS_BLACK: os << "Black"; break;
        default:                os << "Unknown Team";
    }
    return os;
}

// Overload the output stream operator for HighlightLevel
std::ostream& operator<<(std::ostream& os, HighlightLevel level) {
    switch (level) {
        case HighlightLevel::INFO:    os << "Info"; break;
        case HighlightLevel::WARNING: os << "Warning"; break;
        case HighlightLevel::DANGER:  os << "Danger"; break;
        default:                      os << "Unknown Level";
    }
    return os;
}

