#!/usr/bin/python
#Jacob Sigman
#10/14/20
#CS-102
#Homework 7
#graph.py

#Initial HTML Stuff
print("Content-type: text/html\n\n")
print("<TITLE>Homework 7 Table</TITLE>")
print("<h1>Homework 7 Table</h1>")
print("<h2>Jacob Sigman</h2>")
print( """
        <html>
        <body>
	<table>
	<tr><th>x</th><th>y</th><th>dy</th><th>sumy</th></tr>
""" )

#Function
def f(a):
    return (5*a*a*a)-(6*a*a)+(8*a)

#Derivative Function
def fprime(a):
    return (f(a)-f(a-4))/4

#Integral Function (Only one rectangle)
def fint(a):
    return ((f(a)+f(a-4))/2)*4

#Double Derivative Function
def fdoubleprime(a):
    return ((fprime(a)-(fprime(a-4))))/4

#Variables
x=-100
y=0
ysum = 0

#Loop
while x<=100:
    ysum = ysum+fint(x)
    print("<tr><td>%s</td><td>%s</td><td>%s</td><td>%s</td></tr>" % (x,f(x),fprime(x),ysum))
    x = x+4
