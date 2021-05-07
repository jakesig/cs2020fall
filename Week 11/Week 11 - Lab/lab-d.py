#!/usr/bin/python

from tkinter import *
root = Tk()
class MyCanvas(Canvas):
    def __init__( this, *args, **kwargs):
        Canvas.__init__( this, *args, **kwargs)
        this.ball = this.makeBall( 50, 50 )
        this.bind("<KeyPress>", this.keyWasPressed )
        this.focus_set()
        
    def makeBall( this, x, y, color="blue" ):
        return this.create_oval( x, y, x+5, y+5, fill=color )

    def eachFrame( this ):
        sx, sy, ex, ey = this.coords( this.ball )
        print(sx, sy, ex, ey)
        canvas.move (canvas.ball, .1, .1)

    def keyWasPressed( this, event=None ):
        key = event.keysym
        print( "just pressed:", key)

canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while (True):
    canvas.eachFrame()
    root.update()
