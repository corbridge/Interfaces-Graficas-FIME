from tkinter import *
from PIL import ImageTk, Image
from funciones import *

root = Tk()
root.title('Interfaz Grafica')

# led_e = ImageTk.PhotoImage(Image.open(r"C:\Users\UJSCRQU\OneDrive-Deere&Co\OneDrive - Deere & Co\Desktop\Cursos\Interfaces-Graficas-FIME\Codigo\Imagenes\led_apagado.png"))
# label = Label(image = led_e)

button_1 = Button(root, text='1', padx = 40, pady= 20, command = lambda : click(1))
button_2 = Button(root, text='2', padx = 40, pady= 20, command = lambda : click(2))
button_3 = Button(root, text='3', padx = 40, pady= 20, command = lambda : click(3))
button_4 = Button(root, text='4', padx = 40, pady= 20, command = lambda : click(4))
button_5 = Button(root, text='5', padx = 40, pady= 20, command = lambda : click(5))
button_6 = Button(root, text='6', padx = 40, pady= 20, command = lambda : click(6))
button_7 = Button(root, text='7', padx = 40, pady= 20, command = lambda : click(7))
button_8 = Button(root, text='8', padx = 40, pady= 20, command = lambda : click(8))
button_9 = Button(root, text='9', padx = 40, pady= 20, command = lambda : click(9))
button_0 = Button(root, text='0', padx = 40, pady= 20, command = lambda : click(0))
button_cl = Button(root, text='Clear', padx = 79, pady= 20, command = lambda : clear())

texto = Text(root,text = 'Teclado para display 7 segmentos' )
# but = Button(root, text='LED 1', padx = 79, pady= 20)

button_1.grid(row = 3, column = 0)
button_2.grid(row = 3, column = 1)
button_3.grid(row = 3, column = 2)
button_4.grid(row = 2, column = 0)
button_5.grid(row = 2, column = 1)
button_6.grid(row = 2, column = 2)
button_7.grid(row = 1, column = 0)
button_8.grid(row = 1, column = 1)
button_9.grid(row = 1, column = 2)
button_0.grid(row = 4, column = 0)
button_cl.grid(row = 4, column= 1, columnspan=2)
texto.grid(row = 0, column = 0)
# label.grid(row = 1, column= 9)

root.mainloop()
