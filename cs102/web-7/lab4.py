#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print("<TITLE>Lab 4</TITLE>")
print("<h1>Lab 4</h1>")
print( """
        <html>
        <body>
	<table>
""" )
for x in range(100):
    print("<tr><td>%s</td><td>%s</td></tr>" % (x+1, (x+1)*100))
print( """
        </table>
	</body>
        </html>
""" )
