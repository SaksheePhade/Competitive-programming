if __name__ == "__main__":

	num = int(input("Enter list size : "))

	wordList = []
	for i in range(0, num):
		wordList.append(input("Enter list element " + str(i) + " : "))

	#wordList = ["hello", "hi", "hello", "Good", "Bad", "Good"]
	unique = []

	for x in wordList:
		if x not in unique:
			unique.append(x)

	for x in unique:
		print(x + " : " + str(wordList.count(x)))