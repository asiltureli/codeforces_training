### Stones on the table Elo:800 ###

len_word = str(input())
word = input()
word_list = list(word)
counter = 0
current = 0
while current < len(word_list)-1:
	for test in range(current+1, len(word_list)):
		if word_list[current] == word_list[test]:
			counter+=1
		else:
			break
			
	current = test
print(counter)	
