# Atividade 4: "O Jukebox Mágico"

## Objetivo: Criar um mini-programa interativo que simula uma aplicação real, usando um vetor de strings.

**Materiais**: Laboratório de informática.

**Desenvolvimento**:

A Proposta: "Vamos criar um Jukebox! Nosso programa terá um vetor que guarda o nome de 5 músicas. O usuário poderá escolher o que fazer."

Funcionalidades a Implementar:

1. **Listar Músicas**: O programa deve percorrer o vetor e imprimir o nome de cada música com seu número (índice + 1 para ficar mais amigável).

2. **Escolher Música pelo Número**: O usuário digita um número (ex: 3) e o programa toca (imprime na tela) o nome da música correspondente. (Atenção para o índice = numero_escolhido - 1).

3. **Adicionar uma Nova Música**: (Desafio extra) Peça para o usuário digitar o nome de uma nova música e um índice onde ele gostaria de adicioná-la, substituindo a que estava lá.

4. **Pesquisar Música**: O usuário digita um nome de música e o programa diz se ela está ou não na playlist.

**Estrutura**: Montar o menu principal com um escolha-caso (switch-case) ou se-senao (if-else) e, dentro de cada opção, desenvolver a lógica com os vetores.