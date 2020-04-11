#include<iostream>
using namespace std;
void statusbar(){
    int sizebar = 50,i,percent = 0;
    string ch = "[#";
    for(i=0;i<sizebar;i++){
        cout <<"LOADING "<<percent<<" % "<< ch << "] ";
        ch+="#";
        percent+=2;
        _sleep(25);
        system("cls");
    }
    cout <<"LOADING "<<percent<<" %"<< ch << "] ";
    _sleep(1000);
    system("cls");
}
