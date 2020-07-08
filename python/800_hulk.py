### Hulk Elo:800 ###

love = "I love "
hate = "I hate "
out_str = hate
number_int = int(input())

if number_int == 1:
	pass
else:
	for a in range(1,number_int):
		if a%2 == 0:
			out_str += "that "
			out_str += hate
		if a%2 == 1:
			out_str += "that "
			out_str += love

print(out_str+"it")
