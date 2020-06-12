### Soldier and Bananas Elo:800 ###


cost, money, amount = list(map(int,input().split()))

borrow = cost*(amount*(amount+1)/2) - money
if borrow > 0:
	print(int(borrow))
else:
	print(0)
