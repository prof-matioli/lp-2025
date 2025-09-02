# O Desafio do Arsenal Lendário: Dominando os Arrays em C

## Introdução:

Caros aprendizes de programação,

Sejam bem-vindos ao "Desafio do Arsenal Lendário"! Nesta jornada épica, vocês não serão meros estudantes, mas sim habilidosos ferreiros digitais, encarregados de forjar e organizar um arsenal de artefatos mágicos. A cada desafio superado, vocês não apenas aprimorarão suas habilidades em manipulação de arrays na linguagem C, mas também receberão fragmentos de uma antiga e poderosa armadura. Aquele que completar todas as fases e reunir a armadura completa será coroado como o "Mestre do Arsenal".

Este desafio foi projetado para ser uma aventura incremental, onde a complexidade aumenta a cada fase, permitindo um aprendizado sólido e motivador dos conceitos de lógica de programação e estruturas de dados.

__Fase 1__: A Forja dos Elementos Básicos
Missão: Você acaba de receber sua primeira encomenda: um conjunto de espadas de bronze. Sua tarefa é organizar essas espadas por seu poder de ataque e identificar a mais forte e a mais fraca para o Mestre de Armas.

O Desafio:

Declare um array: Crie um array de inteiros para armazenar o poder de ataque de 10 espadas.

Preencha o array: Solicite ao usuário que insira o poder de ataque de cada uma das 10 espadas.

Encontre o maior e o menor valor: Percorra o array para encontrar a espada com o maior e o menor poder de ataque.

Exiba os resultados: Mostre na tela o poder de ataque da espada mais forte e da mais fraca.

Exemplo de Entrada:

Insira o poder de ataque da espada 1: 15
Insira o poder de ataque da espada 2: 25
... (até a espada 10)
Exemplo de Saída:

A espada mais poderosa tem 35 de ataque.
A espada mais fraca tem 8 de ataque.
Prêmio ao Concluir:

Ao apresentar o código funcional, você recebe as Manoplas do Aprendiz de Ferreiro. Um item que simboliza seu primeiro passo na jornada e concede +5 de "moral" para os próximos desafios.

__Fase 2__: O Arsenal Ordenado
Missão: O Mestre de Armas ficou impressionado com seu trabalho, mas agora ele precisa que o arsenal de espadas de bronze seja organizado em ordem crescente de poder, para facilitar a distribuição entre os soldados.

O Desafio:

Utilize o código da Fase 1: Reutilize o código que preenche o array com o poder das espadas.

Ordene o array: Implemente um algoritmo de ordenação (como o Bubble Sort, por ser mais intuitivo para iniciantes) para organizar os valores do array em ordem crescente.

Exiba o arsenal ordenado: Mostre na tela todos os poderes de ataque das espadas, agora em ordem.

Exemplo de Entrada (a mesma da Fase 1):

Exemplo de Saída:

Arsenal de Espadas de Bronze (em ordem de poder):
8, 12, 15, 18, 20, 22, 25, 28, 30, 35
Prêmio ao Concluir:

Você forjou com maestria a ordem no caos e, por isso, recebe as Grevas da Perseverança. Este item mágico aumenta sua "concentração", permitindo que você encare a próxima fase com mais clareza.

__Fase 3__: A Fusão dos Metais
Missão: Um novo carregamento de espadas, desta vez de prata, chegou à forja. Sua tarefa agora é unir o arsenal de espadas de bronze com o de espadas de prata, criando um único e poderoso arsenal, também ordenado.

O Desafio:

Declare e preencha dois arrays: Crie um array para as 10 espadas de bronze e outro para 5 espadas de prata. Preencha ambos com valores de poder de ataque.

Crie um terceiro array: Declare um terceiro array com tamanho suficiente para armazenar todas as espadas.

Combine os arsenais: Copie os elementos dos dois arrays (bronze e prata) para o terceiro array.

Ordene o novo arsenal: Ordene o array combinado em ordem crescente.

Exiba o resultado final: Mostre na tela o arsenal unificado e ordenado.

Exemplo de Entrada:

Arsenal de Bronze: [15, 8, 25, 30, 12, 22, 18, 28, 20, 35]

Arsenal de Prata: [40, 27, 33, 50, 45]

Exemplo de Saída:

Arsenal Unificado e Ordenado:
8, 12, 15, 18, 20, 22, 25, 27, 28, 30, 33, 35, 40, 45, 50
Prêmio ao Concluir:

Por sua habilidade em unir diferentes metais, você é recompensado com o Peitoral da União. Esta peça de armadura simboliza sua capacidade de combinar diferentes conjuntos de dados de forma harmoniosa.

__Fase 4__: Em Busca do Artefato Perdido
Missão: O Mestre de Armas está à procura de uma espada com um poder de ataque específico para uma missão especial. Ele não sabe se ela existe no arsenal unificado. Sua tarefa é criar uma ferramenta de busca para localizá-la rapidamente.

O Desafio:

Utilize o arsenal da Fase 3: Comece com o array unificado e ordenado da fase anterior.

Solicite um valor de busca: Peça ao usuário para digitar o poder de ataque da espada que deseja encontrar.

Implemente uma busca: Crie uma função que percorra o array para verificar se o valor desejado existe.

Exiba a posição ou uma mensagem:

Se a espada for encontrada, exiba uma mensagem informando que ela está no arsenal e sua posição (índice) no array.

Se não for encontrada, informe ao Mestre de Armas que o artefato não foi localizado.

Exemplo de Entrada:

Arsenal: [8, 12, 15, 18, 20, 22, 25, 27, 28, 30, 33, 35, 40, 45, 50]

Valor a ser buscado: 33

Exemplo de Saída:

A espada com poder de ataque 33 foi encontrada na posição 10 do arsenal!
Prêmio ao Concluir:

Sua visão aguçada e sua lógica precisa lhe renderam o Elmo da Visão Clara. Com ele, você é capaz de encontrar qualquer informação que precise em meio a um vasto conjunto de dados.

__Fase Final__: O Mestre do Arsenal
Missão: Você chegou à prova final. O Grande Ferreiro Ancião, impressionado com sua jornada, lhe confere a honra de gerenciar o arsenal completo. Para isso, você deverá criar um sistema que remova as armas que são entregues aos guerreiros.

O Desafio:

Utilize o arsenal da Fase 4: Comece com o array unificado e ordenado.

Solicite a remoção: Peça ao usuário para digitar o poder de ataque da espada que será removida (entregue a um guerreiro).

Remova o elemento: Encontre a espada no array e remova-a, "puxando" todos os elementos subsequentes uma posição para trás para preencher o espaço vazio. Lembre-se de atualizar o tamanho efetivo do arsenal.

Exiba o arsenal atualizado: Mostre o array final, sem o elemento removido.

Exemplo de Entrada:

Arsenal: [8, 12, 15, 18, 20, 22, 25, 27, 28, 30, 33, 35, 40, 45, 50]

Valor a ser removido: 22

Exemplo de Saída:

Arsenal Atualizado:
8, 12, 15, 18, 20, 25, 27, 28, 30, 33, 35, 40, 45, 50
Prêmio Final:

Você dominou a criação, ordenação, combinação, busca e remoção de artefatos. Por sua dedicação e maestria, você recebe a lendária Placa de Peito do Mestre do Arsenal e o título de "Mestre do Arsenal". Sua jornada como aprendiz chegou ao fim, e agora você é uma lenda na forja de dados!

Para os Instrutores:

Este desafio pode ser adaptado conforme o nível da turma. Para alunos mais avançados, pode-se introduzir:

Busca binária na Fase 4 (mais eficiente em arrays ordenados).

Uso de funções para cada operação.

Alocação dinâmica de memória para os arrays.

Criação de um menu interativo para o usuário escolher a operação a ser realizada no arsenal.

O objetivo é transformar o aprendizado de manipulação de arrays em uma experiência engajadora e recompensadora, onde cada conceito aprendido representa uma vitória tangível dentro de uma narrativa motivadora.