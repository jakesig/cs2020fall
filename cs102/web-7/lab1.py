#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print("<TITLE>Lab1</TITLE>")
print("<h1>Lab 1</h1>")
print( """
        <html>
        <body>
""" )
for x in range(100):
    print("<p>Line</p>")
print( """
        </body>
        </html>
""" )  
