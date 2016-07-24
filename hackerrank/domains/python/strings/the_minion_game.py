vowels = set(['A','E','I','O','U'])
text = input()
player1n,player2n ='Stuart','Kevin'
player1,player2=0,0
f = len(text)
for i in range(len(text)):
    if(text[i] in vowels):
        player2+= f - i
    else:
        player1+= f - i
if player1 > player2:
    print(player1n+' '+str(player1))
elif player2 > player1:
    print(player2n+' '+str(player2))
else:
    print('Draw')
    
    
