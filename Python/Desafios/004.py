algo = input("Digite qualquer coisa:")
print(algo, "É do tipo primitivo", type(algo))
print(algo, "Possui apenas números?", algo.isnumeric())
print(algo, "Possui apenas letras?",  algo.isalpha())
print(algo, "Possui letra ou número?", algo.isalnum())
print(algo, "Possuia apenas letras maiúsculas?", algo.isupper())
print(algo, "Possui apenas letras minúsculas?", algo.islower())

