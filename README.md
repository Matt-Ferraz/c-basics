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
 
