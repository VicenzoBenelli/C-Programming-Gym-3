
# 📘 Exercícios em C – Fundamentos de Algoritmos e Estruturas

Este repositório contém uma coletânea de exercícios desenvolvidos em linguagem C com o objetivo de praticar estruturas de controle, arrays, funções, manipulação de strings e estruturas.

---

## 📌 Lista de Exercícios

---

### 🔁 exercicio_1.c – Inversão de Ordem com Struct

**Objetivo:** Armazenar 5 números em um `struct` e exibir a sequência invertida.

**Peculiaridades:**
- Uso de `struct Numeros` para encapsular os valores.
- Impressão da sequência invertida usando loop `for` decrescente.

**Exemplo de saída:**
```
Digite o 1 numero do array: 10
...
Sequencia numerica invertida:
50, 40, 30, 20, 10
```

---

### ➕ exercicio_2.c – Soma de 10 Números com Struct

**Objetivo:** Armazenar 10 números e calcular a soma total.

**Peculiaridades:**
- Uso de struct para armazenar os valores.
- Acúmulo em tempo real durante o laço de entrada.

---

### 📈 exercicio_3.c – Maior e Menor Valor (float)

**Objetivo:** Determinar o maior e o menor valor entre 5 números reais.

**Peculiaridades:**
- Uso de `float` para precisão decimal.
- Inicialização das variáveis `maior` e `menor` com o primeiro elemento.
- Condicional para atualizar os extremos.

---

### 🔤 exercicio_4.c – Contagem e Inversão de Caracteres

**Objetivo:** Ler uma string (nome) e mostrar:
1. Caracteres individualmente
2. Nome invertido

**Peculiaridades:**
- Contagem manual de caracteres usando laço `for`.
- Impressão invertida sem uso de biblioteca externa.

---

### 🔗 exercicio_5.c – Concatenação de Strings

**Objetivo:** Concatenar duas palavras em uma única string.

**Peculiaridades:**
- Uso da função `strcat` para juntar `palavra1` + `" "` + `palavra2`.
- Manipulação básica de strings com segurança.

---

### 🔍 exercicio_6.c – Contador de Caracteres Específicos

**Objetivo:** Contar quantas vezes uma letra aparece em uma string.

**Peculiaridades:**
- Uso de `getchar()` para limpar o buffer.
- Laço percorre toda a string, comparando cada caractere com o alvo.

---

### 🧮 exercicio_7.c – Função para Somar Array

**Objetivo:** Criar uma função que soma todos os elementos de um array de inteiros.

**Peculiaridades:**
- Função modular `ArrayInteiros()` separada do `main`.
- Passagem de array como argumento.
- Uso de variável `tamanho` para controle do conjunto.

---

## 🛠️ Boas Práticas Utilizadas

- `setlocale(LC_ALL, "Portuguese_Brazil");` para acentuação correta no terminal.
- `getchar()` após `scanf()` para limpar o buffer e evitar problemas em leitura de `char`.
- `strcat()` e `strlen()` para manipulação segura de strings.
- Modularização com funções para melhorar a legibilidade.

---

## 💡 Sugestões de Evolução

- Substituir arrays simples por `struct` com múltiplos campos (ex: nome + idade).
- Implementar menus interativos.
- Validar tipos de entrada do usuário.
- Expandir para uso de arquivos (`fopen`, `fscanf`, etc.).

---

## 🚀 Como Executar

1. Compile com GCC:

```bash
gcc exercicio_1.c -o ex1
./ex1
```

Repita para os demais arquivos alterando os nomes.

---

## 🧑‍💻 Autor

Desenvolvido por **Vicenzo Benelli**  
📌 GitHub: [@VicenzoBenelli](https://github.com/VicenzoBenelli)

---

🧠 "Programar é ensinar o computador a pensar por você. C é só o idioma que ele entende melhor."
