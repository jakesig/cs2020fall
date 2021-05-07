#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print("<TITLE>Lab 2</TITLE>")
print("<h1>Lab 2</h1>")
print( """
        <html>
        <body>
""" )
for x in range(100):
    print("<p>%s</p>" % (x+1))
print( """
        </body>
        </html>
""" )
