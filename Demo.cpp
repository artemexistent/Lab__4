#include "Header.h"


void Demo(){


     cout << "Created Tree\n\n";
     Tree* T =new Tree(INT_MAX);
     Sleep(3000);
     cout << "Add to Tree element 1\n\n";
     insert(T,new Tree(1),0);
     Sleep(3000);
     cout << "Add to Tree element 5(parent 1)\n\n";
     insert(T,new Tree(5),1);
     Sleep(3000);
     cout << "Add to Tree element 12(parent 5)\n\n";
     insert(T,new Tree(12),5);
     Sleep(3000);
     cout << "Add to Tree element 13(parent 5)\n\n";
     insert(T,new Tree(13),5);
     Sleep(3000);
     cout << "Add to Tree element 8(parent 5)\n\n";
     insert(T,new Tree(8),5);
     Sleep(3000);
     cout << "Add to Tree element 32(parent 1)\n\n";
     insert(T,new Tree(32),1);
     Sleep(3000);
     cout << "Add to Tree element 46(parent 1)\n\n";
     insert(T,new Tree(46),1);
     Sleep(3000);
     cout << "Tree:   ";
     write(T->son[0]);
     Sleep(3000);
     cout << "Delete Tree(5)\n\n";
     delet(T,5);
     Sleep(3000);
     cout << "Tree:   ";
     write(T->son[0]);
     system("pause");


     system ("cls");


    cout << "Created BinTree\n\n";
     BinTree* BT =new BinTree(INT_MAX);
     Sleep(3000);
     cout << "Add to BinTree element 1\n\n";
     insertBin(BT,1);
     Sleep(3000);
     cout << "Add to BinTree element 5\n\n";
     insertBin(BT,5);
     Sleep(3000);
     cout << "Add to BinTree element 12\n\n";
     insertBin(BT,12);
     Sleep(3000);
     cout << "Add to BinTree element 13\n\n";
     insertBin(BT,13);
     Sleep(3000);
     cout << "Add to BinTree element 8\n\n";
     insertBin(BT,8);
     Sleep(3000);
     cout << "Add to BinTree element 32\n\n";
     insertBin(BT,32);
     Sleep(3000);
     cout << "Add to BinTree element 46\n\n";
     insertBin(BT,46);
     Sleep(3000);
     cout << "BinTree:   ";
     writeBin(BT->l);
     Sleep(3000);
}
