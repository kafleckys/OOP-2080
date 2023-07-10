//FILE read write using read and write function

FIle write:
	ofstream object1("hero.txt");
	.......
	.....
object1.write(reinterpret_cast<char*>(&var),
	sizeof(var));
	
Read:
	ifstream obj("hero.txt")
	..
	..
	obj.read(reinterpret_cast<char*>(&var),
	sizeof(var));
	
