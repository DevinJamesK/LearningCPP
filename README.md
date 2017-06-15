# LearningCPP
A collection of simple C++ programs for teaching and learning.

## Getting Started
For learning C++, the simplest way is to use a basic text editor and a console that can run the command g++.

### Text Editor
When you are first learning to program there is no need yet for a large complex application called an intergraded 
development envirement or IDE for short. These IDEs can be very helpful later but for now lets keep it simple and 
download a simpler yet still powerful text editor called Visual Studio Code. https://code.visualstudio.com/

Visual Studio Code should not be confusted with the full Visual Studio the IDE.  Visual Studio Code is the same text 
editor that full Visual Studio uses but without many of its other features to help cut down on the complexity. 
Many professional developers elect to work this way forever and never use a full IDE but if you wanted to upgrade 
to the full Visual Studio IDE later it will look very familiar after using Visual Studio Code.  It is also cross
platform so you only have to learn one program to write code on any operating system.

So, now we can write, save, and open code files.  In C++ is it standard to end code files with ".cpp" and this is 
the only file type we will need for now.

### Console (Terminal)
Console, Terminal, and Shell, all pretty much mean the same thing, a command prompt where you can interface with 
the computer using sets a simple commands. These commands can change based on our system but we are going to use a 
bash style shell because it is the most common. 

Bash is native on Mac and Linux and thus very little to no setup is required, on windows 7 however, the setup is 
rather complex so we are going to skip it for now.  Windows 10 made running bash easy as they have included a Linux 
Ubuntu subsystem that can we install right inside Windows called, rather uncreatively, "Bash for Windows"

To install Bash for Windows 10 go here: https://msdn.microsoft.com/en-us/commandline/wsl/install_guide

On Mac, spotlight search (cmd+space) for the application named Terminal and open it.

For programming you do not need to be an expert at using the terminal but you do need to know how to navigate 
around and do the basics. This link should be enough: 
https://www.digitalocean.com/community/tutorials/basic-linux-navigation-and-file-management

Try running commands like `cd ~` and `ls -la` in your terminal and make sure they work, if the do you're all set.

### Creating Your Environment
Once you are in a bash shell you can start creating the folders and files you need.
(directories = folders)

On Mac you can create a directory anywhere you want but we'll use the simple option, home.  
`cd ~` changes your current working directory to your home directory ( `~` = path of your home directory)  
`mkdir ~/Development` this will create a new empty directory named Development in your home directory.  
`cd ~/Development` will move you into it.  
`touch main.cpp` will create an empty file named main.cpp in your current directory.  
On mac you can now enter `open .` and it will open Finder in that current directory. ( `.` = current directory)  
From here you can right click on main.cpp and select open with Visual Studio Code and you're ready to go.  




