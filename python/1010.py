total = 0.0
for x in range(2):
    linha = input().split(" ")
    cod, qt, valor = linha
    total += float(valor)*int(qt)
print('VALOR A PAGAR: R$ {:.2f}'.format(total))
