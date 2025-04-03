# Shell Cheat Sheet

## Shell00

```bash
-p coloca /
-m separa por, 
-t organiza por tempo
```

### Que Diretório estou?

```bash
pwd
```

### Criar Ficheiros

```bash
echo hello_world > hi.txt
```

### Mudar Permissões de Ficheiros 

```bash
chmod OPTIONS FILENAME
```

Existem 3 tipos de users e podemos mudar ao remover

Exemplo

```bash
chmod u-wx testShell00
```

Suposto dá para usar 

- `-` - tirar
- `=` - igual

No `ls -l`, a ordem do que aparece é segundo esta ordem

1. User
2. Group
3. Others

Cada um é representado por 3 dígitos, pois eles são as permissões 
1. r = read
2. w = write
3. x = execute

> D no LS -l significa que é uma pasta

### Links Simbólicos 

```bash
ln -s nome1 nome2
```


#### HardLinks

```bash
ln nome1 nome2
```

### Explicação do Output de LS - l

```bash
drwxr-xr-x 6 kali kali 4096 Mar 13 2023 ALIG
```

- d = pasta // - ficheiro
- rwx = user permissions
- r-x = group permission
- r-x = other permissions
- 6 - link
- kali kali = owner/group 
- 4096 = size
- data/time
- nome

### Mudar data de ficheiros

```bash
touch -t 202512012346.30 test1
```

- ano = 2025
- mês = 12
- dia = 01
- hora = 23
- minutos = 46
- segundos = .30

> Para Link, colocar a flag `-h`

### Aumentar Tamanho de Ficheiros

```bash
truncate -s 5MB file.txt
```

> sem o MB/GB, dá para aumentar em bytes


### Criar Bash Scripts

```bash
#! /bin/sh

echo 'Hello, World!'
```

> É necessário colocar o header, para o shell perceber como rodar de forma certa

> Não Esquecer de fazer `chmod u+x NOMEDOFICHEIRO`


#### Rodar Bash Scripts

```bash
bash script.sh
```



---

## Shell01

### Display dos Groups de um User

```bash
id $NOME -G -n
```

- `-G` = Todos os Grupos 
- `-n` = Ao inves de id faz números 

### Mudar / Apagar Caracteres 

```bash
tr '' ','
```

### Encontrar Coisas

```bash
find .
```

- `.` = pesquisas no subdiretório
- `-type` = procuras especificamente, alguma coisa
	- `-type d` = diretório
	- `-type f`  = ficheiros regulares
- `-name '*.sh'` = procurar ficheiros com nome que contenha, no final, .sh
- `-execdir basename '{}' \;` = executa o comando basename, em todos os ficheiros e diretórios encontrados

### Apenas ter Acesso ao nome dos ficheiros

> O basename acaba por remover todas as barras e deixa apenas o nome e extensão dos arquivos

```bash
basename
```

### LS

#### Flags do LS

- `-m` = separar por vírgulas 
- `-t` = ordenar por tempo de modificação 
- `-p` = adicionar o \ no final dos nomes

### tar 

- `fvt` é para checkar o que está dentro


### awk

> Mostrar apenas uma coluna de uma tabela 

```bash
awk -F `.` `{print $1}` arquivo.txt
```

-F `.` = o separador de colunas é o . 
`{print $1}` = imprimir coluna 1

