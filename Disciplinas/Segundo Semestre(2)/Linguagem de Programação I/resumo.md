# Resumo do Material de LP1

# Noções Gerais

- Programas em Pyhton tem extensão .py
- Python é multiparadigma. (Poo, procedural/imperativo, funcional) 
- Paradigma procedural ou imperativo:
	- Comandos são escritos em sequência, como uma receita de bolo	
	- Interprador de comandos executa o codigo linha por linha de cima para baixo.
	- O programa mantem variavies que mudam de valor ao longo do programa
	- O programa usa estruturas de controle que moldam o fluxo  de informação(if,else,while,for e etc) 

## Sintaxe

### Identação 
- Em python a identação(recuo e espaços em branco deixados no código) são parte da regra de sintaxe que definem
onde blocos começam e terminam
	- Para separar corretamente os níveis do código use 4 espaços. Por exemplo dentro de um if use: e na linha debaixo
de 4 espaços antes de digitar o comando
	- Exemplo: 
	``` 
	# Código Correto
	if 5 > 2:
    		print("Cinco é maior que dois!")  # Linha indentada (faz parte do 'if')
	print("Isso sempre será impresso.")    # Fora do 'if' (mesmo nível)
	```

### Palavras Reservadas

- Tabela de Palavras Reservadas: 

┌──────────────────────┬──────────────────────┐
│ Nome                 │Descrição             │
├──────────────────────┼──────────────────────┤
│ And                  │Operador Lógico é     │
├──────────────────────┼──────────────────────┤
│ Break                │Sair do loop	      │
├──────────────────────┼──────────────────────┤
│ continue             │Continua o loop       │
├──────────────────────┼──────────────────────┤
│ def		       │Define uma função     │
├──────────────────────┼──────────────────────┤
│ if		       │Se true execute       │
├──────────────────────┼──────────────────────┤
│ elif                 │outra cond. possível  │
├──────────────────────┼──────────────────────┤
│ else 		       │caso contrario execute│
├──────────────────────┼──────────────────────┤
│ for                  │Loop com contagem     │
├──────────────────────┼──────────────────────┤
│ from                 │Usado para importação │
├──────────────────────┼──────────────────────┤
│ in		       │checar um valor       │
└──────────────────────┴──────────────────────┘

┌──────────────────────┬──────────────────────┐
│ Nome	               │ Descrição            │
├──────────────────────┼──────────────────────┤
│ not                  │Operador de Negação   │
├──────────────────────┼──────────────────────┤
│ or                   │Operador Lógico ou    │
├──────────────────────┼──────────────────────┤
│ and                  │Operador Lógico E     │
├──────────────────────┼──────────────────────┤
│ while                │Loop com condição     │
├──────────────────────┼──────────────────────┤
│                      │                      │
├──────────────────────┼──────────────────────┤
│                      │                      │
├──────────────────────┼──────────────────────┤
│                      │                      │
├──────────────────────┼──────────────────────┤
│                      │                      │
├──────────────────────┼──────────────────────┤
│                      │                      │
├──────────────────────┼──────────────────────┤
│                      │                      │
└──────────────────────┴──────────────────────┘

## Comandos úteis 

- Para imprimir valores na tela usamos: print("alguma coisa aqui")
- Use ; ponto e vírgula para comandos na mesma linha
- Para pular uma linha na saída use /n: (print "alguma /n coisa aqui") 
- Para receber dados no terminal use varial = input()
	- Exemplo: nome_variavel = input()
	- Exemplo: nome_variavel = input("esse texto será mostrada antes da entrada de dados") 
- Podemos usar %.nf(que significa numero float) para dizer quantas casas decimais quer usar após a vírgula. e.g: 
	``` pi = 3.14159265
	    print("%.2f" %pi) --> saida: 3.14
	    print("%.4f" %pi) --> saida: 3.1415
	```
- Para que o print não pule uma linha ao final, podemos usar end = "" no final do print --> 	print("3 ", end"")
  
### Definição de Variáveis

- Para definir variáveis em Python, pasta dar um nome e digitar = sem se preocupar com o tipo. O tipo
é atribuido automaticamente( Tipagem dinâmica). 
- Exemplo: altura = 10
- Exemplo: largura = 3
- Exemplo: a = 29 

- Regras para definir variáveis: 
	- Deve começar com uma letra(maiúscula ou minúscula) ou com um underscore(_)	
	- Pode conter letras maiúsculas, minúsculas, números e underscore(_)
	- Em termos gerais caracteres especiais que não sejam underscore(_) são proibidos: 
	{[+-*/\.;:?!'"@#$
	- Não pode começar com Números
	- Variáveis são Case Sensitive --> A é diferente de a
	- Não pode conter palavras reservadas, usadas pelo programa

## Tipos de dados

### Tipos Numéricos
	- int (inteiros de tamanho ilimitado, positivo ou negativo) 
	- float(ponto fluatuante de dupla precisão(64bits)) 
	- Complex (Números complexos) 
#### Tipo boleano
	- Bool(Subclasse de int, pode ser convertido para true = 1 e false = 0) 

### Tipo de texto 
	- Str - Armazena caracteres em cadeados, usado para textos. Preserva os espaços. Precisa usar as aspas --> "exemplo" 

### Sequências 
	- list --> Pode ser altearado [1,2,3]
	- Tuple --> Não pode ser alterado (1,2,3) 
	- range --> Ideal para usar em um for e criar sequencias de numeros inteiros 

### Checando tipos com Type

``` 
print(type(idade))  # Retorna <class 'int'>
```

### Tipagem Dinâmica

- Diferentemente de linguagens como C ou C++, em python, não precisamos atribuir os tipos. Eles são
atribuidos automaticamente
- Exemplo de tipagem dinâmica: 
	``` 
	# 1. A variável 'x' começa guardando um número inteiro
	x = 10
	print(x, type(x))  # Saída: 10 <class 'int'>

	# 2. A MESMA variável agora passa a guardar um texto (string)
	x = "Olá, Python!"
	print(x, type(x))  # Saída: Olá, Python! <class 'str'>

	# 3. Agora ela passa a guardar uma lista
	x = [1, 2, 3]
	print(x, type(x))  # Saída: [1, 2, 3] <class 'list'>

	```
- O python pode em alguns momentos fazer conversões de tipos de forma automática. 
existem várias pequenas regras para organizar esse comportamento: 
	- inteiro + float --> float
	- inteiro / inteiro --> float
	- Operações com Booleanos --> Booleano vira inteiro --> false = 0, true = 1
- Python tem regras rígidas para sua tipagem.(tipagem forte). Isso quer dizer que ele não converte explicitamente quando há 
risco de perda de dados.
	- Exemplo: 
	```
	# Isso gera um erro (TypeError)
	print(5 + "2") 
 	```
- Além da Tipagem dinâmica existem fórmulas para conversão forçada dos tipos. 
	- int() --> Converte o valor para inteiro
	- float() --> Converte o valor para float(decimal/ponto flutuante)
	- str() --> Converte o valor para String 
	- bool() --> Transforma em um valor booleano(true ou false) 

## Tratamento de Excessões 

### Erros de tipo e valor

- TypeError --> Operação entre tipos errados -->  "a" + 1 (tenta somar string e inteiro)
- ValueError --> Tenta converter um valor inválido para o tipo --> int("abc") 
- AttributeError --> Acessara atributo que não existe --> None.nome

### Erros de coleção 

- IndexError --> Tentar acessar um valor em uma posição que não existe no vetor --> lista[10]  de uma lista[3]

### Erros de nome e sintaxe 

- NameError --> Variável não definida. Tenta usar uma variável que não existe ainda
- SyntaxError --> Código escrito de forma errada
- IndentationError --> Identação errada

### Erros de Matemática

- ZeroDivisionError --> Erro de divisão por zero
- OverFlowError --> Resultado grande demais para o tipo numérico

## Expressões Numéricas 

- Soma: a +b
- Multiplicação: a*b
- Divisão inteira: a // b
- Potenciaçã(a^b): a ** b 
- Subtração: a - b
- Divisão(float): a / b
- Resto da divisão(módulo): a % b

### Precendência dos operadores aritiméticos 

- Parentênteses - O que está dentros dos parênteses é resolvido primeiro 
- A primeira operação fora é a potenciação 
- Após isso, multiplicação, divisão, divisão inteira e módulo tem o mesmo peso, por isso a regra é a precedência da esquerda para direita
- Por último adição e subtração, tendo a mesma força e sendo resolvidos da esqueda para  direita

## Operadores Relacionais 

- Igualdade = 
- Diferença != 
- Maior que > 
- Menor que < 
- Maior igual >= 
- Menor igual <= 

## Operadores Lógicos
- And --> E --> Conjunção
- Or --> ou --> Disjunção 
- Not --> não --> Negação 


