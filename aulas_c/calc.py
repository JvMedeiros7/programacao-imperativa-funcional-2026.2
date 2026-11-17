#Calculador Python

for i in range(1, 11):
    print(f"Tabuada do {i}:")
    for j in range(1, 11):
        resultado = i * j
        print(f"{i} x {j} = {resultado}")
    print()  # Adiciona uma linha em branco entre as tabuadas