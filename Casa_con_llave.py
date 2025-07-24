"""Desarrollar un algoritmo que permita entrar en una casa que está con llave.
"""

print("Verificar si tengo la llave")

llave = input("¿Tienes la llave? (si/no)")
if llave.lower() == "si":
    print("Abres la puerta y entras a la casa")

elif llave.lower() == "no":

    print("Piensas en esperar a mi esposa o forzar la cerradura...")
    forzar = input("¿Que debo hacer? (cerrajero/esperar/no esposa)").lower()
    match forzar:
        case "cerrajero":
            print("Llamas al cerragero para que te ayude a entrar a la casa")
            
        case "esperar":
            print("Esperas a tu esposa si es que tienes para entrar con la llave que ella tiene")
        
        case "no esposa": 
            print("Te das cuenta que vives solo y no puedes entrar a tu casa y tenes que dormir afuera empiezas a llorar en posicion fetal")