# 🤝 Guia de Contribuição

Obrigado por contribuir com o repositório de Ciência da Computação do IFMG!

Para manter o projeto organizado e útil para todos, siga as diretrizes abaixo.

---

## 📌 Regras Gerais

* Utilize **português/inglês** para nomes de arquivos e pastas
* Use apenas **letras minúsculas** e hífens (`-`)
* Mantenha a estrutura padrão do projeto
* Evite arquivos duplicados
* Sempre coloque os arquivos na pasta correta

---

## 📁 Organização de Pastas

Siga rigorosamente esta estrutura:

```id="7m3kdp"
0x-x-periodo/
  materia/
    slides/
    notas/
    exercicios/
    trabalhos/
    provas/
    projetos/
```
Lembrando: a estrutura do projeto está sujeita a alterações e pode ser atualizada conforme a necessidade/inclusão de novas ideias.

---

## 📝 Padrão de Nome de Arquivos

Use nomes claros e descritivos:

### ✅ Exemplos corretos:

```id="t2n9sx"
leitura-01-introduction.pdf
exercicios-lista-02.pdf
projeto-final-aeds.pdf
```

### ❌ Evite:

```id="z1y8pw"
aula1.pdf
lista.pdf
prova.pdf
```

---

## 📚 Tipos de Conteúdo Permitidos

Você pode adicionar:

* Slides (PDF, PPT)
* Resumos e anotações
* Listas de exercícios e resoluções
* Trabalhos e projetos
* Provas antigas

---

## ⚠️ Conteúdo Restrito

NÃO envie:

* Conteúdo completamente distinto do curso.
* Conteúdo falso, incerto ou de procedência duvidosa.
* Arquivos muito pesados ou desnecessários

Prefira:

* Links oficiais
* Materiais gratuitos e abertos

---
## ⚙️ 📥 Instalação do Git (para iniciantes)

Se você nunca usou Git antes, siga esse guia rápido:

1. **Baixar o Git**

- Acesse: https://git-scm.com/
- Clique em Download ou Install
- Baixe a versão para seu sistema (Windows, Linux ou Mac)

2. Instalar

- Abra o instalador
- Clique em Next em todas as etapas
👉 Pode deixar tudo no padrão (já funciona perfeitamente)

3. Verificar se deu certo

- Abra o Prompt de Comando (CMD) ou PowerShell e digite:

`git --version`

Se aparecer algo como:

`git version 2.x.x`

👉 Pronto! Git instalado com sucesso ✅

Informações de como se usar o git para contribuir com o projeto estão abaixo ⬇️

## 🔄 Como Contribuir

🧠 Visão geral

Para adicionar materiais ao repositório, você vai:
1. Fazer uma cópia do projeto (fork)
2. Baixar essa cópia no seu computador (clone)
3. Criar uma área de trabalho (branch)
4. Adicionar seus arquivos
5. Enviar suas mudanças (push)
6. Pedir para adicionar ao projeto original (Pull Request)

❗**Para conseguir contribuir com o projeto é necessário ter o GIT instalado em seu computador (caso vá utilizar via desktop)**

---

## 🔄 Passo a passo detalhado de como contribuir com o projeto
1. **Fazer um Fork**

- Acesse o repositório no GitHub
- Clique no botão "Fork" (canto superior direito)

👉 Isso cria uma cópia do projeto na sua conta

2. **Baixar o repositório (Clone)**

Depois do fork:

- Clique no botão verde "Code"
- Copie o link

No seu computador, abra o prompt de comando e execute:

```
git clone LINK_DO_REPOSITORIO
```
Entre na pasta do repositório: 
```
cd NOME_DO_REPOSITORIO
```

3. **Criar uma Branch (obrigatório)**

Nunca trabalhe direto na branch principal (`main`)
- Crie uma nova branch usando o comando git checkout -b "nome-da-branch":
```
git checkout -b feature/adicionar-resumos-banco-de-dados
```
👉 Você pode mudar o nome, mas use algo descritivo

Note: "feature/adicionar-resumos-banco-de-dados" é o nome da branch

4. **Adicionar seus arquivos**

Coloque os arquivos na pasta correta seguindo a estrutura do projeto.

- Depois, adicione ao Git:
```
git add .
```
5. **Fazer o commit**

- Salve suas alterações com uma mensagem clara:

`git commit -m "Adicionei resumos da matéria de banco de dados"`

6. **Enviar para o GitHub (Push)**

`git push origin feature/adicionar-resumos-banco-de-dados`

7. **Abrir um Pull Request**

- Vá até seu repositório no GitHub
- Clique em "Compare & pull request"
- Descreva o que você adicionou
- Clique em "Create pull request"
---

### 🆘 Tá na disney e nunca usou Git?

Sem problema — siga exatamente os passos acima.
Se tiver dúvida, peça ajuda no grupo 👍

## 📌 Regras de Pull Request

* Descreva claramente o que foi adicionado
* Não misture alterações diferentes no mesmo Pull Request
* Mantenha as mudanças simples e objetivas

---

## 🧠 Boas Práticas

* Prefira PDFs ao invés de imagens
* Organize os arquivos antes de enviar
* Adicione README.md dentro das matérias, se necessário
* Mantenha tudo limpo e fácil de navegar

---

## 💬 Sugestões

Se tiver ideias para melhorar o projeto:

* Abra uma issue
* Ou converse com os mantenedores

---

## 🚀 Objetivo

Construir um repositório **organizado, limpo e útil** para todos os alunos.

Sua contribuição faz a diferença 🙌
