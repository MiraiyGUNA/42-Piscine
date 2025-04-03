# shell01

## ex01 - Falta Mais uma Parte do Código

```bash
id $FT_USER -G -n | tr ' ' ','
```

## ex02 

```bash
find . -type f -name `*.sh` -execdir basename `{}` \; | awk -F `.` `{print $1}`;
```

find = procurar
. = subdiretorios
-type f = procurar apenas ficheiros
-name `*.sh` = procura apenas por nomes que tenham .sh 
-execdir basename `{}` \; = executa o comando basename em todos os ficheiros e diretórios 
basename = apenas mostra o nome do ficheiro e não as barras antes

## ex03

```bash
#!/bin/sh
find . -type f -o -type d | wc -l
```

Type f ficheiros
-o ou
Type d diretórios

Wc word count
-l linhas

## ex04

```bash
ifconfig | awk '/ether/ {gsub(/ /,""); print $2}'
```

- `ifconfig` = configurações de rede da máquina
- `|` (pipe) = resultado de um comando, vai para o próximo (ifconfig vai para o awk)
- awk '/ether/ {gsub(/ /,""); print $2}'
	- /ether/ = procurar linhas com a palavra /ether/
	- gsub(/ /, "") = substituir todos os espaços em branco, por uma string vazia
	- print $2 = printa a segunda coluna 


## ex05

```bash
echo 42 > "\?$*'MaRViN'*$?\"
```

