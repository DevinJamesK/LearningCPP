# LearningCPP
A collection of simple C++ programs for teaching and learning.

## Getting Started
The simplest way start coding in C++ is to use a basic text editor and a console that can run the command `g++`.

### Text Editor
When you are first learning to program there is no need yet for a large complex application called an intergraded 
development envirement or IDE for short. These IDEs can be very helpful later but for now lets keep it simple and 
download a simple yet still powerful text editor called Visual Studio Code. https://code.visualstudio.com/

Visual Studio Code should not be confused with the full Visual Studio the IDE.  Visual Studio Code is the same text 
editor that full Visual Studio uses but without many of its other features to help cut down on the complexity. 
Many professional developers elect to work this way forever and never use a full IDE but if you wanted to upgrade 
to the full Visual Studio IDE later it will look very familiar after using Visual Studio Code.  It is also cross
platform so you only have to learn one program to write code on any operating system.

So, now we can write, save, and open code files.

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

On *Mac* you can create a directory anywhere you want but we'll use the simple option, home.  
`cd ~` changes your current working directory to your home directory ( `~` = path of your home directory)  
`mkdir ~/Development` this will create a new empty directory named Development in your home directory.  
`cd ~/Development` will move you into it.  
`touch main.cpp` will create an empty file named main.cpp in your current directory.  
In C++ is it standard to end code files with ".cpp" and this is the only file type we will need for now.  
On mac you can now enter `open .` and it will open Finder in that current directory. ( `.` = current directory)  
From here you can right click on main.cpp and select open with Visual Studio Code and you're ready to go.  

On *Windows 10*, because of the split file system, we want do things slightly differently. 
We want our files to actually be stored within Windows for reliablity and security reasons so we can just go to
our home directory in windows using File Explorer, *not* console, and then right click > new > folder > name it 
whatever you want. I like the name Development because it looks good next to the default windows folder names like 
Documents, Pictures, etc...

Now in Bash for Windows we want to nativage to that folder we just created in File Explorer.
To do this we run `cd /mnt/c/Users/<username>/Development` (replace `<username>` with your windows username)   
and create an empty main.cpp file using `touch main.cpp`.   
Now go back to your File Explorer windows and right click on the new main.cpp that should have appeared there and
right click > open with > Visual Studio Code.

Now you can start writing code.

### Running Your Code
*TIP: Make sure the code in the text editor has been saved before compiling and running*

Before C++ code can be ran (excuted) we must compile it into a executable program.  
We do this using the command `g++ main.cpp` which will generate a runnable program named a.out if there are no errors in the code.  
We can now run this program by entering `./a.out`.

If you would like to name your output file you can do so by adding `-o <output file name>` to the end of the g++ 
command makeing it `g++ main.cpp -o hello`.  This means that the code in main.cpp will be used to create the
the program hello which can be ran by entering `./hello`.

*TIP: You can name both your main.cpp file and the program g++ creates whatever you want but your code file should end with the .cpp extention. 

Thoughtout the years C++ has had a variety of updates and some functions are only accessable in the newer versions so we should specify the version to the g++ compiler to avoid probables as we progress.  We can do this by adding the `-std=c++11` flag when compiling.

Our final command will be: `g++ -std=c++11 <filename>.cpp -o <program name>`


