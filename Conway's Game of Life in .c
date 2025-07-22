#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main() {
  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));
  int tabuleiro[TAM][TAM];
  int tabuleiroNovo[TAM][TAM];
  int geracoes, n = 0;

  printf("Geracao inicial:\n");
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      tabuleiro[i][j] = rand() % 2;
      printf("%d ", tabuleiro[i][j]);
      tabuleiroNovo[i][j] = tabuleiro[i][j];
    }
    printf("\n");
  }

  do {
    printf(
        "\nDigite o número de gerações do tabuleiro de Conway desejadas: \n");
    scanf("%d", &geracoes);

    if (geracoes <= 0) {
      printf("Digite uma quantidade válida!");
    }
  } while (geracoes <= 0);

  while (n < geracoes) {
    for (int i = 0; i < TAM; i++) {
      for (int j = 0; j < TAM; j++) {
        int vizinhos = 0;

        for (int deslocamento_i = -1; deslocamento_i <= 1; deslocamento_i++) {
          for (int deslocamento_j = -1; deslocamento_j <= 1; deslocamento_j++) {
            if (deslocamento_i == 0 && deslocamento_j == 0) {
              continue;
            }
            int novo_i = deslocamento_i + i;
            int novo_j = deslocamento_j + j;

            if (novo_i >= 0 && novo_i < TAM && novo_j >= 0 && novo_j < TAM) {
              if (tabuleiro[novo_i][novo_j] == 1) {
                vizinhos++;
              }
            }
          }
        }

        if (tabuleiro[i][j] == 1) {
          if (vizinhos < 2 || vizinhos > 3) {
            tabuleiroNovo[i][j] = 0;
          } else {
            tabuleiroNovo[i][j] = 1;
          }
        } else {
          if (vizinhos == 3) {
            tabuleiroNovo[i][j] = 1;
          }
        }
      }
    }
    printf("\nNova geração: Geração %d\n", n + 1);
    for (int i = 0; i < TAM; i++) {
      for (int j = 0; j < TAM; j++) {
        printf("%d ", tabuleiroNovo[i][j]);
        tabuleiro[i][j] = tabuleiroNovo[i][j];
      }
      printf("\n");
    }
    n++;
  }
  return 0;
}
