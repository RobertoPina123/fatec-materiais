#O código a seguir tenta corrigir a rota de um dispositivo em campo. Qual é o
#erro estrutural neste programa?
coordenadas_gps = (-21.13, -47.98)
altitude = 550
# Atualizando a latitude por conta de um desvio na rota
coordenadas_gps[0] = -21.15
print("Nova rota:", coordenadas_gps)

# Cordenadas_gps é um tipo tupla. Note que foi declarado com (). Portanto um tipo imutável. 
# Para tipos mutáveis use listas declarada com []. 


