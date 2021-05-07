#!/usr/bin/python

#Jacob Sigman
#CS-102-E
#Homework 11
#Pong PY File

from tkinter import *
import time
root = Tk()
class MyCanvas(Canvas):
    def __init__( this, *args, **kwargs):
        Canvas.__init__( this, *args, **kwargs)
        this.ball = this.makeBall( 50, 50 )
        this.rectangle = this.makeRectangle(225,475)
        this.bind("<KeyPress>", this.keyWasPressed )
        this.focus_set()
        this.ball_velocity_x = 2
        this.ball_velocity_y = 3
        
    def makeBall( this, x, y, color="blue" ):
        return this.create_oval( x, y, x+5, y+5, fill=color )

    def makeRectangle ( this, x, y, color="red" ):
        return this.create_rectangle ( x, y, x+50, y+10, fill=color )

    def eachFrame( this ):
        sx, sy, ex, ey = this.coords( this.ball )
        rsx, rsy, rex, rey = this.coords( this.rectangle )
        #print(sx, sy, ex, ey)
        if (sx<=0 or ex>=500):
            this.ball_velocity_x=-1*this.ball_velocity_x
        elif (sy<=0):
            this.ball_velocity_y=-1*this.ball_velocity_y
        elif (ey>=500):
            raise(Exception("Loser."))
        elif (ey==rsy and ex>=rsx and ex<rex):
            this.ball_velocity_y=-1*this.ball_velocity_y
        canvas.move(canvas.ball, this.ball_velocity_x, this.ball_velocity_y)

    def keyWasPressed( this, event=None ):
        key = event.keysym
        sx, sy, ex, ey = this.coords( this.rectangle )
        if (key=="Left" and sx!=0):
            canvas.move(canvas.rectangle, -25, 0)
        elif (key=="Right" and ex!=500):
            canvas.move(canvas.rectangle, 25, 0)
        #print( "just pressed:", key)

canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while (True):
    canvas.eachFrame()
    time.sleep(.0001)
    root.update()
