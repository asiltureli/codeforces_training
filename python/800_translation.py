### Translation Elo:800 ###

word1 = list(input())
word2 = list(input())
len_lists = len(word1)
if len(word1) == len(word2):
	flag = 1	
	for a in range(len_lists):
		if word1[a] == word2[len_lists-a-1]:
			pass
		else:
			flag = 0
	if flag:
		print("YES")
	else:
		print("NO")
else:
	print("NO")	
