# Projeto 4 — RankLab: Central de Ordenação Inteligente

## Integrantes
- **Nome:** Gustavo Duarte Ferreira Barros
- **RGM:** 46715177

## Objetivo
Receber dez pontuações inteiras entre 0 e 100, preservar o vetor original e comparar três algoritmos de ordenação: Bubble Sort, Selection Sort e Insertion Sort.

## Arquivos
- `projeto4_ranklab.c` — código-fonte em Linguagem C.
- `capturas/` — três capturas dos testes exigidos.
- `resultados/` — saídas completas dos testes executados.

## Compilar e executar
Com GCC instalado:

```bash
gcc -std=c11 -Wall -Wextra -pedantic projeto4_ranklab.c -o ranklab
./ranklab
```

No Windows, execute `ranklab.exe` após a compilação.

## Funcionamento
1. O programa solicita dez pontuações inteiras.
2. Aceita somente valores de 0 a 100; entradas fora do intervalo são recusadas.
3. Preserva o vetor original e cria três cópias independentes.
4. Ordena cada cópia com um algoritmo diferente.
5. Exibe os vetores, verifica se os resultados são iguais e conta comparações.
6. Calcula menor valor, maior valor e mediana.

## Explicação dos algoritmos
- **Bubble Sort:** compara elementos vizinhos e troca suas posições quando estão fora de ordem. A cada passagem, um dos maiores valores chega ao final.
- **Selection Sort:** procura o menor elemento da parte ainda não ordenada e o coloca na próxima posição disponível.
- **Insertion Sort:** percorre os elementos e insere cada valor na posição correta da parte que já está ordenada.

## Como as comparações são contadas
- **Bubble Sort:** cada comparação entre dois elementos vizinhos.
- **Selection Sort:** cada comparação feita durante a busca pelo menor elemento.
- **Insertion Sort:** cada comparação entre a chave e um elemento anterior. A verificação do índice (`j >= 0`) não é contabilizada.

## Resultados dos testes
| Teste | Bubble Sort | Selection Sort | Insertion Sort |
| :--- | ---: | ---: | ---: |
| 1 — Principal | 45 | 45 | 29 |
| 2 — Já ordenado | 45 | 45 | 9 |
| 3 — Ordem inversa | 45 | 45 | 45 |

## Entradas e resultados esperados

### Teste 1 — Principal
**Entrada:** `78 95 62 88 74 91 55 83 69 100`

**Ordenado:** `55 62 69 74 78 83 88 91 95 100`

### Teste 2 — Já ordenado
**Entrada:** `10 20 30 40 50 60 70 80 90 100`

**Ordenado:** `10 20 30 40 50 60 70 80 90 100`

### Teste 3 — Ordem inversa
**Entrada:** `100 90 80 70 60 50 40 30 20 10`

**Ordenado:** `10 20 30 40 50 60 70 80 90 100`

### Teste 4 — Valores repetidos
**Entrada:** `70 50 70 90 50 80 90 60 80 60`

**Ordenado:** `50 50 60 60 70 70 80 80 90 90`

### Validação
Foi digitado `-5` como pontuação. O programa recusou o valor e solicitou uma nova entrada; em seguida, aceitou `75`.

## Capturas de tela
- `capturas/teste_principal.png`
- `capturas/ordem_inversa.png`
- `capturas/valores_repetidos.png`

## Conclusão
Os três algoritmos produziram o mesmo vetor em ordem crescente nos testes executados. Apesar de chegarem ao mesmo resultado, usam estratégias diferentes para organizar os dados. A tabela registra a quantidade de comparações contabilizadas pela implementação deste programa.

## Verificação da entrega
- Código compilado com GCC usando `-Wall -Wextra -pedantic`.
- Testes principal, já ordenado, ordem inversa e valores repetidos executados.
- Entrada inválida `-5` recusada.
- Vetores Bubble, Selection e Insertion conferidos como iguais em cada teste.
