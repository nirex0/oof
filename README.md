# oof
Welcome to oof programming Language

Will probably add a loop later

# Tutorial:

Much like BrainFuck, oof has a single pointer which can move in any direction for 5000 bytes (You gotta change the value in the source code, if you want to change the 5000 byte limit)

In oof, you use commands to control the pointer, commands are created using a series of ```o```s followed by a single ```f```

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
- if (**OLen** % 8) + 1 is 7: oof compiler will perform a IF-E operation
- if (**OLen** % 8) + 1 is 8: oof compiler will perform a IF-NE operation

#### IF Guide:

Let's call the current value of the pointer ```V```

When using an If statement, the compiler will compare the location right after the pointer to the location right before it, when comparing the two, if the condition of the if-statement in use returns true, the pointer will be moved to the right ```V``` bytes, and if the if-statement returns false, the pointer will be moved to the left ```V``` bytes.

# Examples:

There are currently two examples in the example folder

1) Hello, world!

2) The source code of the compiler encoded into oof!

*Yo don't get me wrong though, I didn't write an oof compiler with oof, I'm quite sure no sane person would ever want to even think about doing that, it's just the C++ source code of the compiler.h being printed out by oof when being run into the oof compiler* (Seriously, I have no idea what I'm doing or why I am doing it!)

# Contact

Nirex.0@gmail.com
