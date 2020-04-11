#include"mylib.h"
void endwindow(){
    int sizebar = 50,i,percent = 0;
    string ch = ">> FINALIZANDO O PROGRAMA... ";
    cout << ch;
    for(i=0;i<sizebar;i++){
        cout << ch << percent << " % ";
        percent+=2;
        _sleep(50);
        system("cls");
    }
    cout << ch << percent << " % ";
   _sleep(2000);
   system("cls");
   cout << "=> PROGRAMA FINALIZADO COM SUCESSO.\n\n\n";
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
