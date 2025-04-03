# Prompts ChatGPT Explicação dos Exercícios

```
Olá! Preciso da tua ajuda para explicares uns exercícios relacionados a programação em C. A minha ideia é eu te enviar o enunciado dos exercícios e as soluções juntas. Gostava que, na hora da explicação, seguisses passo a passo, a lógica de porquê ser assim e alguns insights de porquê que funciona assim. Tenho uma explicação que eu próprio fiz, que gostava que seguisses como exemplo:

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
        - 
```