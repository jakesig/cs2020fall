#Jacob Sigman
#9/23/20
#CS-102
#Homework 4
#graph.py

import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()

#Derivative Function
def fprime(a):
    y = (5*a*a*a)-(6*a*a)+(8*a)
    return (y-((5*(a-4)*(a-4)*(a-4))-(6*(a-4)*(a-4))+(8*(a-4))))/4

#Integral Function (Only one rectangle)
def fint(a):
    return ((y+((5*(a-4)*(a-4)*(a-4))-(6*(a-4)*(a-4))+(8*(a-4))))/2)*4

#Double Derivative Function
def fdoubleprime(a):
    return ((fprime(a)-(fprime(a-4))))/4

#Variables
x=-100
y=0
ysum = 0

#Creation of crosshairs
c.create_line(200,0,200,600)
c.create_line(0,300,400,300)

#Loop
while x<=100:
    y = (5*x*x*x)-(6*x*x)+(8*x)
    ysum = ysum+fint(x)
    #print(x, fprime(x), fdoubleprime(x), ysum)
    c.create_rectangle(x*2+200, -y/17000+300, x*2+1+200,-y/17000+300+1, outline='purple')
    c.create_rectangle(x*2+200, -fprime(x)/500+300, x*2+1+200,-fprime(x)/500+300+1, outline='orange')
    c.create_rectangle(x*2+200, -ysum/550000+300, x*2+1+200,-ysum/550000+300+1, outline='red')
    c.create_rectangle(x*2+200, -fdoubleprime(x)/10+300, x*2+1+200,-fdoubleprime(x)/10+300+1, outline='dark green')
    x = x+4

tk.mainloop()
