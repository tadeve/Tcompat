from math import *
ab = int(raw_input())
bc = int(raw_input())
ac = ((ab*ab)+(bc*bc))**(0.5) # the square root
print str(int(floor(degrees(acos(bc/ac))+0.5)))+"°"