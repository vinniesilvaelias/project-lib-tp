#include"mylib.h"
using namespace std;
int main(){
    beginwindow();
    statusbar();
    display();
    int opc;
    cout << "\n\n>> INFORME O NUMERO DA FUNCAO ESCOLHIDA OU 0 PARA FINALIZAR: ";
    cin  >> opc;
    while (opc) {
        switch (opc) {
            case 1:
                opc1();
                break;
            case 2:
                opc2();
                break;
            case 3:
                opc3();
                break;
            case 4:
                opc4();
                break;
            case 5:
                opc5();
                break;
            case 6:
                opc6();
                break;
            case 7:
                opc7();
                break;
            case 8:
                opc8();
                break;
            case 9:
                opc9();
                break;
            case 10:
                opc10();
                break;
            case 11:
                opc11();
                break;
            case 12:
                opc12();
                break;
            case 13:
                opc13();
                break;
            case 14:
                opc14();
                break;
            case 15:
                opc15();
                break;
            case 16:
                opc16();
                break;
            case 17:
                opc17();
                break;
            case 18:
                opc18();
                break;
            case 19:
                opc19();
                break;
            case 20:
                opc20();
                break;
            default:
            system("cls");
            error();
        }
        system("cls");
        display();
        cout << "\n\n>> INFORME O NUMERO DA FUNCAO ESCOLHIDA OU 0 PARA FINALIZAR: ";
        cin  >> opc;
    }
    system("cls");
    endwindow();
}
