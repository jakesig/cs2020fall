from lab2func import *
t1 = ( 1, 2 )
t2 = ( "a", "b" )

# If we want to hand these four values to the function,
# there are multiple ways... the first is the boring
# long-winded way:
takes_four_arguments( t1[0], t1[1], t2[0], t2[1] )

# However, can't we hand over those tuples as "unpacked"?
takes_four_arguments( *(t1+t2) )

# And can't we combine the tuples and then hand over that
# combined one "unpacked"?
t3 = t1 + t2
takes_four_arguments( *t3 )
