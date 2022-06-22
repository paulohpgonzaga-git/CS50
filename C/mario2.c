#include <cs50.h>
#include <stdio.h>

int main(void)
{
int tamanho = get_int("Digite o valor da pilha -> ");

    for (int i=tamanho;i>=1;)
    {
        for (int y=i;y>=1;)
        {
        printf("#");
        y--;
        }
        printf("\n");
        //printf("%i\n",i);
    i--;
    }
}
