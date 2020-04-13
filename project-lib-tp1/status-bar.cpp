#include"mylib.h"
void statusbar(){
    string stbar = "";
    int size = 50,i,percent = 0;
    for(i=0;i<size;i++) {
       stbar+='\xDB';
       cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLOADING "
            << percent<<" % "<< stbar;
       percent+=2;
       system("cls");
    }
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLOADING "
         <<percent<<" % "<< stbar << '\n';
         _sleep(1000);
         system("cls");
}
