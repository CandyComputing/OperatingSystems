This Program will present the user with a list of 6 options.
These 6 options are: 	1. list directory 
			2. Print Working Directory 
			3. Create new directory 
			4. Display a message 
			5. Concatenate and siplay content of files 
			6. Exit
The program will run in a while loop waiting for the users choice.
If choice is 1 the program will call the system "dir" command that will list the contents of the directory.
If choice is 2 the program will call the system "Cd" command that will display the full path of the folder.
if choice is 3 the program will call the systems  "mkdir" to create a new folder(directory) and will output an error if occured.
If choice is 4 the program will call the systems "echo" followed by a message to display with a success message and failed message.
If choice is 5 the program will call the systems "type" followed by "files > concat_file" which will concatenate files of txt type to a new file called concat.txt.
If choice is 6 the program will return 0 exiting the program.

To make sure you will have a success full build with all capabilities two or more text files must be created or moved to the working directory of the program.
In my project file1.txt will contain "Hi, How are you? " and file2.txt will contain "I'm good! Thank You!"
The file will concatenate and create new file concat.txt containing "Hi, How are you? I'm good! Thank You!"
 
