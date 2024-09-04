"""
3) Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne: 
• O menor valor de faturamento ocorrido em um dia do mês; 
• O maior valor de faturamento ocorrido em um dia do mês; 
• Número de dias no mês em que o valor de faturamento diário foi superior à média mensal. 

IMPORTANTE: 
a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal; 
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média; 
"""
import json

def abrirArquivoJson(arquivo):
    with open(arquivo, 'r') as f:
        dados = json.load(f)
    print("Arquivo carregado")
    return [item['valor'] for item in dados]

def minList(lista):
    x = 2**63 - 1
    for n in lista:
        if n != 0 and n < x:
            x = n
    if x == 2**63 - 1:
        return (0)
    return (x)  #Poderia ser apenas um return min(lista), mas optei por fazer assim

def maxList(lista):
    x = 0
    for n in lista:
        if (n > x):
            x = n
    return (x) #Poderia ser apenas um return max(lista), mas optei por fazer assim

def medList(lista):
    swap = 0
    cont = 0
    for n in lista:
        swap += n
        cont += 1
    return (swap/cont)  # Poderia ser return sum(lista) /len(lista), mas optei por fazer assim

def diaMaiorMedia(lista, media):
    day = 0
    for n in lista:
        day += 1
        if n > media:
            print(f"Dia {day}, faturamento de {n:.2f}, foi maior que a média: {media:.2f}")

fat_day = abrirArquivoJson('faturamento.json')
print(minList(fat_day))
print(maxList(fat_day))
print(medList(fat_day))
print(diaMaiorMedia(fat_day, medList(fat_day)))
