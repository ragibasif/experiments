// TOKENS.h
//
// Keywords and Tokens for C Compilers and Interpreters

#ifndef __TOKENS_H__
#define __TOKENS_H__

// Reserved Keywords
#define AUTO "auto"
#define BREAK "break"
#define CASE "case"
#define CHAR "char"
#define CONST "const"
#define CONTINUE "continue"
#define DEFAULT "default"
#define DO "do"
#define DOUBLE "double"
#define ELSE "else"
#define ENUM "enum"
#define EXTERN "extern"
#define FLOAT "float"
#define FOR "for"
#define GOTO "goto"
#define IF "if"
#define INT "int"
#define LONG "long"
#define REGISTER "register"
#define RETURN "return"
#define SHORT "short"
#define SIGNED "signed"
#define SIZEOF "sizeof"
#define STATIC "static"
#define STRUCT "struct"
#define SWITCH "switch"
#define TYPEDEF "typedef"
#define UNION "union"
#define UNSIGNED "unsigned"
#define VOID "void"
#define VOLATILE "volatile"
#define WHILE "while"

// Identifiers
#define IDENTIFIER "[a-zA-Z_][a-zA-Z0-9_]*"

// Constants
#define INTEGER_CONSTANT "[0-9]+|0[xX][0-9a-fA-F]+"
#define FLOAT_CONSTANT                                                         \
    "[0-9]*\\.[0-9]+([eE][+-]?[0-9]+)?|[0-9]+\\.?[eE][+-]?[0-9]+"
#define CHARACTER_CONSTANT "'([^'\\\\]|\\\\.)'"

// Literals
#define STRING_LITERAL "\"([^\"\\\\]|\\\\.)*\""

// Operators
// Arithmetic
#define PLUS "+"
#define MINUS "-"
#define STAR "*"
#define SLASH "/"
#define PERCENT "%"
// Relational
#define LESS "<"
#define GREATER ">"
#define LESSEQUAL "<="
#define GREATEREQUAL ">="
#define EQUALEQUAL "=="
#define NOTEQUAL "!="
// Logical
#define ANDAND "&&"
#define OROR "||"
#define NOT "!"
// Bitwise
#define AMPERSAND "&"
#define PIPE "|"
#define CARET "^"
#define TILDE "~"
#define LSHIFT "<<"
#define RSHIFT ">>"
// Assignment
#define EQUAL "="
#define PLUSEQUAL "+="
#define MINUSEQUAL "-="
#define STAREQUAL "*="
#define SLASHEQUAL "/="
#define PERCENTEQUAL "%="
#define AMPERSANDEQUAL "&="
#define PIPEEQUAL "|="
#define CARETEQUAL "^="
#define LSHIFTEQUAL "<<="
#define RSHIFTEQUAL ">>="
// Increment/decrement
#define PLUSPLUS "++"
#define MINUSMINUS "--"
// Other
#define QUESTION "?"
#define COLON ":"
#define COMMA ","

// Separators/Punctuators
#define SEMICOLON ";"
#define DOT "."
#define LPAREN "("
#define RPAREN ")"
#define LBRACE "{"
#define RBRACE "}"
#define LBRACKET "["
#define RBRACKET "]"

// Preprocessor Directives
#define OCTOTHORPE "#"
#define DEFINE "#define"
#define INCLUDE "#include"
#define IFDEF "#ifdef"
#define IFNDEF "#ifndef"
#define ENDIF "#endif"
#define IF "#if"
#define ELSE "#else"
#define ELIF "#elif"
#define LINE "#line"
#define ERROR "#error"
#define PRAGMA "#pragma"
#define UNDEF "#undef"

// Whitespace
#define SPACE " "
#define TAB "\t"
#define NEWLINE "\n"

// Escape Sequences
#define ESCAPE_NEWLINE "\\n"
#define ESCAPE_TAB "\\t"
#define ESCAPE_BACKSLASH "\\\\"
#define ESCAPE_SINGLE_QUOTE "\\'"
#define ESCAPE_DOUBLE_QUOTE "\\\""
#define ESCAPE_NULL "\\0"
#define ESCAPE_BELL "\\a"
#define ESCAPE_BACKSPACE "\\b"
#define ESCAPE_FORMFEED "\\f"
#define ESCAPE_CARRIAGE_RETURN "\\r"
#define ESCAPE_VERTICAL_TAB "\\v"
#define ESCAPE_HEX "\\x[0-9a-fA-F]+"
#define ESCAPE_OCTAL "\\[0-7]{1,3}"

// Boolean
#define TRUE "true"
#define FALSE "false"

// Comments
#define SINGLE_LINE_COMMENT "//"
#define MULTI_LINE_COMMENT_START "/*"
#define MULTI_LINE_COMMENT_END "*/"

#endif // __TOKENS_H__
