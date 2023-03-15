#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
  int v1, v2;
  struct no *proximo;
} no;

int main()
{
  no *ini_no;
  no *proximo_no;
  int flag_continuar;
  ini_no = (no *)malloc((sizeof(no)));

  if (ini_no == NULL)
  {
    return 0;
  }

  proximo_no = ini_no;

  while (1)
  {
    printf("Digite o valor 1: ");
    scanf("%d", &proximo_no->v1);
    printf("Digite o valor 2: ");
    scanf("%d", &proximo_no->v2);
    printf("Deseja continuar? digite 1 para continuar e 0 para sair");
        scanf("%d", &flag_continuar);

    if (flag_continuar == 1)
    {
      proximo_no->proximo = (no *)malloc(sizeof(no));
      proximo_no = proximo_no->proximo;
    }
    else
    {
      break;
    }
  }

  printf("\n");
  proximo_no->proximo = NULL;
  proximo_no = ini_no;

  while (proximo_no != NULL)
  {
    printf("Valor 1: %d, Valor 2: %d\n", proximo_no->v1, proximo_no->v2);
    proximo_no = proximo_no -> proximo;
  }


  return 0;
}