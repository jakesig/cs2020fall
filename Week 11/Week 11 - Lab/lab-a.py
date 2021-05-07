#!/usr/bin/python

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
    def __init__( this, *args, **kwargs):
        Canvas.__init__( this, *args, **kwargs)
        this.ball = this.makeBall( 50, 50 )
        
    def makeBall( this, x, y, color="blue" ):
        return this.create_oval( x, y, x+5, y+5, fill=color )

canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while (True):
    canvas.move( canvas.ball, .1, .1)
    root.update()
