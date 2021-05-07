#!/usr/bin/python

import cgi
import cgitb
cgitb.enable()

print( "Content-type: text/html\n\n" )

print( """<html>
  <head>
    <link rel="stylesheet" href="lab5.css" type="text/css" />
  </head>
  <body>""" )

form = cgi.FieldStorage()
if "firstname" in form:
  print( "<h1 class = 'c'>Hi, " + form["firstname"].value + "</h1>" )
else:
  print( "<h1>You didn't give me a name!</h1>" )

print( "</body></html>" )
