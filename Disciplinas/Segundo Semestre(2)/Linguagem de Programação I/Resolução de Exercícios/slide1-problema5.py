# Registro de dados recebido pelo sistema
dados_lote = ["Lote_A", 45, 12.5, "Ativo", "Soja"]
# Extraindo informações principais para variáveis soltas
id_lote, temp_media, umidade_solo, status = dados_lote
print("Lote:", id_lote, "- Status:", status)

# O programa exibe um ValueError to many values to unpack. Ou seja 
# um erro de valor, porque tentamos atribuir muitos valores de uma lista em um número menor de variaveis.
# a lista dados_lote contem 5 valores, nós definimos 4 novas variaveis para atribuir esses valores(unpack). precisariamos de mais uma
