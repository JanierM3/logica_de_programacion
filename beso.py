"""Desarrollar un algoritmo que permita dar un beso"""

print("Dar tu primer beso. Para dar tu primer beso hay que hacerlo con la persona con la que te sientas comodo/a.")

def humedecer_labios():

    print("¿Quieres humedecer tu labios? Es recomendable antes de dar un beso. (si/no)")
    labios_humedos = input()
    if labios_humedos.lower() == "si":
        print("Buen comienzo, vas por buen camino.")
        acercamiento_para_el_beso()
        abrir_labio()
        duracion_beso()
    
    elif labios_humedos.lower() == "no":
        print("Debes aplicarte balsamo labial o algo que humedezca los labios para evitar esto.")
        print("Los labios resecos son de tacto desagradable y pueden agrietarse al moverlos demasiado.")
        exit()

def acercamiento_para_el_beso():
    print("Te acercas lentamente para dar el beso...")

def abrir_labio():
    print("Abre los labios un poco al ponerte en contacto con los suyos. Puedes, simplemente, rozarlos")

    preguntarle = input("¿Quieres un beso normal o un beso húmedo? (normal/humedo)")

    if preguntarle.lower() == "normal":
        print("Procedes a darle un buen beso húmedo...")
    
    elif preguntarle.lower() == "humedo":
        print("Beso normal...")

def duracion_beso():
    durar = input("¿Duracion del beso? 1s/30m/1h/sinparar: ")
    match durar:
        
        case "1s":
            print("Les gusta la moderación.")
        
        case "30m":
            print("Apacionados.")
        
        case "1h":
            print("Creo que deberían seguir.")

        case "sinparar":
            print("Yo qué sé soy un programador, paso todo el dia en el PC.")

humedecer_labios()