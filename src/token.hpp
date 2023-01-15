#pragma once

enum class TokenType {
    Number, Identifier, 

    Plus, Minus, Star, Slash, 
    Equal, NotEqual,
    Less, Greater, LessEqual, GreaterEqual,
    Not, Or, And,
    Colon, Pipe,
    Exclamation, DoubleExclamation,
    Question, DoubleQuestion,
    LeftParen, RightParen,
    LeftBrace, RightBrace,
    Comma, Semicolon
};

struct Token {
    TokenType type;
};