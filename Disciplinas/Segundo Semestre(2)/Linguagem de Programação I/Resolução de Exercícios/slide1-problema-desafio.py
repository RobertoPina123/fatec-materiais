# Configuração padrão de estado para dois sensores independentes
sensor_pivo_1 = sensor_pivo_2 = [0, 0, 0]
# Atualizando apenas a primeira leitura do pivô 1
sensor_pivo_1[0] = 35.5
if sensor_pivo_2[0] == 0:
	print("Pivô 2 aguardando leitura.")
else:
	print("Erro de isolamento de variáveis!")

# as duas variaves sensor_pivo_1 e sensor_pivo_2 apontam para o mesmo objeto na memória,
# o que não necessariamente é um problema, mas fo usado de uma forma errada. 
