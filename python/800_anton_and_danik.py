### Anton and Danik ###

games = int(input())
game_list = list(input())

if game_list.count("A") == game_list.count("D"):
	print("Friendship")
if game_list.count("A") > game_list.count("D"):
	print("Anton")
if game_list.count("A") < game_list.count("D"):
	print("Danik")

