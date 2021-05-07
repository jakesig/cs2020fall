#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )

print( """<html><head>
       <script src="lab7.js" type="text/javascript"></script>
  <link rel="stylesheet" href="lab7.css" type="text/css" />
  </head><body>""" )

form = cgi.FieldStorage()
if "firstname" in form:
  print( "<h1 onClick='toggle()'>Click me to make text dissappear/appear</h1>" )
  print( "<h1 class = 'visible' id = 'testme'>Hi, " + form["firstname"].value + "</h1>" )
else:
  print( "<h1>You didn't give me a name!</h1>" )

print( "</body></html>" )
