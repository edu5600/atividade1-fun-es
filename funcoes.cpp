#include <iostream>

 //A)

void exA1 () {
    int x;
    std::cin >> x;
    std::cout << (x % 4 == 0? "É multiplo de quatro" : "Não é multiplo de quatro");
}

void exA2 () {
    int x;
    std::cin >> x;
    std::cout << (x % 2 == 0? "é par" : "é ímpar");
}

void exA3 () {
    int x, y, soma = 0;
    std::cin >> x >> y;
    for (int i = x; i <= y; i++) {
        soma += i;
    } 
    std::cout << soma;
}

void exA4 () {
    float raio;
    std::cin >> raio;
    std::cout << (raio * raio * raio * 4 * 3,1415 / 3);
}

void exA5 () {
    int valor;
    std::cin >> valor;
    for (int i = valor - 1; i > 1; i--) {
        valor *= i;
    }
    std::cout << valor;
}

void exA6 () {
    int base, exp, produto = 1;
    std::cin >> base >> exp;
    for (int i = 0; i <= exp; i++) {
        produto *= base;
    }
    std::cout << produto;
}

void exA7 () {
    float raio;
    std::cin >> raio;
    std::cout << (raio * raio * 3,1415);
}

void exA8 () {
    int ano;
    bool bi = false;
    std::cin >> ano;
    if (ano % 400 == 0) {
        bi = true;
    }
    else if (ano % 4 == 0 && ano % 100 != 0) {
        bi = true;
    }
    std::cout << (bi? "é bissexto" : "não é bissexto");
}

void exA9 () {
    float cel;
    std::cin >> cel;
    std::cout << ((cel * 9 / 5) + 32);
}

 //B)

bool exB1 (int x) {
    return (x % 4 == 0? true : false);
}

bool exB2 (int x) {
    return (x % 2 == 0? true : false); // true == par, false == ímpar  
}

int exB3 (int x, int y) {
    int soma = 0;
    for (int i = x; i <= y; i++) {
        soma += i;
    } 
    return soma;
}

float exB4 (float raio) {
    return (raio * raio * raio * 4 * 3,1415 / 3);
}

int exB5 (int valor) {
    for (int i = valor - 1; i > 1; i--) {
        valor *= i;
    }
    return valor;
}

int exB6 (int base, int exp) {
    int produto = 1;
    for (int i = 0; i <= exp; i++) {
        produto *= base;
    }
    return produto;
}

float exB7 (float raio) {
    return (raio * raio * 3,1415);
}

bool exB8 (int ano) {
    return (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0) ? true : false);
}

float exB9 (float cel) {
    return ((cel * 9 / 5) + 32);
}

 /*C)
 1) funções são blocos de instruções reutilizáveis;
 2) Argumentos são as as variaveis e valores fixos que a função usa em seu processamento, já os Parametros se refeream aos
    valores de "entrada" da função;
 3) int, float, void, double, char...;
 4) void se refere a um tipo de declação de função o qual elimina o retorno;
 5) por valor e por referência;
 6) int, float, void, double, char...;
 */  

int main() {



}