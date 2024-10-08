//
// Created by l.crole on 10/7/2024.
//

#ifndef TOKEN_H
#define TOKEN_H
#include <map>
#include <string>

typedef std::string tokenType;

class Token {
public:
    // Constants of token types
    const std::string ILLEGAL = "ILLEGAL";
    const std::string END_OF_FILE = "EOF";
    // Identifiers + literals
    const std::string IDENT = "IDENT"; // add, foobar, x, y, ...
    const std::string INT = "INT"; // 1343456

    const std::string ASSIGN = "=";
    const std::string PLUS = "+";
    const std::string MINUS = "-";
    const std::string BANG = "!";
    const std::string ASTERISK = "*";
    const std::string SLASH = "/";
    const std::string LT = "<";
    const std::string GT = ">";
    const std::string EQ = "==";
    const std::string NOT_EQ = "!=";

    // Delimiters
    const std::string COMMA = ",";
    const std::string SEMICOLON = ";";

    const std::string LPAREN = "(";
    const std::string RPAREN = ")";
    const std::string LBRACE = "{";
    const std::string RBRACE = "}";

    // Keywords
    const std::string FUNCTION = "FUNCTION";
    const std::string LET = "LET";
    const std::string TRUE = "TRUE";
    const std::string FALSE = "FALSE";
    const std::string IF = "IF";
    const std::string ELSE = "ELSE";
    const std::string RETURN = "RETURN";

    const std::map<std::string, tokenType> keywords = {
        {"fn", FUNCTION},
        {"let", LET},
        {"true", TRUE},
        {"false", FALSE},
        {"if", IF},
        {"else", ELSE},
        {"return", RETURN}
    };

    std::string to_string() const;
    std::string get_literal();
    tokenType get_type();
    tokenType lookup_identifier (std::string ident) const;
private:
    tokenType type;
    std::string literal;

};


#endif //TOKEN_H
