#include <stdio.h>

// A função principal é onde tudo começa, é daqui que o computador entende que o programa tem que rodar.
int main() {
    
    // 1. Criação do tabuleiro do jogo.
    // Aqui eu reservo um espaço na memória para guardar o meu tabuleiro 5x5.
    // O 0 é para representar onde é só água e o 1 é onde eu escondi o meu navio.
    int tabuleiro[5][5] = {
        {0, 0, 0, 0, 0}, // Linha 0: só água
        {0, 1, 1, 0, 0}, // Linha 1: coloquei uns navios aqui para testar
        {0, 0, 0, 0, 0}, // Linha 2: água pura
        {0, 0, 0, 1, 1}, // Linha 3: mais navios aqui embaixo
        {0, 0, 0, 0, 0}  // Linha 4: fechando com água
    };

    // Aqui eu crio as variáveis para guardar a linha e a coluna que eu vou escolher.
    // Preciso disso para o computador saber onde eu quero atacar.
    int linha, coluna;

    printf("--- Batalha Naval ---\n");
    printf("O objetivo e tentar acertar onde eu escondi os navios no tabuleiro.\n");
    printf("As coordenadas vao de 0 ate 4.\n\n");

    // 2. Aqui eu pego o que eu digito no teclado.
    // O scanf é o que faz o programa pausar e esperar eu digitar o número.
    // Esse & é muito importante para indicar onde o valor que eu digitei vai ficar guardado.
    printf("Digite o numero da linha onde eu quero atirar (0 a 4): ");
    scanf("%d", &linha);
    
    printf("Agora, digite o numero da coluna onde eu quero atirar (0 a 4): ");
    scanf("%d", &coluna);

    // 3. Hora da lógica de decisão.
    // Primeiro, eu vejo se o que eu digitei faz sentido.
    // Se eu digitar um número maior que 4 ou menor que 0, não faz sentido, então o programa me avisa.
    if (linha < 0 || linha > 4 || coluna < 0 || coluna > 4) {
        printf("Poxa, essa coordenada nao existe no tabuleiro!\n");
        printf("Eu tenho que digitar um numero entre 0 e 4 para funcionar.\n");
    } else {
        // Se a coordenada for válida, eu verifico o que tem naquela posição da matriz.
        // Se o valor for 1, significa que eu acertei em cheio um navio.
        if (tabuleiro[linha][coluna] == 1) {
            printf("Boa! Eu acertei um navio!\n");
        } else {
            // Se o valor for 0, só sobrou água.
            printf("Que pena, eu errei o tiro, so tem agua aqui.\n");
        }
    }

    // 4. Finalização.
    // O return 0 serve para fechar o programa e avisar que rodou tudo certo.
    return 0;
}