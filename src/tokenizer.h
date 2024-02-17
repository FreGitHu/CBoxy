#pragma once

enum TokenType {
IntType,
CharType,
StrType,
ListType,
Number,
LeftPara,
RightPara,
LeftSquiggle,
RightSquiggle,
LeftStraight,
RightStraight,
LamdaDefine,
EndOfFile
};

struct Token {
    char* data;
    enum TokenType type;
    int line;
    int column;
};

struct Token* tokenize(const char* text);