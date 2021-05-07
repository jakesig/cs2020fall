#!/usr/bin/python
#Jacob Sigman
#10/21/20
#CS-102
#Homework 8
#chart.py

#Imports
import cgi
import cgitb
cgitb.enable()

#Initial HTML Stuff
print("Content-type: text/html\n\n")
print( """
        <html>
        <head>
            <TITLE>Homework 8 Table</TITLE>
            <h1>Homework 8 Table</h1>
            <h2>Jacob Sigman</h2>
            <h3 onClick='toggle()'>Click Here</h3>
            <script src="chart.js" type="text/javascript"></script>
            <link rel="stylesheet" href="chart.css" type="text/css" />
        </head>
        <body>
	<table class = 'visible' id = 'testme'>
	<tr><th>x</th><th>y</th><th>dy</th><th>sumy</th></tr>
""" )

#Function
form = cgi.FieldStorage()
A = int(form["a"].value)
B = int(form["b"].value)
C = int(form["c"].value)
def f(a):
    form = cgi.FieldStorage()
    return (A*a*a*a)-(B*a*a)+(C*a)

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
    if ((x/4)%2==0):
        print("<tr class = 'even'><td>%s</td><td class = 'red'>%s</td><td>%s</td><td>%s</td></tr>" % (x,f(x),fprime(x),ysum))
    else:
        print("<tr class = 'odd'><td>%s</td><td class = 'red'>%s</td><td>%s</td><td>%s</td></tr>" % (x,f(x),fprime(x),ysum))
    x = x+4
