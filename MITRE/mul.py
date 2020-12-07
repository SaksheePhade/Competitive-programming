if __name__ == "__main__":

	num = int(input("Enter list size : "))

	numList = []
	for i in range(0, num):
		numList.append(input("Enter list element " + str(i) + " : "))

	mList = []

	for x in numList:
		mul=1
		flag=0
		for i in range(0, num):
			if numList[i]==x and flag==0:
				flag=1
				continue
			else:
				mul = mul*int(numList[i])
		mList.append(mul)

	print("OUTPUT : ")
	print(mList)
