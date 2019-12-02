# oof
Welcome to oof programming Language

Will probably add a loop later

# Tutorial:

Much Like the language BrainFuck, you are in control of a single pointer, and you use commands to control that pointer, commands are created using a series of ```o```s followed by a single ```f```

Let's call the number of ```o```s in your string **OLen**

#### Rules of **OLen**:

1) (**OLen** % 8) + 1 determines what your command will do
2) **OLen** / 8 determines how many times your command will execute

#### Commands:

- if (**OLen** % 8) + 1 is 1: oof compiler will move the pointer to the right
- if (**OLen** % 8) + 1 is 2: oof compiler will move the pointer to the left
- if (**OLen** % 8) + 1 is 3: oof compiler will increment the value of the pointer
- if (**OLen** % 8) + 1 is 4: oof compiler will decrement the value of the pointer
- if (**OLen** % 8) + 1 is 5: oof compiler will print the current value of the pointer to console
- if (**OLen** % 8) + 1 is 6: oof compiler will take input from the console
- if (**OLen** % 8) + 1 is 7: oof compiler will open a loop
- if (**OLen** % 8) + 1 is 8: oof compiler will close a loop

# Examples:

There are currently two examples in the example folder

1) Hello, world!

2) The source code of the compiler encoded into oof!

*Yo don't get me wrong though, I didn't write an oof compiler with oof, I'm quite sure no sane person would ever want to even think about doing that, it's just the C++ source code of the compiler.h being printed out by oof when being run into the oof compiler* (Seriously, I have no idea what I'm doing or why I am doing it!)

# Contact

Nirex.0@gmail.com
