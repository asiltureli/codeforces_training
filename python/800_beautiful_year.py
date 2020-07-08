### Beautiful Year Elo:800 ###

input_str = input()
input_int = int(input_str)
input_int +=1
while 1:
	if len(list(str(input_int))) == len(set(str(input_int))):
		result = input_int
		break
	else:
		input_int += 1

print(result)
