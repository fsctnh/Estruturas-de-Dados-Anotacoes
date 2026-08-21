# Estruturas de Dados e Algoritmos 
### Prof. André Backes
#### 21/08/2026 - Aula 1: Análise de algoritmos
---
P1: 25/09
P2: 06/11
P3: 11/12

Tese principal: Existem vários algoritmos pra resolução do mesmo problema, só que não necessáriamente eles são igualmente eficientes, algoritmos se diferenciam na quantidade de memória que usam e o tempo de execução, como escrever algoritmos mais eficientes?

As vezes, a diferença entre algoritmos pode ser irrelevante em execuções com sample size pequeno, mas podem crescer proporcionalmente com a quantidade de dados inseridos

Ferramenta: Complexidade computacional (Time complexity) medida pelo custo
**custo = memória + tempo**
Análise da complexidade: Pode ser empírica _(fazer na prática e comparar tempo de execução)_ ou matemática _(estudo das propriedades algoritmicas)_

Na análise empírica: Podemos fazer uma conta com o tempo de ciclos clock do computador pra ver o tempo gasto no algoritmo
**VANTAGENS:** 
+ Número concreto para comparação
**DESVANTAGENS:**
+ implementação do algoritmo
+ Resutado pode ser mascarado por HW ou SW
+ Dependência na inserção dos dados

Na análise matemática: Estudo da "ideia" do algoritmo, desconsiderando HW e SW.
+ Permite entender como o algoritmo se comporta de acordo com o crescimento da entrada
+ Expressa a relação entre o conjunto de dados e o aumento do tempo de processamento

## CONTAGEM DE INSTRUÇÕES
_Exemplo: lê os números numa array e substitui pelo maior_

Pergunta: Quantas instruções **simples** o algoritmo executa?
+ If: Custo zero, porém a comparação feita dentro dele tem custo
+ For: Separar em inicialização e execução, 2 isntruções na inicialização;
+ For: Todo incremento e comparação executada n vezes também conta como 2 instruções
 + Ou seja, um for normal executa 3+2n instruções só por ser inicializado e comparado.
+ Dentro do for: Um é sempre executado, outro depende do primeiro
 + No pior caso: f(n) = 4n+3 onde todos os outros serão executados

## COMPORTAMENTO ASSINTÓTICO

A função exemplo (4n + 3) é a **Complexidade de Tempo** deste algoritmo
A ideia geral é: descartar os termos que crescem muito lentamente, e manter apenas o que crescem mais rápido, no caso, provavelmente será a maior potência de n. _(custo dominante)_
+ No caso 4n + 3:
 + 4n cresce muito mais do que o 3, logo reduzimos a função para f(n) = 4n.

## Big-O NOTATION

Considera o pior caso possível para todas as entradas de tamanho n
   + O(n), por exemplo
Sempre analisa o limite superior da entrada, e pertime dizer que o comportamento de certo algoritmo nunca vai passar certo limite.

## Tipos de análise assintótica
_(Existem outros tipos, mas o principal mesmo é o O)_
---
Grande ômega: Considera o limite assintótico inferior, é usada pra analisar o **melhor caso** de execução de um algoritmo

Regra da soma: Permite a análise de complexidade de diferentes algoritmos em sequência
_**ex: O(f(n)) + O(g(n)) = O(max(f(n),g(n)))**_
Em tese, é a soma da quantidade de instruções dos algoritmos envolvidos
Tem outros, theta, pequeno-o, pequeno-omega, etc... (foque no big O)

## CLASSES DE PROBLEMAS
+ O(1)
+ O(log n)
+ O(n)
+ O(n log n)
+ O(n^2)
 + Também tem n^3, n^4, etc...
+ O(2^n)
+ O(n!)

## RELAÇÕES DE RECORRÊNCIAS 

Função recursiva: Matemáticamente definida como N! = N * (N-1)!
- A recursão é uma ferramenta que facilita processos de programação, mas nem sempre é eficiente.

Relação: Expressão que descreve uma fução nos termos das menores entradas de uma função

**Ex: Considere T(n) = T(n-1) + 3**
_Técnica de expansão:_
--- 
Pode ser escrita como:
T(n-1) = T(n-2) +3
T(n-2) = T(n-3) +3

Logo:
T(n) = ((T(n-3) + 3) + 3) + 3
Onde adicionamos 3 para cada passo adicional, podendo resumí-la para:
T(n) = T(n-k) + 3k
Expandindo, temos:
T(n) = T(1) + 3n - 3
T(1) = O(1)

Logo, a complexidade é:
T(n) = 3n-3 + O(1)
Linear O(n).

