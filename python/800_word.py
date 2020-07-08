### Word Elo:800 ###

word = list(input())

lower = 0
upper = 0

for a in word:
	if a.isupper():
		upper += 1
	if a.islower():
		lower += 1

word_str = "".join(word)
if lower >= upper:
	print(word_str.lower())
else:
	print(word_str.upper())

