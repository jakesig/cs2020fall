#!/usr/bin/python

#Jacob Sigman
#CS-102-E
#Homework 12
#Breakout PY File

from tkinter import *
from intersect import *
import time
root = Tk()

class MyCanvas(Canvas):
    def __init__( this, *args, **kwargs):
        Canvas.__init__( this, *args, **kwargs)
        this.ball = this.makeBall( 50, 50 )
        this.rectangle = this.makeRectangle(225,475)
        for i in range(0, 10):
            for j in range(0,10):
                this.block = this.makeBlock(j*50, i*10, "green")
        this.bind( "<Motion>", this.mouseHasMoved )
        this.focus_set()
        this.ball_velocity_x = 2
        this.ball_velocity_y = 3
        
    def makeBall( this, x, y, color="blue" ):
        #Shifted the ball down so it wouldn't hit any of the blocks on it's way.
        return this.create_oval( x, y+75, x+5, y+5+75, fill=color )

    def makeRectangle ( this, x, y, color="red" ):
        return this.create_rectangle( x, y, x+50, y+10, fill=color )

    def eachFrame( this ):
        sx, sy, ex, ey = this.coords( this.ball )
        rsx, rsy, rex, rey = this.coords( this.rectangle )
        allblocks = this.find_withtag( "block" )
        if (len(allblocks)==0):
            print("YOU WIN!")
            exit()
        for block in allblocks:
            bsx, bsy, bex, bey = this.coords( block )
            my_hits=hits(bsx, bsy, bex, bey, sx, sy, ex, ey)
            if 'N' in my_hits:
                this.ball_velocity_y=-abs(this.ball_velocity_y)
                this.delete(block)
            if 'S' in my_hits:
                this.ball_velocity_y=+abs(this.ball_velocity_y)
                this.delete(block)
            if 'E' in my_hits:
                this.ball_velocity_x=+abs(this.ball_velocity_x)
                this.delete(block)
            if 'W' in my_hits:
                this.ball_velocity_x=-abs(this.ball_velocity_x)
                this.delete(block) 
        if (sx<=0):
            #There was some bug where the ball was getting stuck on the left side, the next line was my fix.
            canvas.move(this.ball, 2, 0)
            this.ball_velocity_x=-1*this.ball_velocity_x
        if (ex>=500):
            this.ball_velocity_x=-1*this.ball_velocity_x
        elif (sy<=0):
            this.ball_velocity_y=-1*this.ball_velocity_y
        elif (ey>=500):
            raise(Exception("Loser."))
        elif (ey==rsy and ex>=rsx and ex<rex):
            this.ball_velocity_y=-1*this.ball_velocity_y
        canvas.move(canvas.ball, this.ball_velocity_x, this.ball_velocity_y)

    def mouseHasMoved( this, event=None ):
        sx, sy, ex, ey = this.coords( this.rectangle )
        middle = ((ex+sx)/2)
        canvas.move(canvas.rectangle, event.x-middle, 0)
        sx, sy, ex, ey = this.coords( this.rectangle )
        #Pardon the specific numbers, I want it to be pixel perfect :)
        if (sx<=0):
            canvas.move(canvas.rectangle, -sx+2, 0)
        if (ex>=500):
            canvas.move(canvas.rectangle, -ex+501, 0)

    def makeBlock( this, x, y, color="red" ):
        return this.create_rectangle( x, y, x+50, y+10, fill=color, tags="block" )

canvas = MyCanvas( root, width=500, height=500 )
canvas.pack()

while (True):
    canvas.eachFrame()
    time.sleep(.0001)
    root.update()
