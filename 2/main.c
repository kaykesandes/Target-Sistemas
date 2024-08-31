/*
2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores
 (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado
  pertence ou não a sequência.

IMPORTANTE: Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;
*/
int Fibonaccikay(int n)
{
    if (n == 0 || n == 1)
        return (1);

    int swap = 0;
    int swap1 = 1;
    int x = swap + swap1;
    while (x <= n)
    {
        if (x == n)
            return (1);
        swap = swap1;
        swap1 = x;
        x = swap1 + swap;
    }
    return (0);
}

int main(int argc, char const *argv[])
{
    printf("Função Fibonacci: ");
    int n;
    scanf("%d", &n);
    if (Fibonaccikay(n) == 1)
    {
        printf("Esse numero pertence a sequencia '%d'\n", n);
    }
    else
    {
        printf("Esse numero não pertence a sequencia '%d'\n", n);
    }
    return 0;
}
