i = int(input())
output_list = []
for loop in range (0,i):
	word = input()
	if len(word) >10:
		chars = []
		for char in word:
			chars.append(char)
		code = chars[0] + str(len(chars)-2) + chars[-1]
		output_list.append(code)
	else:
		output_list.append(word)
for out in range (0,len(output_list)):
	print(output_list[out])


