#ifndef LEXER
#define LEXER

#include <string>
#include "types.h"

Token grabToken(std::string* text, int* index, int line);

#endif
