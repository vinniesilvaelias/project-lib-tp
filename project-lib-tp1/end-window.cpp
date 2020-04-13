#include"mylib.h"
void endwindow(){
    int sizebar = 50,i,percent = 0;
    string ch = ">> FINISHING ";
    string stbar = "";
    cout << ch;
    for(i=0;i<sizebar;i++){
        stbar+='\xDB';
        cout << ch << percent << " % " << stbar ;
        percent+=2;
        system("cls");
    }
    cout << ch << percent << " % " << stbar ;
   _sleep(1000);
   system("cls");
   cout << "=> PROCESS FINISHED SUCESSFULLY.\n\n\n";
   cout <<  "*******  *    *  ******  **   *  *    *    *     *  ******  *    *\n";
            _sleep(100);
   cout <<  "   *     *    *  *    *  * *  *  *   *      *   *   *    *  *    *\n";
            _sleep(100);
   cout <<  "   *     *    *  *    *  *  * *  *  *        * *    *    *  *    *\n";
            _sleep(100);
   cout <<  "   *     ******  ******  *   **  ***          *     *    *  *    *\n";
            _sleep(100);
   cout <<  "   *     *    *  *    *  *    *  *  *        *      *    *  *    *\n";
            _sleep(100);
   cout <<  "   *     *    *  *    *  *    *  *   *      *       *    *  *    *\n";
            _sleep(100);
   cout <<  "   *     *    *  *    *  *    *  *    *    *        ******  ******\n\n\n";
}
