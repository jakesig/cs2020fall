#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print("<TITLE>Lab 3</TITLE>")
print("<h1>Lab 3</h1>")
print( """
        <html>
        <body>
	<table>
""" )
for x in range(100):
    print("<tr><td>%s</td></tr>" % (x+1))
print( """
        </table>
	</body>
        </html>
""" )
