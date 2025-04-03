# Bubble Sort Explicado vde-maga

> Este algoritmo de sorting é usado no exercício 08 do C01

## Código

```c
void    ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - 1 - i)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}
```

## Explicação por Texto

- Criamos a função `ft_sort_int_tab`:
    - Nela, recebemos duas variáveis, da função `main`:
        - Um array, recebido através do ponteiro `*tab` que contém inteiros.
        - O tamanho do array, através do inteiro `size`.
    - Dentro da função, criamos 3 variáveis:
        - Duas variáveis para controlar os ciclos `while`: `i` e `j`.
        - Uma variável `temp`, para armazenar temporariamente um valor durante a troca.
    - O primeiro ciclo `while` tem como função percorrer todas as posições presentes no array `*tab`:
        - Ele funciona porque estamos a dizer que, enquanto `i` for menor que o tamanho do array menos um (`size - 1`), executa o bloco de código:
            - Usamos `size - 1` porque o tamanho do array não corresponde à maior posição do array, já que os arrays começam em 0, ao invés de 1.
        - Dentro desse ciclo, definimos `j = 0`:
            - Este passo serve para que possamos iniciar o segundo ciclo `while` para comparar elementos adjacentes.
        - Para que o loop continue, incrementamos `i` a cada iteração, para percorrer todas as posições do array.
    - Passamos para o segundo `while`:
        - Este ciclo irá comparar elementos adjacentes do array e trocá-los se necessário.
        - A condição para o segundo `while` funcionar é: enquanto `j` for menor que o tamanho do array menos um, menos `i` (`j < size - 1 - i`):
            - `j` é a variável de controlo do ciclo.
            - `size - 1` garante que `j` não acesse uma posição fora do array (arrays começam em 0).
                - Desta forma, `j` nunca irá comparar um valor fora dos limites do array.
            - `- i` serve para otimizar o código:
                - A cada iteração do ciclo externo (`i`), o maior elemento é movido para a sua posição final correta.
                - Assim, nas iterações seguintes, não há necessidade de comparar os elementos já ordenados.
                - Isto é, `i` impede a comparação dos últimos `i` elementos, que já estão ordenados.
        - Dentro do ciclo `while`, usamos um `if` para verificar se é necessária a troca:
            - Se a posição atual do array, em `j`, for maior que a posição seguinte (`j + 1`):
                - Alocamos o valor de `tab[j]` na variável `temp`.
                - Substituímos `tab[j]` pelo valor de `tab[j + 1]`.
                    - Desta forma, estamos a transportar o valor na posição `j + 1` para trás.
                - Depois, colocamos o valor armazenado em `temp` na posição `j + 1`, completando a troca.
        - Para terminar o ciclo, incrementamos `j` a cada iteração, para percorrer as várias posições do array.

### Resumo

1. **Ciclo Externo (`i`)**:
    - Itera pelo array, a cada iteração fixa o maior elemento na sua posição final.
2. **Ciclo Interno (`j`)**:
    - Compara e troca elementos adjacentes.
    - A condição `j < size - 1 - i` garante que elementos já ordenados não sejam verificados novamente.
3. **Troca de Elementos**:
    - Utiliza uma variável temporária (`temp`) para efetuar as trocas.