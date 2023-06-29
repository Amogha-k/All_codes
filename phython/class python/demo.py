#WAPT copy odd lines from one file to another

source_file = open('toRead.txt', 'r')
destination_file = open('toWrite.txt', 'w')
lines = source_file.readlines()
for i in range(len(lines)):
    if i % 2 == 0:
        destination_file.write(lines[i])

source_file.close()
destination_file.close()