### Helpful Maths Elo:800 ###

word =list(input())
if len(word)==1:
	print(str(word[0]))
else:
	num_list=[]
	for loop in range(len(word)):
		if loop%2==0:
			num_list.append(word[loop])

	num_list.sort()
	outlist=""
	for out in range(len(num_list)-1):
		outlist += str(num_list[out])
		outlist+="+"
	outlist +=str(num_list[-1])
	print(outlist)	
