#Você terá umas férias maravilhosas que começam no dia 3,
#quarta-feira. Você retornará das sua férias depois de 137
#noites. Escreva um programa que:
#a) pede o dia do mês e o dia da semana em que você irá
#viajar
#b) o número de dias que você ficará de férias e imprime o dia
#da semana que você voltará.

dia_viagem = int(input("digite o numero do dia da viagem - considere 1-30 "))
dia_semana_viagem =  int(input("digite o dia da semana, considere 0 = domingo, 1 = segunda, 2 = terça e etc "))
dias_viagem = int(input("digite quantas noites ficará fora ")) 

retorno_viagem = dias_viagem%30 + dia_viagem
retorno_dia_semana = dias_viagem % 30 + dia_semana_viagem

print(retorno_viagem)
print(retorno_dia_semana)

