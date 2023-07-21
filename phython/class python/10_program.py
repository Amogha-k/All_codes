with open('file1.txt','r') as read_from_file:
    with open('file2.txt','w') as write_to_file:
        odd = True 
        for line in read_from_file:
            if odd :
                write_to_file.write(line)
                odd = False
            else :
                odd = True
print("Successfully Copied odd lines from file 1 to file 2.")