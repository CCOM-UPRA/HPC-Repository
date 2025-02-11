Just about every machine in the **Top500 list of supercomputers** runs a Linux (or at least Unix-like) operating system. Familiarity with the operating system's built-in utilities, along with common shell commands are a must.

Among the most helpful commands to know well is `grep` (which stands for "Global Regular Expression Print"). It's a way to search based on some user-provided pattern. At its simplest, `grep` works like cmd+F/ctrl+F. However, where it really shines is the ability to match patterns of characters through regular expressions, not just characters themselves.

For the first challenge you will find a password hidden in
- `file1.txt`

The passwords can be found by matching the string "password" or a representation of it using non-alphabetic characters. Think about how people may use 0s in place of Os, or @ instead of A. For example, consider the following lines of text from a file `demo.txt`:

```
Qd2ciwv2UqRHazew1cIg
nhJql8H68T6xngS2cdPL
FEHCJJKsi4v1gVC3A5mg
Z3e3kWrmJy3spP8K4Y3I
Dnvu2oWelNxhVBZQtn3s
PasswordIsHelloWorld
VyifvCmESfNGkYaXZtJe
KXG7E3KQrIW4UT42TqCF
```

In this sample, the string 'HelloWorld' would be a valid password. From the command line, we can quickly "grep through the file" to identify this.

```
$ grep "Password" ./demo.txt
PasswordIsHelloWorld
```

Take a look through the `grep` manual page by running `man grep`. You'll find that there are many options to help match patterns and format output to be more helpful. Additional flags can display the filename and line number where a match is found. (`q` will exit the man page)

with this password you will be able to open `file2.txt`, which contains the instructions for the second challenge!

once you have the password use the following command: 
- `vim file2.txt`
- when prompted, enter the password found in `file1.txt`
