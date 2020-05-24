#include "Header.h"

int main()
{
    int ans=menu();
    if (ans==0){
        Tree* T = new Tree(INT_MAX);
        int ans_2=0;
        while (true){
            ans_2=menu_2();
            system ("cls");
            switch (ans_2){
                case 0: Add(T); break;
                case 1: write(T->son[0]); break;
                case 2: Delet(T); break;
            }
            system("pause");
        }
    }else if (ans==1){
        BinTree* BT = new BinTree(INT_MAX);
        int ans_3=0;
        while (true){
            ans_3=menu_3();
            system ("cls");
            switch (ans_3){
                case 0: AddBin(BT); break;
                case 1: writeBin(BT->l); break;
            }
            system("pause");
        }
    }else {
        Demo();
    }

    return 0;
}
