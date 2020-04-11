#ifndef MYLIB_H
#define MYLIB_H
#include<iostream>
#include<iomanip>
#define PI  3.14159
#include <string>
#include <algorithm>
#include<stdio.h>
#include<cmath>
#include<string.h>
#include<stdlib.h>
using namespace std;
//1a5
void desenha_retangulo_preenchido(int line, int col, char border, char fill);
//1b2
double volume_esfera(double raio);
//1b6
unsigned long long int fatorial(unsigned long long int num);
//1b8
unsigned long long int fib(int num);
//1b9
bool reg(int num);
//1b10
long long int fat(int num);
long long int comb(int n, int p);
//1c3
bool palindromo(string palavra);
//1c5
string to_lower_case(string palavra);
//1c6
string to_upper_case(string palavra);
//1c7
void caixa_com_texto_centralizado(int length, char border, string text);
//2a1
void troca(int* pt_a, int* pt_b,int* pt_c);
//2a3
int strlen(char* str);
//2a4
int compare(char* s, char* t);
//2b1
int toInt(char* p);
//2b3
string substr(string s);
//2b4
string* split (string s, char ch, int &n);
int strlen(string s);
int count(string s, char ch, int size);
void printText(string* str1, int n);
//2b5
int find(string s, string t);
//int length(string s);
//2b6
char* soma_numeros_gigantes(char* p, char* q);
int strlen(char* s);
int largest(int x, int y);
int strlen(char* p);
int largest(int x, int y);
char add(char v1, char v2, int &quoc);
void del(char* s, char* t, int x, int y );
char* fill(char* str, int size, int diff);
char* verify(char* s, int quoc);
//2c4
void search(int* p, int &g, int &l);
int length(int* v);
//2d6
int** newmat(int l, int c);
void  readmat(int** m, int l, int c);
int** soma_matriz(int** A, int** B, int l, int c);
void  printmat(int** m, int l, int c);
void  deletemat(int** m,int l);
//display
void display();
//opcao
void opc1();
void opc2();
void opc3();
void opc4();
void opc5();
void opc6();
void opc7();
void opc8();
void opc9();
void opc10();
void opc11();
void opc12();
void opc13();
void opc14();
void opc15();
void opc16();
void opc17();
void opc18();
void opc19();
void opc20();
void menu(string menu);
void beginwindow();
void endwindow();
void statusbar();
void error();
#endif // MYLIB_H
