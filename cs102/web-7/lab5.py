#!/usr/bin/python
print( "Content-type: text/html\n\n" )
print("<TITLE>Lab 5</TITLE>")
print("<h1>Lab 5</h1>")
print( """
        <html>
        <body>
	<table>
	<tr><th>N</th><th>100xN</th></tr>
""" )
for x in range(100):
    print("<tr><td>%s</td><td>%s</td></tr>" % (x+1, (x+1)*100))
print( """
        </table>
	</body>
        </html>
""" )
