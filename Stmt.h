//
// Created by Jared Tuck on 10/24/2021.
//
#ifndef INC_125PROJ_STMT_H
#define INC_125PROJ_STMT_H
#include "Parser.h"
#include "Linked_list.h"
#include "MiscClass.h"
#include <iostream>
using namespace std;

class Stmt;

class Stmt1{
    //Assign => id = allexpr;
public:
    Stmt1(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    string ID;
    allexpr* allExpression; //pointer to object
    linked_list* LIST; //pointer to object
    void ScanCls1();
};


////////////////////////////////////////////////////////////////////
class Stmt2 {
    //if(allexpr)stmt
public:
    Stmt2(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    string IF = "IF";
    allexpr* allExpression;
    Stmt* statement;
    linked_list* LIST;
    void ScanCls2();
    //void printStmt2(linked_list* list, SymTab* T, int D);
};


///////////////////////////////////////////////////////////////////
class Stmt3{
    //if(allexpr) stmt else stmt
public:
    Stmt3(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    allexpr* allExpression;
    string IF = "IF";
    Stmt3* S1;
    string ELSE = "ELSE";
    Stmt3* S2;
    linked_list* LIST;
    void ScanCls3();
};

////////////////////////////////////////////////////////////////////
class Stmt4{
    //while(allexpr)stmt
public:
    Stmt4(linked_list* list, SymTab* T, int D);
    int Depth;
    SymTab* sTable;
    string While = "WHILE";
    Stmt4* statement;
    allexpr* allExpression;
    linked_list* LIST;
    // void printStmt4(linked_list* list, SymTab* T, int D);
    void ScanCls4();
};

class Stmt5{
    //do stmt while(allexpression);
public:
    Stmt5(linked_list* list, SymTab* T, int D);
    linked_list* LIST;
    int Depth;
    SymTab* sTable;
    Token* DO;
    Stmt* S1;
    Token* WHILE;
    allexpr* allExpression;
    void ScanCls5();
};




//////////////////////////////////////////////////////////////////////
class Stmt6{
    //for(assign allexpr; incdecexpr) stmt
public:
    Stmt6(linked_list* list, SymTab* T, int D);
    linked_list* LIST;
    int Depth;
    SymTab* sTable;
    Token* FOR;
    assign* A1;
    incdecexpr* IncD;
    allexpr* allExpression;
    Stmt* S1;
    void ScanCls6();
};



#endif //INC_125PROJ_STMT_H
