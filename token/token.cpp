//
// Created by l.crole on 10/7/2024.
//

#include "token.h"

std::string Token::get_literal() {
    return this->literal;
}

tokenType Token::get_type() {
    return this->type;
}

tokenType Token::lookup_identifier(std::string ident) const {
    if(this->keywords.find(ident) != this->keywords.end()) {
        return this->keywords.at(ident);
    }
    return ident;
}

std::string Token::to_string() const {
    return this->literal + this->type;
}
