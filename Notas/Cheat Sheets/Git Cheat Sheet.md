# Git Cheat Sheet

## **Criar**

- **A partir de dados existentes**  
  ```bash
  cd ~/projects/myproject
  git init
  git add .
  ```

- **A partir de um repositório existente**  
  ```bash
  git clone ~/existing/repo ~/new/repo
  git clone git://host.org/project.git
  git clone ssh://you@host.org/project.git
  ```

---

## **Mostrar**

- **Arquivos alterados no diretório de trabalho**  
  ```bash
  git status
  ```

- **Alterações em arquivos rastreados**  
  ```bash
  git diff
  ```

- **O que mudou entre `$ID1` e `$ID2`**  
  ```bash
  git diff $ID1 $ID2
  ```

- **Histórico do log**  
  ```bash
  git log
  ```

- **Histórico de alterações em um arquivo**  
  ```bash
  git log -p $file
  ```

- **Quem alterou o quê e quando em um arquivo**  
  ```bash
  git blame $file
  ```

- **Um commit identificado por `$ID`**  
  ```bash
  git show $ID
  ```

- **Um arquivo específico de um commit `$ID`**  
  ```bash
  git show $ID:$file
  ```

- **Listar todas as branches locais**  
  ```bash
  git branch
  ```

---

## **Conceitos**

### Git Basics

- `master`: branch de desenvolvimento padrão.
- `origin`: repositório remoto padrão.
- `HEAD`: branch atual.
- `HEAD^`: pai do HEAD.
- `HEAD~4`: tataravô do HEAD.

---

## **Reverter**

- **Retornar ao estado do último commit salvo**  
  ```bash
  git reset --hard # (não pode desfazer um reset hard)
  ```

- **Reverter o último commit**  
  ```bash
  git revert HEAD # Cria um novo commit.
  ```

- **Reverter um commit específico**  
  ```bash
  git revert $id # Cria um novo commit.
  ```

- **Corrigir o último commit**  
  ```bash
  git commit --amend # (após editar os arquivos).
  ```

---

## **Branch**

- **Trocar para a branch `$id`**  
  ```bash
  git checkout $id
  ```

- **Mesclar a branch1 na branch2**  
  ```bash
  git merge branch1 branch2
  ```

- **Criar uma nova branch `$branch` baseada no HEAD**  
  ```bash
  git branch $branch
  ```

- **Criar e trocar para uma nova branch baseada em outra**  
  ```bash
  git checkout -b $new_branch $other_branch
  ```

- **Deletar uma branch `$branch`**  
  ```bash
  git branch -d $branch
  ```

---

## **Atualizar**

- **Buscar as alterações mais recentes do repositório remoto (fetch)**  
   ```bash 
   git fetch 
   ```
   
 - Para aplicar: 
```git pull```