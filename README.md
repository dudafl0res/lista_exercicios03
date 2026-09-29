# Desafio Final - Pedidos de uma lanchonete

## 1. Descrição do problema

Na lanchonete o atendente precisa somar os pedidos, ver se tem desconto e calcular o troco. O programa mostra o cardápio, vai somando os itens até o cliente finalizar, dá 10% de desconto se o pedido for de R$ 50 ou mais e calcula o troco.

Cardápio: 1 - X-Burguer R$ 18 | 2 - X-Salada R$ 20 | 3 - Batata frita R$ 12 | 4 - Refrigerante R$ 6 | 5 - Suco R$ 8 | 0 - Finalizar

## 2. Entradas

- codigo do item (0 para finalizar)
- qtd (quantidade do item)
- pago (valor que o cliente deu)

## 3. Processamento

- Repete o cardápio até o código 0.
- Para cada item: total = total + preco * qtd e itens = itens + qtd.
- Se total >= 50, desconto = total * 0.10, senão desconto = 0.
- pagar = total - desconto
- Se pago >= pagar, troco = pago - pagar, senão o valor é insuficiente.

## 4. Saídas

Quantidade de itens, total, desconto, valor a pagar e troco.

## 5. Pseudocódigo

```
Algoritmo Lanchonete
Var
   codigo, qtd, itens: inteiro
   preco, total, desconto, pagar, pago: real
Inicio
   total <- 0
   itens <- 0
   Repita
      Escreva("1-X-Burguer 2-X-Salada 3-Batata 4-Refrigerante 5-Suco 0-Finalizar")
      Leia(codigo)
      Escolha codigo
         caso 1: preco <- 18
         caso 2: preco <- 20
         caso 3: preco <- 12
         caso 4: preco <- 6
         caso 5: preco <- 8
         outrocaso: preco <- 0
      FimEscolha
      Se preco > 0 entao
         Leia(qtd)
         total <- total + preco * qtd
         itens <- itens + qtd
      Senao
         Se codigo <> 0 entao
            Escreva("Codigo invalido")
         FimSe
      FimSe
   Ate codigo = 0
   Se total >= 50 entao
      desconto <- total * 0.10
   Senao
      desconto <- 0
   FimSe
   pagar <- total - desconto
   Escreva(itens, total, desconto, pagar)
   Leia(pago)
   Se pago >= pagar entao
      Escreva("Troco: ", pago - pagar)
   Senao
      Escreva("Valor insuficiente")
   FimSe
Fim
```

## 6. Fluxograma

![fluxograma](../fluxogramas/desafio_final.png)

## 7. Teste de mesa

**Cenário 1 - sem desconto:** 2 X-Burguer e 2 refrigerantes, pagou R$ 50

| codigo | qtd | total | itens |
|---|---|---|---|
| 1 | 2 | 36 | 2 |
| 4 | 2 | 48 | 4 |
| 0 | - | 48 | 4 |

Total 48 é menor que 50, desconto 0, pagar 48. Troco: R$ 2,00

**Cenário 2 - com desconto:** 2 X-Salada, 1 batata e 1 suco, pagou R$ 100

| codigo | qtd | total | itens |
|---|---|---|---|
| 2 | 2 | 40 | 2 |
| 3 | 1 | 52 | 3 |
| 5 | 1 | 60 | 4 |
| 0 | - | 60 | 4 |

Total 60 é maior que 50, desconto 6, pagar 54. Troco: R$ 46,00

**Cenário 3 - código inválido e dinheiro insuficiente:** 1 batata, depois código 9, pagou R$ 10

| codigo | qtd | total | itens | saída |
|---|---|---|---|---|
| 3 | 1 | 12 | 1 | |
| 9 | - | 12 | 1 | Codigo invalido |
| 0 | - | 12 | 1 | |

Pagar 12, pagou 10: Valor insuficiente

## 8. Explicação

Usei um do while para o cardápio ficar repetindo até o cliente digitar 0, e um switch para pegar o preço de cada item. As variáveis total e itens começam em zero e vão somando a cada pedido. No final um if vê se tem desconto e outro if vê se o dinheiro dá para pagar.
