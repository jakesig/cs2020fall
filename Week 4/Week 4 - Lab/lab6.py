import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()

def fn ( a ):
    return 1+a*a
y = 0
for x in range (-200, 201):
    y = fn(x)
    c.create_rectangle(x+200, -y/67+300, x+1+200,-y/67+300+1)
    c.create_line(200,0,200,600)
    c.create_line(0,300,400,300)

tk.mainloop()
