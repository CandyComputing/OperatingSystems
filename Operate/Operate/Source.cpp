#include <cstdlib> // Include the C Standard Library for system() function
#include <iostream> // Include the C++ Standard Library for cout and endl
#include <stdio.h>
#include <stdlib.h>



int main(){
	//Initialized choice with 0 to prevent any errors with infinite loops and not a choice for the user
	int choice = 0;

	//I performed a while loop where it only exits when the user enters 6
	while (choice != 6) {
		//The list of choices will be cout
		std::cout << "1. List directory contents\n"
				  << "2. Print working directory\n"
				  << "3. Create a new directory\n"
				  << "4. Display a message\n"
				  << "5. Concatenate and display content of a file\n"
				  << "6. Exit" << std::endl;
		//The user is asked to enter the number associated with their choice
		std::cout << "Enter Your Desired Operating Command? ";
		std::cin >> choice;
		std::cout << std::endl;

		//if the user enters 1 then it will list the contents of the current directory 
		if (choice == 1) {
			system("dir");
			std::cout << std::endl;
		}
		//if the choice is 2 then it will display the full path of the current directory
		if (choice == 2) {
			system("cd");
			std::cout << std::endl;
		}
		//if the choice is 3 then the system will make a new Directory(folder)
		if (choice == 3) {
			int mkdirResult = system("mkdir new_folder");
			if (mkdirResult != 0) {
				// Handle error if directory creation fails
				// For example, print an error message or exit the program
				std::cout << "There has been a problem on our side please try again" << std::endl;
				
			}
			std::cout << std::endl;
		}

		//if the choice is 4 then echo(display) the following characters
		if (choice == 4) {
			int returnCode = system("echo Hello, GTA!\n");

			// Checking if the command was executed successfully
			if (returnCode == 0) {
				std::cout << "Command executed successfully." << std::endl;
			}
			else {
				std::cout << "Command execution failed or returned non-zero: " << returnCode << std::endl;
				
			}
			std::cout << std::endl;
		}

		//if the choice is 5 then the system will concatenate two files into a seperate file.
		if (choice == 5) {
			//concat will use type or copy command that will merger the contents of the files together into concat.txt
			int concat = system("type *.txt > concat.txt");
			if (concat != 0) {
				std::cout << "Error! There has been a HUGE mistake."<<std::endl;
			}
			//opening the content in concat.txt using notepad
			int showContent = system("notepad concat.txt");
			if (showContent != 0) {
				std::cout << "The File must have dissapeared somehow" << std::endl;
			}

		}
		//if the choice is 6 then the program will end 
		if (choice == 6) {
		
			return 0;
			
		}

	}

	

}