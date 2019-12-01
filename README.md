# oof
Welcome to oof programming Language

# Tutorial:

Much line brainfuck, oof has a single pointer which can move in any direction for 5000 bytes


In oof, you use commands to control the pointer, commands are created using a series of ```o```s followed by a single ```f```

Let's call the number of ```o```s in your string **OLen**

##### There are two rules to **OLen**:

1) **OLen** % 6 determines what your command will do
2) **OLen** / 6 determines how many times your command will execute

- if **OLen** % 6 is 0: oof compiler will take input from the console
- if **OLen** % 6 is 1: oof compiler will move the pointer to the right
- if **OLen** % 6 is 2: oof compiler will move the pointer to the left
- if **OLen** % 6 is 3: oof compiler will increment the value of the pointer
- if **OLen** % 6 is 4: oof compiler will decrement the value of the pointer
- if **OLen** % 6 is 5: oof compiler will will print the current value of the pointer to console

Here's a list of commands

# Example

```Hello World:```
```
ooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooofooooofof
```

# Contact

Nirex.0@gmail.com
