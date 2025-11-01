/* interactivemenu.c */

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <windows.h>
    #include <conio.h>
#else
    #include <unistd.h>
    #include <termios.h>
    #include <sys/ioctl.h>
#endif

// Função para posicionar o cursor em uma linha e coluna específica
void linhaCol(int lin, int col){
    #ifdef _WIN32
        COORD coord;
        coord.X = col;
        coord.Y = lin;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    #else
        printf("\033[%d;%dH", lin + 1, col + 1);
    #endif
}

// Função para limpar a tela
void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Função linha que estava sendo chamada no main
void linha(int lin, int col){
    linhaCol(lin, col);
}

int main(){
    limparTela();
    linha(10, 20);
    printf("Hello World!");
    
    linha(12, 20);
    printf("Menu Interativo");
    
    linha(14, 20);
    printf("1. Opcao 1");
    
    linha(15, 20);
    printf("2. Opcao 2");
    
    linha(16, 20);
    printf("3. Sair");
    
    linha(18, 20);
    printf("Escolha uma opcao: ");
    
    return 0;
}