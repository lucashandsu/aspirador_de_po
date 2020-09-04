// Discente: Lucas Anderson Ribeiro.

import time


def main():
    local = 'A'
    print(' Instruções:\n Digite "limpo" ou "sujo".\n')
    print(' Local atual do aspirador de pó:', local)
    estado = input(' Analisando o estado do local. O local está: ')

    while True:
        if estado == 'limpo':
            if local == 'A':
                print('\n Limpo. Movendo-se para B.\n')
                time.sleep(2)
                local = 'B'
                print(" =----- ----- ----- ----- ----- ----- ----- -----=")

            else:
                if local == 'B':
                    print('\n Limpo. Movendo-se para A.\n')
                    time.sleep(2)
                    local = 'A'
                    print(" =----- ----- ----- ----- ----- ----- ----- -----=")
            print('\n Local atual:', local, end="")
            estado = input('. O local está: ')

        else:
            if estado == 'sujo':
                if local == 'A':
                    print('\n Sujo. Aspirando A...')
                    time.sleep(2)
                    print("\n =----- ----- ----- ----- ----- ----- ----- -----=")

                else:
                    if local == 'B':
                        print('\n Sujo. Aspirando B...')
                        time.sleep(2)
                        print("\n =----- ----- ----- ----- ----- ----- ----- -----=")
            print('\n Reanalisando', local, end="")
            estado = input('. O local está: ')


main()
