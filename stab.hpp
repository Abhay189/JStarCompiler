#ifndef STAB_H
#define STAB_H

#include "ast.hpp"
#include<unordered_map>
#include<string>
#include"symbol_table.hpp"

void SemanticCheck_Driver(AstNode *RootNode);

void GlobalScopeIterator(AstNode *RootNode);

void secondIteration(AstNode * Rootnode);

void First_Iteration_Callback_Function(AstNode * astNode, std::unordered_map<std::string, SymbolTable> * Node_stab);

void Second_Iteration_Callback_Function(AstNode * Node, std::unordered_map<std::string, SymbolTable> * Node_stab);

// void third_Iteration(AstNode * RootNode);

#endif