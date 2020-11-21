vida = 10
dano = 2

vida_inimigo = 6

loop = True

def main():
	print("\nVocê encontrou um inimigo: ")
	print("Vida: " + str(vida))
	print("Digite sua escolha:")
	print("1: Atacar")
	print("2: Fugir")

	escolha = int(input("Digite sua escolha: "))

	if escolha == 1:
		print("Você atacou")
	elif escolha == 2:
		print("Você está com medo? muhahaha")
	else:
		print("Você está louco?")

while loop:
	main()