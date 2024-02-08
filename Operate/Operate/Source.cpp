#include <cstdlib> // Include the C Standard Library for system() function
#include <iostream> // Include the C++ Standard Library for cout and endl
#include <stdio.h>
#include <stdlib.h>



int main(){
	int choice = 0;

	
	while (choice != 6) {
		std::cout << "1. List directory contents\n"
				  << "2. Print working directory\n"
				  << "3. Create a new directory\n"
				  << "4. Display a message\n"
				  << "5. Concatenate and display content of a file\n"
				  << "6. Exit" << std::endl;

		std::cout << "Enter Your Desired Operating Command? ";
		std::cin >> choice;
		std::cout << std::endl;
		if (choice == 1) {
			system("dir");
			std::cout << std::endl;
		}
		if (choice == 2) {
			system("cd");
			std::cout << std::endl;
		}
		if (choice == 3) {
			int mkdirResult = system("mkdir new_folder");
			if (mkdirResult != 0) {
				// Handle error if directory creation fails
				// For example, print an error message or exit the program
				
			}
			std::cout << std::endl;
		}
		if (choice == 4) {
			int returnCode = system("echo Hello, GTA!");

			// Checking if the command was executed successfully
			if (returnCode == 0) {
				std::cout << "Command executed successfully." << std::endl;
			}
			else {
				std::cout << "Command execution failed or returned non-zero: " << returnCode << std::endl;
				
			}
			std::cout << std::endl;
		}
		if (choice == 5) {
			int concat = system("copy /b file1.txt+file2.txt concat.txt");
			int showContent = system("notepad concat.txt");
		}
		if (choice == 6) {
			return 0;
			exit;
		}

	}

	

}