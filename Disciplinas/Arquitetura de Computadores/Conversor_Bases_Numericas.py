# Este programa recebe um número, a base deste e uma base para conversão desse número, compreendendo das bases 2 à 16.
validation = True # Variável de validação.
while validation == True:
    n = str(input('\nDigite um número em qualquer base: ')).strip().upper() # declaração do número para conversão do usuário
    basei = int(input('\nDigite a base do número digitado: ')) # base inicial do número acima
    basef = int(input('\nBase para converter: ')) # base final
    carac = len(n.strip()) # numero de caracteres
    
    if basei>16 or basei<2: # verificação do escopo da base inicial
        print('\nErro. Base do número inválida.\n', '='*10)
        continue
        
    if basef>16 or basef<2: # verificação do escopo da base final
        print('\nErro. Base de conversão inválida.\n', '='*10)
        continue
        
    erro = False # variável de verificação
    for d in range(0, carac):
        if n[d] not in '0123456789ABCDEF'[:basei]:
            print('\nBase incompatível com o número.\n', '='*10)
            erro = True
            break
    if erro == True:
        continue

    validation = False  

# Cálculo para ler caracteres, atribuir valores numéricos e conversão para base 10
    
vlr = 0 # valor das letras
vlrnum = 0 # valor dos números
expo = 0 # expoente
soma = 0 # resultado da conversão a base 10
for c in range(carac - 1, -1, -1):
    if n[c] in 'ABCDEF':
        vlr = ord(n[c]) - 55
        soma += (vlr * (basei ** expo))
    elif n[c] in '0123456789':
        vlrnum = int(n[c])
        soma += (vlrnum * (basei ** expo))
    expo += 1

# Passando da base 10 para a basef (base final)

resto = 0 # resto
result = '' # resultado final

while soma > 0:
    resto = (soma % basef)
    if resto >= 10:
        result = chr(resto + 55) + result
    else:
        result = str(resto) + result
    soma = soma // basef

# Saída final.
print('O número {} de base {}, convertido para a base {}, é: {}.'.format(n, basei, basef, result))