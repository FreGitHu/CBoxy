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

static char* substring(const char* text, int start, int end)
struct Token* tokenize(const char* text);