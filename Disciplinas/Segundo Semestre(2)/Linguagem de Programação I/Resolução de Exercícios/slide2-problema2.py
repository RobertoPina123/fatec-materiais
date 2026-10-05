#Você olha para um relógio e são exatamente 2 da
#tarde. Você coloca um alarme para tocar daqui a 51
#horas.A que horas o alarme ira tocar?

hora_atual = int(input("que horas são? use o formato de 24 horas "))
horas_espera = int(input("Daqui a quanto tempo irá despertar "))

alarme_tocar =  horas_espera%24
alarme_tocar  = alarme_tocar+hora_atual


print(alarme_tocar)
