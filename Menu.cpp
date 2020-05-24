#include "Header.h"



int menu() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 3 ) % 3;
        if ( key == 0 ) cout<<"-> Tree"<<endl;
            else  cout<<"   Tree"<<endl;
        if ( key == 1 ) cout<<"-> BinTree"<<endl;
            else  cout<<"   BinTree"<<endl;
        if ( key == 2 ) cout<<"-> Demo"<<endl;
            else  cout<<"   Demo"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key;
}


int menu_2() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 3 ) % 3;
        cout << "Type:\n";
        if ( key == 0 ) cout<<"-> add_elem"<<endl;
            else  cout<<"   add_elem"<<endl;
        if ( key == 1 ) cout<<"-> write"<<endl;
            else  cout<<"   write"<<endl;
        if ( key == 2 ) cout<<"-> delete"<<endl;
            else  cout<<"   delete"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key;
}



int menu_3() {
    int key = 0;
    int code;
    do {
        system( "cls" );
        key = ( key + 2 ) % 2;
        cout << "Type:\n";
        if ( key == 0 ) cout<<"-> add_elem"<<endl;
            else  cout<<"   add_elem"<<endl;
        if ( key == 1 ) cout<<"-> write"<<endl;
            else  cout<<"   write"<<endl;
        code = _getch();
        if ( code == 224 ){
            code = _getch();
            if ( code == 80 ) key ++;
            if ( code == 72 ) key --;
        }
        if ( code == 27 ){
            system( "cls" );
            exit(0);
        }
    }while( code != 13 );
    system( "cls" );
    return key;
}
