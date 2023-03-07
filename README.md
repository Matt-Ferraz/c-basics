# Welcome to my <img align="center" alt="c" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg"> playground 🛝

## Downloading the repository
To install the repository, first you need to clone it to your machine.
```bash
$ git clone https://github.com/Matt-Ferraz/c-basics.git 
```

## Running the script
To run the scripts on this repository, you will need a compiler. 
There are many options of compilers in the internet, you can check the list of C compilers on the [`wikipedia`](https://en.wikipedia.org/wiki/List_of_compilers)

### OSX 💻 
I love using GNU compiler, and to install it you will need to:
 
 - Install [`Apple Command Line Tools`](https://developer.apple.com/download/all/)
 
 - Install a package manager
 ```bash
 $ /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
 ```
 
 - Check if [`Homebrew`](https://brew.sh/) is updated
 ```bash
 $ brew update
 ```
 
 - Install the compiler
 ```bash
 $ brew install gcc
 ```
### After the compiler's installation, you are ready to run the scripts.
 ```bash
 $ gcc <filename>.c -o <output>
 ```
### Run the compiled file (output)
 ```bash
 $ ./<output>
 ```
 
### EXAMPLE!!
 **_COMPILING_**
 ```bash
 $ gcc basics.c -o basic
 ```
 **_EXECUTING_**
 ```bash
 $ ./basic
 ```

## Windows <img align="center" alt="c" height="30" width="40" src="https://raw.githubusercontent.com/devicons/devicon/master/icons/windows8/windows8-original.svg"> 
 ### GCC's installation
  - Download [`MinGW`](https://sourceforge.net/projects/mingw/files/Installer/mingw-get-setup.exe/download) from sorrce forge
  - Look for **_mingw-get-setup.exe_** for downloading. Download it and launch the installer. Accept the terms and move on.
  - You'll now see that the installer is connecting to the Internet and downloading a plenty of tiny and small files.
  - After the installation, you'll be on a window titled MinGW Installation Manager. You should be in the 'Basic Setup' tab by default. If not, click on Basic Setup.
  - On the right side, tick **_"mingw32-gcc-g++-bin"_**. If you are presented with a prompt, click on install.
  - On the top left corner, go to Installation > Apply Changes. And wait until it finishes the download of a billion files and installs them.
 ### Add to PATH
  - Go to **_Windows Explorer > Right click on This PC > Properties > Advanced system settings > Environment Variables_** or search for "Environment Variables" in the Search Bar...
  - On the bottom corner, choose **_"System Variables"_**, look for a Variable called "Path" and click on it. Some systems show an interface for adding a new **Path** easily, else you just need to add **_";"_** at the end and add the following path. 
  ```bash
  C:\MinGW\bin
  ```
  - Choose OK, and OK. Open the Command Prompt on your machine and try typing 
  ```sh
  gcc --version
  ``` 
 ### The terminal response must be something like that:
   ```sh
   gcc (MinGW.org GCC Build-2) 9.2.0
   Copyright (C) 2019 Free Software Foundation, Inc.
   This is free software; see the source for copying conditions. 
   There is NO warranty; not even for MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE.
   ```
