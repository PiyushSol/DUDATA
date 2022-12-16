fopen = open("oldfile.txt","r")
fwrite = open("newfile.txt","w")
oldfileonfo = fopen.readlines()
print(oldfileonfo)
for i in range(0,len(oldfileonfo),2):
fwrite.write(oldfileonfo[i])
fwrite.close()
fopen.close()
