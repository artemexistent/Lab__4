#include "Header.h"

void insert (Tree * & T, Tree * t2, int dad) {
    if (T->son.size()==0 && T->key==INT_MAX){
        T->son.push_back(t2);
        return;
    }
    if (T->key==dad){
        T->son.push_back(t2);
        return;
    }
    for (int i=0;i<T->son.size();i++){
        insert(T->son[i], t2,dad);
    }


}

void write (Tree * T){
    cout << T->key << " ";
    cout << "(";
    for (int i=0;i<T->son.size();i++){
        write(T->son[i]);
    }
    cout << ") ";
}

void delet (Tree * & T, int dad){


    for (int i=0;i<T->son.size();i++){
        if (T->son[i]->key == dad){
            write(T->son[i]);
            T->son.erase(T->son.begin()+ i);
            return;
        }
    }


    for (int i=0;i<T->son.size();i++){
        delet(T->son[i],dad);
    }
}

void insertBin (BinTree * & BT, int elem) {
    if (BT->l==0 && BT->r==0){
        BT->l = new BinTree(elem);
        return;
    }
    if (BT->key>elem){
        if (BT->l!=0)
            insertBin(BT->l,elem);
        else BT->l= new BinTree(elem);
    }else
        if (BT->r == 0)
            BT->r= new BinTree(elem);
        else insertBin(BT->r,elem);
}

void writeBin (BinTree * BT){
    cout << BT->key << " ";
    cout << "(";
    if (BT->l!=0)
        writeBin(BT->l);
    if (BT->r!=0)
        writeBin(BT->r);
    cout << ") ";
}

void Add(Tree*&T){
    cout << "Enter element:";
    int x;
    cin >> x;
    cout << "Enter his parent element:";
    int y;
    cin >> y;
    Tree * p=new Tree(x);
    insert(T,p,y);
}

void Delet(Tree*&T){
    cout << "Enter elem:";
    int x;
    cin >> x;
    delet(T,x);
}

void AddBin(BinTree*&BT){
    cout << "Enter element:";
    int x;
    cin >> x;
    insertBin(BT,x);
}
