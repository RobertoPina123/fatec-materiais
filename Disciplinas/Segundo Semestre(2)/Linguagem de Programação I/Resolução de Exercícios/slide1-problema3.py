# Qual erro do script abaixo?
leitura_sensor = 25.5
calibracao = "1.5"
fator_correcao = 2
# Ajuste do sensor de umidade
leitura_ajustada = leitura_sensor + calibracao * fator_correcao
print(leitura_ajustada)

#Resolução: 
# Calibração é uma string, pois está entre aspas. "1.5"
# O programa retorna um erro de tipo ao tentar somar tipos diferentes incompatíveis. Uma string e  float
# Observe o problema na linha que diz: letura_sensor(float ) + calibração(string)
