#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
#include <algorithm>
#include <windows.h>
using namespace std;

struct Tree{
    int key;
	vector <Tree *> son;
	Tree(){ }
	Tree(int k){
		this->key = k;
	}

};
void insert (Tree * & T, Tree * t2, int dad);
void write (Tree * T);
void delet (Tree * & T, int dad);
void Delet(Tree*&T);
void Add(Tree*&T);
int menu();
int menu_2();
int menu_3();

struct BinTree{
	int key;
	BinTree * l;
	BinTree * r;
	BinTree(){ }
	BinTree(int k){
		this->key = k;
		this->l = 0; this->r = 0;
	}

};
void insertBin (BinTree * & BT, int elem);
void writeBin (BinTree * BT);

void AddBin(BinTree*&BT);
void Demo();
