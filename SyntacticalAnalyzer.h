/*******************************************************************************
* Assignment: Project 2 - Syntactic Analyzer for Scheme to C++ Translator      *
* Author:                                                                      *
* Date: Spring 2018                                                            *
* File: SyntacticalAnalyzer.h                                                  *
*                                                                              *
* Description: This file contains the                                          *
*******************************************************************************/

#ifndef SYN_H
#define SYN_H

#include <iostream>
#include <fstream>
#include "LexicalAnalyzer.h"
#include <set>
#include "CodeGenerator.h"

using namespace std;

class SyntacticalAnalyzer 
{
    public:
	SyntacticalAnalyzer (char * filename);
	~SyntacticalAnalyzer ();
    private:
	LexicalAnalyzer * lex;
	ofstream p2file;
	token_type token;
	int Program ();
	int Define();
	int More_Defines();
	int Stmt_List(string, bool, bool);
	int Stmt(bool);
	int Literal();
	int Quoted_Lit();
	int More_Tokens();
	int Param_List(bool);
	int Else_Part();
	int Stmt_Pair();
	int Stmt_Pair_Body();
	int Action(bool);
	int Any_Other_Token(bool);
	int Error_Helper(token_type t, string s);
	int Error_Helper(string s);
	int tabs;
	CodeGen * code;
};
	
#endif
