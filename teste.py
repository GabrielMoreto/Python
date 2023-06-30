# pontos_perdidos = 11 / 3  

# print(pontos_perdidos)
# print(type(pontos_perdidos))

# O Python 3 usa uma forma de arredondar, que também é chamado de Banker's rounding. Nessa forma, os valores são arredondados para o número 
# que for mais próximo, por exemplo: 2.4 seria arredondado para 2, todavia 2.6 já seria arredondado para 3. Quando um valor é igualmente 
# próximo de dois números, por exemplo 2.5, que possui 0.5 de diferença tanto para o número 2 quanto para o número 3, esse é arredondado 
# para o valor par mais próximo, que, nesse caso, seria o número 2. Vale lembrar que somente os números x.5 recebem o tratamento "especial" do 
# arredondamento para o valor par mais próximo, nos demais, o arredondamento ocorre conforme esperado.

# / = float division
# // = integer division

print("Brasil", "ganhou", 5, "titulos mundiais", sep="-")
print("Brasil", "ganhou", 5, "titulos mundiais", end="")