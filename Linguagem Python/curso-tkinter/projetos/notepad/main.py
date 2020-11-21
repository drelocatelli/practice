#! /usr/bin/env python3
import tkinter, os

def NewFile():
    text_area.delete(1.0, 'end')

def Save():
    os.chdir(str(os.environ['HOME']) + '/Área de Trabalho')
    container = text_area.get(1.0, 'end')
    with open('Sem titulo.txt', 'w') as file:
        file.write(container)

def SaveAs():
    pass

def Open():
    with open('Sem titulo.txt', 'r') as file:
        container = file.read()
        text_area.insert(1.0, container)

window = tkinter.Tk()
window.title('Notepad')
app_height = '800'; app_width = '400';
window.geometry(f'{app_height}x{app_width}')

frame = tkinter.Frame(window, height=30)
frame.pack(fill='x')

font_text = tkinter.Label(frame, text=' Font: ')
font_text.pack(side='left')

spin_font_size = tkinter.Spinbox(frame, values=('Arial', 'Verdana', 'Times New Roman') )
spin_font_size.pack(side='left')

font_size = tkinter.Label(frame, text=' Tamanho: ')
font_size.pack(side='left')

spin_size = tkinter.Spinbox(frame, from_=12, to=60)
spin_size.pack(side='left')

text_area = tkinter.Text(window, font='Arial 13 bold', height=app_height, width=app_width)
text_area.pack()

main_menu = tkinter.Menu()

file_menu = tkinter.Menu(main_menu, tearoff=0)
file_menu.add_command(label='Novo', command=NewFile)
file_menu.add_command(label='Abrir', command=Open)
file_menu.add_command(label='Salvar', command=Save)
file_menu.add_command(label='Salvar como...', command=SaveAs)
file_menu.add_command(label='Sair', command=window.quit)

main_menu.add_cascade(label='Arquivo', menu=file_menu)
window.config(menu=main_menu)


window.mainloop()