//FILE HANDLING
 
//binary mode:
//read():to read from file, ifstream
//write():to write into file ofstream

read():
	ifstream infile("kec.dat",ios::binary)
	...
//	infile.read(address,size);
    infile.read(reinterpret_cast<char*>(&obj))
	,sizeof(obj)
	
write():
    ofstream  outfile("kec.dat",ios::binary) 
	outfile.write(reinterpret_cast<char*>(&obj))
	,sizeof(obj)	
	

