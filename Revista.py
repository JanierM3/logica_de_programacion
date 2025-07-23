"""Desarrollar un algoritmo que permita adquirir una revista"""

print("Que revista quiero adquirir")
revista = input()

print("Te estas arreglando para salir a comprar tu revista...")
print("Bajas las escalas si tienes, abres la puerta sales y la cierras...")
print("Caminas hacia la primera tienda de revistas que encuentres")

while True:

    print("Estas llegando a la tienda de revistas...")
    print("Preguntas si tinen la revista que buscas")
    preguntar_al_tendero = input()

    print("Respuesta de tendero")
    tendero = input()
    if tendero.lower() ==  "si":
        print(f"Abquiriste tu revista: {revista}")
        print("Si a la primera...")
        print(f"Pagas tu revista {revista}, sales de la tienda y te vas")
        break

    elif tendero.lower() == "no":
        print("Dices gracias, sales de la tienda y caminas a otra tienda de revistas")
