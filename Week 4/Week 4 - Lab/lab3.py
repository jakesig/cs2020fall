import tkinter
tk = tkinter.Tk()
c = tkinter.Canvas( tk, width=400, height=600 )
c.pack()

def fn ( a ):
    return 1+a*a
y = 0
for x in range (-200, 201):
    y = fn(x)
    c.create_rectangle(x, y, x+1,y+1)

tk.mainloop()
