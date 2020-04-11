#include "mylib.h"
//1A5 DESENHA RETANGULO PREENCHIDO
void desenha_retangulo_preenchido(int line, int col, char border, char fill){
   for( int i = 0; i <= line; i++ ){
       for( int j = 0; j <= col; j++ ){
            if( i > 0 && i < line ){
                if( j > 0 && j < col  )
                    cout << fill;
                else
                    cout << border;
            }
            else
                cout << border;
       }
        cout << '\n';
   }
}
//1B2 VOLUME ESFERA
double volume_esfera(double raio){
    return ( 4*PI*raio*raio*raio )/3;
}
//1B6 FATORIAL
unsigned long long int fatorial(unsigned long long int num){
    unsigned long long int fat = 1;
    for(int i = 2; i <=(int)num;i++) fat*=i;
    return fat;
}
//1B8 FIBONACCI
unsigned long long int fib(int num){
    unsigned long long int fib[num];
    fib[0] = 0;
    fib[1] = 1;
    for(int i=2; i<= num; i++) fib[i] = fib[i-2] + fib[i-1];
    return fib[num-1];
}
//1B9 NUMERO REGULAR
bool reg(int num){
    bool is_reg = true;
    int i = 2,j = 0;
    int div[100];
    int count = 0;
    while(num!=1){
        while(num%i==0){
            if(count == 0){
                div[j] = i;
                j++;
            }
            count++;
            num/=i;
        }
        count = 0;
        i++;
    }
    div[j] = i;
    for(i=0;i<j;i++){
        if(div[i]!=2&&div[i]!=3&&div[i]!=5)
            is_reg = false;
    }
    return is_reg;
}
//1B10 FATORIAL
long long int fat(int num){
    unsigned long long int result = 1;
    for(int i = 2; i <= num; i++)
        result *= i;
    return result;
}
long long int comb(int n, int p){
    long int comb = fat(n)/( fat(p) * fat(n-p) );
    return comb;
}
//1C3 PALINDROMO
bool palindromo(string palavra){
    bool palidromo = true;
    string aux = palavra;
    reverse( palavra.begin(), palavra.end() );
    for (int i=0;i<(int)palavra.length();i++){
        if(palavra[i] != aux[i])
            palidromo = false;
    }
    return palidromo;
}
//1C5 CONVERTE PARA MINUSCULA
string to_lower_case(string palavra){
    string pal = "";
    for( int i=0; i<(int)palavra.size(); i++ )
        pal+= ( palavra[i] >= 'A' && palavra[i] <= 'Z')? ( palavra[i] -'A'+'a' ): palavra[i];
    return pal;
}
//1C6 COVERTE PARA MAIUSCULO
string to_upper_case(string palavra){
    string pal = "";
    for( int i=0; i<(int)palavra.size(); i++ )
        pal+= ( palavra[i] >= 'a' && palavra[i] <= 'z')? ( palavra[i] -'a'+'A' ): palavra[i];
    return pal;
}
//1C7 CAIXA COM TEXTO CENTRALIZADO
void caixa_com_texto_centralizado(int length, char border, string text){
    int sizeText = text.end() - text.begin();
    int count = 0;
    int tabs = length - sizeText - 2;
    for(int i=0;i<3;i++){
        for(int j=0;j<length;j++){
            if(i==0||i==2)
                putchar(border);
            else{
                if(j==0 ||j==length-1)
                    putchar(border);
                else{
                     if(j<=tabs/2)
                          putchar(' ');
                      else{
                           if(j<=(tabs/2)+sizeText){
                                putchar(text[count]);
                                count++;
                            }
                            else
                                putchar(' ');
                        }
                }
            }
        }
        putchar('\n');
   }
}
//2A1 ORDENA NUMEROS
void troca(int* pt_a, int* pt_b,int* pt_c){
    int aux;
    if(*pt_a >= *pt_b){
        if(*pt_b >= *pt_c){//A MAIOR C MENOR 5 2 1
            aux = *pt_a;//5
            *pt_a = *pt_c;//1
            *pt_c = aux;//5
        }
        else{// A MAIOR QUE B E C MAIOR QUE B
            if(*pt_a >= *pt_c){// A MAIOR B MENOR 5 1 2
                aux = *pt_a;//5
                *pt_a = *pt_b;//1
                *pt_b = *pt_c;//2
                *pt_c = aux;//5
            }
            else{// C MAIOR B MENOR 2 1 5
                aux = *pt_a;//2
                *pt_a = *pt_b;//1
                *pt_b = aux;//2
            }
       }
    }
    else{// A MENOR QUE B E
        if(*pt_b >= *pt_c){//B MAIOR A MENOR 1 5 2
            aux = *pt_b;//5
            *pt_b = *pt_c;//2
            *pt_c = aux;//5
        }
    }
    if(*pt_c>= *pt_a){// A MENOR QUE C
        if(*pt_a >= *pt_b){ // B MENOR QUE A
           //C MAIOR B MENOR 2 1 5
            aux = *pt_a;//2
            *pt_a = *pt_b;//1
            *pt_b = aux;//2
        }
    }
}
//2A3 TAMANHO STRING
int strlen(char* str){
    int count = 0;
    while (str[count]) count++;
    return count;
}
//2A4 COMPARA STRING
int compare(char* s, char* t){
    int i = 0,j = 0, count = 0,r;
    while (s[i])i++;
    while (t[j]) j++;
    while ((s[count] && t[count]) && (s[count] == t[count])) count++;
    if(s[count]==t[count]){
        if( i == j)
            r = 0;
        else
            r = -1;
    }
    else{
        if(s[count] < t[count])
            r = -1;
        else
            r = 1;
    }
    return r;
}
//2B1 CONVERTE PARA INT
int toInt(char* p){
    int count, base = 1, num = 0;
    count =  strlen(p);
    while(count != 0){
        if(p[count-1] == '-')
            num*=-1;
        else
            num += (p[count-1]-48) * base;
        count--;
        base *= 10;
    }
    return num;
}
//2B3 SUBTRAI ESPAÃ‡O
string substr(string s){
    string t = "";
    int i = 0;
    int j = strlen(s);
    while(s[i] == ' ') i++;
    while(s[j] == ' ') j--;
    for(; i < j; i++) t+=s[i];
    return t;
}
//2B4 QUEBRA STRING
int strlen(string s){
    int count = 0;
    while (s[count]) count++;
    return count;
}
int count(string s, char ch, int size){
    int count = 0;
    for (int i = 0; i < size; i++){
      if(s[i] == ch) count++;
    }
    return count+1;
}
string* split (string s, char ch, int &n){
    int size_text = strlen(s);
    n = count(s, ch, size_text);
    string r = "";
    string* t = new string [n];
    int i,j = 0;
    for(i = 0; i < size_text; ++i){
        if(s[i] != ch) r+=s[i];
        else{
            t[j] = r;
            r = "";
            j++;
        }
    }
    t[j] = r;
    return t;
}
void printText(string* t, int n){
    cout << '\n';
    for (int i=0;i<n;++i) cout << "=> STRING " << i+1 << ": "<< t[i] << endl;
}
//2B5 BUSCA NA STRING
int find(string s, string t){
    int i,j = 0,tam;
    string aux = "";
    int  size_s = strlen(s);
    int  size_t = strlen(t);
    for(i=0;i<=size_s;++i){
       if(s[i]==t[j]&&j<size_t){
               j++;
               aux+=s[i];
       }
       else{
           if(j==size_t){
               tam = i-size_t;
               i = size_s;
           }
           aux = "";
           j = 0;
       }
    }
    return  tam;
}
//2B6 SOMA NUMEROS GIGANTES
char* soma_numeros_gigantes(char* p, char* q);
int strlen(char* s);
int largest(int x, int y);
int strlen(char* p);
int largest(int x, int y);
char add(char v1, char v2, int &quoc);
void del(char* s, char* t, int x, int y );
char* fill(char* str, int size, int diff);
char* verify(char* s, int quoc);
int largest(int x, int y){
    int size;
    if(x>y)
        size = x;
    else{
        if(x<y)
            size = y;
        else
            size = y;
    }
    return size;
}
char add(char v1, char v2, int &quoc){
    int soma;
    int n1 = v1 - '0';
    int n2 = v2 - '0';
    soma = n1+n2+quoc;
    quoc = soma/10;
    soma%=10;
    char sum = soma+'0';
    return sum;
}
char* fill(char* str, int size, int diff){
    char* str1 = new char[size];
    int i;
    for(i=0;i<diff;i++) str1[i] = '0';
    for(i=diff;i<size;i++) str1[i] = str[i-diff];
    str1[i] = 0;
    return str1;
}
char* verify(char* s, int quoc){
    if(quoc!=0){
        int size = strlen(s)+1,i;
        char* str = new char[size];
        str[0] = quoc+'0';
        for(i=1;i<size;i++) str[i] = s[i-1];
        str[i] = 0;
        delete s;
        return str;
    }
    else
        return s;
}
void del(char* s, char* t, int x, int y ){
    if(x>y)
        delete s;
    else{
        if(x<y)
            delete t;
    }
}
char* soma_numeros_gigantes(char* p, char* q){
       int size_p = strlen(p);
       int size_q = strlen(q);
       int size_sum = largest(size_p,size_q);
       int diff = abs(size_p-size_q);
       int quoc = 0;
       if(size_p > size_q)
         q = fill(q,size_p,diff);
       if(size_p < size_q)
         p = fill(p,size_q,diff);
       char* sum = new char[size_sum];
       sum[size_sum] = 0;
       for(int i=size_sum-1;i>=0;i--) sum[i] = add(p[i],q[i],quoc);
       sum = verify(sum,quoc);
       return sum;
}
//2C4 MAIOR E MENOR VETOR
int length(int* v){
    int count = 0;
    while (v[count]) count++;
    return count;
}
void search(int* p, int &g, int &l){
    int length_v = length(p);
    int maior = -999999999;
    int menor = 999999999;
    for(int i=0;i<length_v;i++){
        if(p[i] > maior){
            maior = p[i];
            g = i;
        }
        if(p[i] < menor){
            menor = p[i];
            l = i;
        }
    }
}
//2D6 SOMA MATRIZ
void readmat(int** m, int l, int c){
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++) cin >> m[i][j];
}
int** newmat(int l, int c){
    int** mat = new int*[l];
    for(int i=0;i<l;i++) mat[i] = new int[c];
    return mat;
}
void deletemat(int**m,int l){
    for(int i=0;i<l;i++) delete m[i];
    delete [] m;
}
void printmat(int** m, int l, int c){
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++) cout << m[i][j] << '\t';
        cout << endl;
    }
}
int** soma_matriz(int** A, int** B, int l, int c){
    int** C = newmat(l,c);
    for(int i=0;i<l;i++){
        for(int j=0;j<c;j++) C[i][j] = A[i][j] + B[i][j];
    }
    return C;
}
void error(){
    cout <<"************************OPCAO INVALIDA!!!****************************\n";
    _sleep(2500);
}
