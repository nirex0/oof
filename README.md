# oof
Welcome to oof programming Language

# Tutorial:

Much Like the language BrainFuck, you are in control of a single pointer, and you use commands to control that pointer, commands are created using a series of ```o```s followed by a single ```f```

Let's call the number of ```o```s in your string **OLen**

#### Rules of **OLen**:

1) (**OLen** % 8) + 1 determines what your command will do
2) **OLen** / 8 determines how many times your command will execute

#### Commands:
| Brainfuck | Shortest equivalent in Oof | Formula
|------|------|------|
| > | f | (**OLen** % 8 + 1) = 1 |
| < | of | (**OLen** % 8 + 1) = 2 |
| + | oof |(**OLen** % 8 + 1) = 3 |
| - | ooof | (**OLen** % 8 + 1) = 4 |
| . | oooof | (**OLen** % 8 + 1) = 5 |
| , | ooooof |(**OLen** % 8 + 1) = 6 |
| [ | oooooof | (**OLen** % 8 + 1) = 7 |
| ] | ooooooof | (**OLen** % 8 + 1) = 8 |
# Examples:

There are currently two examples in the example folder

1) Hello, world!

2) The source code of the compiler encoded into oof!

*Yo don't get me wrong though, I didn't write an oof compiler with oof, I'm quite sure no sane person would ever want to even think about doing that, it's just the C++ source code of the compiler.h being printed out by oof when being run into the oof compiler* (Seriously, I have no idea what I'm doing or why I am doing it!)

# Contact

Nirex.0@gmail.com
