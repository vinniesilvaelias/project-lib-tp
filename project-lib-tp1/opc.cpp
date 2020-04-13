#include"mylib.h"
//MENU

void menu(string m){
    cout <<"+------------------------ "<< m <<" ------------------------+\n";
}
void opc1(){
    statusbar();
    int x = 1;
    while (x) {
        int line, col;
        char border, fill;
        string m = "[01] DESENHA RETANGULO ";
        menu(m);
        cout << "\n>> INFORME A QUANTIDADE DE LINHAS: ";
        cin >> line;
        cout << "\n>> INFORME A QUANTIDADE DE COLUNAS: ";
        cin >> col;
        cout << "\n>> INFORME O CARACTER DE CONTORNO: ";
        cin >> border;
        cout << "\n>> INFORME O CARACTER PARA O PREENCHIMENTO: ";
        cin >> fill;
        cout << '\n';
        desenha_retangulo_preenchido(line,col,border,fill);
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc2(){
    statusbar();
    int x = 1;
    while (x) {
        double raio;
        cout << setprecision(2)<<fixed;
        string m = "[02]  VOLUME ESFERA";
        menu(m);
        cout <<"\n>> INFORME A MEDIDA DO RAIO (m): ";
        cin >> raio;
        cout << "\n=> VOLUME = " << volume_esfera(raio);
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc3(){
    statusbar();
    int x = 1;
    while (x) {
        unsigned long long int num;
        unsigned long long int fat;
        cout << setprecision(2)<<fixed;
        string m = "[03]  FATORIAL";
        menu(m);
        cout << "\n>> INFORME UM NUMERO INTEIRO ENTRE 0 E 20: ";
        cin >> num;
        if(num > 20){
            cout << "\n=> VALOR DIFERENTE DO RECOMENDADO!!!\n";
            cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        }
        else{
            fat = fatorial(num);
            cout << "\n=> FATORIAL DE "<< num << " = " << fat;
            cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        }
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc4(){
    statusbar();
    int x = 1;
    while (x) {
        int num;
        string m = "[04]  FIBONACCI";
        menu(m);
        cout << "\n>> INFORME O TERMO DA SEQUECIA DE FIBONACCI DESEJADO: ";
        cin >> num;
        cout << "\n=> TERMO " << num << " DA SEQUENCIA = " << fib(num);
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc5(){
    statusbar();
    int x = 1;
    while (x) {
        int num;
        string m = "[05]  NUMERO REGULAR";
        menu(m);
        cout<<"\n>> INFORME UM NUMERO INTEIRO: ";
        cin >> num;
        bool is_reg = reg(num);
        cout << "\n=> "<<num; if(is_reg==0) cout<< " NAO";cout<< " EH REGULAR.\n";
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc6(){
    statusbar();
    int x = 1;
    while (x) {
        int n, p;
        string m = "[06]  COMBINACOES";
        menu(m);
        cout << "\n>> INFORME O VALOR DE N: ";
        cin >> n;
        cout << "\n>> INFORME O VALOR DE P: ";
        cin >> p;
        if(p > n || n > 20)
            cout << "\n=> P DEVE SER MENOR QUE N E O VALOR DE N DEVE SER MENOR QUE 20!!!\n";
        else
            cout << "\n=> TOTAL DE COMBINACOES = " << comb(n,p) << endl;
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc7(){
    statusbar();
    int x = 1;
    while (x) {
        string palavra;
        bool is_pal;
        string m = "[07]  PALINDROMO";
        menu(m);
        cout << "\n>> INFORME UMA PALAVRA: ";
        cin >> palavra;
        is_pal = palindromo(palavra);
        cout <<"\n=> " <<palavra;
        if(is_pal == 0)
            cout << " NAO";
        cout << " EH PALINDROMO.\n";
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc8(){
    statusbar();
    int x = 1;
    while (x) {
        string palavra;
        string minusc;
        string m = "[08]  MINUSCULAS";
        menu(m);
        cout << "\n>> INFORME UMA PALAVRA COM LETRAS MAIUSCULAS: ";
        cin.ignore();
        getline(cin, palavra);
        minusc = to_lower_case( palavra );
        cout << "\n=> CONVERTENDO PARA MINUSCULAS: " << minusc <<"\n\n";
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc9(){
    statusbar();
    int x = 1;
    while (x) {
        string palavra;
        string maiusc;
        string m = "[09]  MAIUSCULAS";
        menu(m);
        cout << "\n>> INFORME UMA PALAVRA COM LETRAS MINUSCULAS: ";
        cin.ignore();
        getline(cin, palavra);
        maiusc = to_upper_case( palavra );
        cout <<"\n=> CONVERTERNDO PARA MAIUSCULAS: " << maiusc;
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc10(){
    statusbar();
    int x = 1;
    while (x) {
        string text;
        int length;
        char border;
        cin.ignore();
        string m = "[10]  CENTRALIZAR TEXTO";
        menu(m);
        cout << "\n>> INFORME O TEXTO: ";
        getline(cin,text);
        cout << "\n>> INFORME A LARGURA DA CAIXA: ";
        cin  >> length;
        cout << "\n>> INFORME UM CARACTERE PARA AS BORDAS: ";
        cin  >> border;
        cout << '\n';
        caixa_com_texto_centralizado(length,  border,  text);
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc11(){
    statusbar();
    int x = 1;
    while (x) {
        int a,b,c;
        string m = "[11]  ORDENA TRES NUMEROS";
        menu(m);
        cout << "\n>> INFORME O VALOR DE A: ";
        cin >> a;
        cout << "\n>> INFORME O VALOR DE B: ";
        cin >> b;
        cout << "\n>> INFORME O VALOR DE B: ";
        cin >> c;
        troca(&a,&b,&c);
        cout << "\n=> A = " << a << '\t' << "B = " << b << "\t\t"<<"C = "<<c << '\n';
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc12(){
    statusbar();
    int x = 1;
    while (x) {
        char str[1000];
        string m = "[12]  TAMANHO STRING";
        int size;
        menu(m);
        cout << "\n>> INFORME UMA PALAVRA: ";
        cin.ignore();
        gets(str);
        size = strlen(str);
        cout << "\n=> " << str << " POSSUI "
             <<  size  << " CARACTERES.\n";
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc13(){
    statusbar();
    int x = 1;
    while (x) {
        char str[100];
        char str1[100];
        cin.ignore();
        string m = "[13]  COMPARA STRING";
        menu(m);
        cout << "\n>> INFORME A PRIMEIRA PALAVRA: ";
        gets(str);
        cout << "\n>> INFORME A SEGUNDA: ";
        gets(str1);
        char* s = str;
        char* t = str1;
        int result = compare(s,t);
        switch(result){
            case 1:
                cout << "\n=> " << str << " EH LEXICOGRAFICAMENTE POSTERIOR A " << str1 << "\n";
                break;
            case -1:
                cout << "\n=> " << str << " EH LEXICOGRAFICAMENTE ANTERIOR A " << str1 << "\n";
                break;
            case 0:
                cout << "\n=> AS DUAS PALAVRAS SAO IGUAIS.\n";
                break;
        }
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc14(){
    statusbar();
    int x = 1;
    while (x) {
        char p[100] = "99999999";
        string m = "[14]  STRING PARA INT";
        menu(m);
        cout << "\n>> INFORME UM NUMERO INTEIRO: ";
        cin.ignore();
        gets(p);
       int size = strlen(p);
       if(size > 9){
            system("cls");
            cout << "\n=> NAO SUPORTADO PELA VARIAVEL!!!";
            _sleep(2500);
        }
        else{
            int y = toInt(p);
            cout << "\n=> CONVERTERNDO STRING PARA INT: " << y;
        }
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc15(){
    statusbar();
    int x = 1;
    while (x) {
        string str;
        cin.ignore();
        string m = "[15]  REMOVE ESPACOS";
        menu(m);
        cout << "\n>> INFORME UM TEXTO: ";
        getline(cin, str);
        string str1 = substr(str);
        cout <<"\n=>" <<str1 << endl;
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc16(){
    statusbar();
    int x = 1;
    while (x) {
        string str;
        char ch;
        cin.ignore();
        string m = "[16]  QUEBRAR STRING";
        menu(m);
        cout << "\n>> INFORME UM TEXTO: ";
        getline(cin, str);
        cout << "\n>> INFORME UM CARACTERE DE REFERENCIA: ";
        ch = getchar();
        int n;
        cout << "\n=> " << str << endl;
        string* s =  split(str,ch,n);
        printText(s,n);
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc17(){
    statusbar();
    int x = 1;
    while (x) {
        cin.ignore();
        string m = "[17]  BUSCAR NA STRING";
        menu(m);
        cout << "\n>> INFORME A PRIMEIRA PALAVRA: ";
        string str;
        getline(cin, str);
        cout << "\nINFORME A SEGUNDA PALAVRA: ";
        string str1;
        getline(cin, str1);
        int pos = find(str, str1);
        if(pos > (int) str.length() && pos > (int)str.length()){
            cout << "\n=> " << str1 <<"NAO ESTA CONTIDA EM "<<str<<"\n";
        }
        else{
            cout << "\n=> " << str1 <<" ESTA NA POSICAO "<< pos
                 <<" EM "<< str << endl;
        }
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc18(){
    statusbar();
    int x = 1;
    while (x) {
        char str[100];
        char str1[100];
        cin.ignore();
        string m = "[18]  SOMA NUMEROS GIGANTES";
        menu(m);
        cout << "\n>> INFORME O PRIMEIRO NUMERO: ";
        gets(str);
        cout << "\n>> INFORME O SEGUNDO NUMERO:  ";
        gets(str1);
        char* p = str;
        char* q = str1;
        char* sum = soma_numeros_gigantes(p,q);
        cout <<"\n=> TOTAL = " << sum << endl;
        delete [] sum;
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc19(){
    statusbar();
    int x = 1;
    while (x) {
        int v[1000];
        int n,i;
        int less;
        int greater;
        string m = "[19]  MAIOR E MENOR DO VETOR";
        menu(m);
        cout << "\n>> INFORME A QUANTIDADE DE NUMEROS: ";
        cin >> n;
        if(n == 1)
           greater = less = 0;
        for( i=0;i<n;i++){
            cout << "\n>> INFORME O TERMO " << i+1 <<" : ";
            cin>>v[i];
        }
        v[i] = 0;
        int* p = v;

        search(p, greater, less);
        cout <<"\n=> INDICE DO MAIOR: " << greater
             <<"\n=> INDICE DO MENOR: " <<less;
        delete [] p;
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
void opc20(){
    statusbar();
    int x = 1;
    while (x) {
        int column;
        int line;
        string m = "[20]  SOMA MATRIZ";
        menu(m);
        cout << "\n>> INFORME A QUANTIDADE DE LINHAS: ";
        cin >> line;
        cout << "\n>> INFORME A QUANTIDADE DE COLUNAS: ";
        cin >> column;
        int** A = newmat(line, column);
        int** B = newmat(line, column);
        cout << "\nINFORME OS VALORES DA MATRIZ A:\n\n";
        readmat(A,line,column);
        cout << "\n>> INFORME OS VALORES DA MATRIZ B:\n\n";
        readmat(B,line,column);
        int** C =  soma_matriz(A,B,line, column);
        cout << "\n=> SOMA DE A E B:\n\n";
        printmat(C,line,column);
        deletemat(A,line);
        deletemat(B,line);
        deletemat(C,line);
        cout << "\n\n>> MENU PRINCIPAL [0]\n>> CONTINUAR      [1]\n>> ";
        cin >> x;
        system("cls");
    }
    statusbar();
}
