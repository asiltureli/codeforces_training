### Wrong Subtraction Elo:800 ###


num_in, amount_sub = list(map(int,input().split()))

for loop in range(amount_sub):
	if num_in%10==0:
		num_in/=10
	else:
		num_in-=1

print(int(num_in))
