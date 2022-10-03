from distutils.cmd import Command
from tkinter import *
from PIL import *
from funciones import *
import serial

HEIGHT = 600
WIDTH = 1000
COLOR_BACKGROUND = '#A9A9A9'
COLOR_SHAPE = 	"#104E8B"
LETTERS = ('Arial', 13)

root = Tk()
root.title('Interfaz Grafica')

led_off_1 = ImageTk.PhotoImage(Image.open(r"Codigo\Imagenes\led_apagado.png"))
led_off_2 = ImageTk.PhotoImage(Image.open(r"Codigo\Imagenes\led_apagado.png"))
led_off_3 = ImageTk.PhotoImage(Image.open(r"Codigo\Imagenes\led_apagado.png"))
led_off_4 = ImageTk.PhotoImage(Image.open(r"Codigo\Imagenes\led_apagado.png"))

canvas = Canvas(root, height= HEIGHT, width=WIDTH)
canvas.pack()

frame_background = Frame(root, bg = COLOR_BACKGROUND)
frame_background.place(width=WIDTH, height=HEIGHT)

frame_keyword_zone = Frame(root, bg = COLOR_BACKGROUND, bd = 5)
frame_keyword_zone.place(width=300, height=600, x=800, y=0, anchor = N)

frame_leds_zone = Frame(root, bg = COLOR_BACKGROUND, bd = 5)
frame_leds_zone.place(width=400, height=700, x = 400, y = 240, anchor = N)

frame_pot = Frame(root, bg = COLOR_SHAPE, bd = 5)
frame_pot.place(width=150, height=160, x = 100, y = 250, anchor = N)

frame_keyword = Frame(root, bg = COLOR_SHAPE, bd = 5)
frame_keyword.place(width=297, height=265, x=800, y=250, anchor = N)

keyword(frame_keyword)

off_1, off_2, off_3, off_4 = set_leds(led_off_1, led_off_2, led_off_3, led_off_4)

show_leds_off(off_1, off_2, off_3, off_4)

decision = 0

Label(root, text="POTENCIOMETROS", bg = COLOR_BACKGROUND, font = LETTERS).place(x=28,y=215)
Label(root, text="BOTONES", bg = COLOR_BACKGROUND, font = LETTERS).place(x=370,y=215)
Label(root, text="DISPLAY", bg = COLOR_BACKGROUND, font = LETTERS).place(x=760,y=215)

Potenciometer = ADC_LEDS(frame_pot)
root.mainloop()
