salario = float(input("Digite o seu salário atual: "))
if salario <= 280.0:
  novo_salario = salario * 1.2
  percentual = 20%
elif salario > 280.0 and salario <= 700.0:
  novo_salario = salario * 1.5
  percentual = 50%
elif salario > 700.0 and salario <= 1500.0:
  novo_salario = salario * 1.1
  percentual = 10%
elif salario > 1500.0:
  novo_salario = salario * 0.5
  percentual = 5%
else:
  print("Valor inválido")

print("O salário antes do reajuste era de R$", salario)
print(aumento)
