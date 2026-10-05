# AI Reflection

I used Perplexity AI to help understand the compile code and how it properly works. As someone who has used VS Code as their main editor, I haven't used the terminal too much to execute my code as I generally just use the 'Run & Debug' feature within the compiler. I was able to learn more about the compile command and how to use it properly. The additional flags such as '-Wall' and '-Wextra' is something I didn't learn about when I was learning about C++ previously. I was able to learn a bit more about using the Terminal and how to execute programs using it. I believe I still have a lot to learn with uses of Terminal, but this is a good start.

  
**Prompt**  
  
Explain how to properly compile the two programs using:  
g++ -std=c++17 -Wall -Wextra sum.cpp -o sum  
g++ -std=c++17 -Wall -Wextra mpg.cpp -o mpg  
(Also break down the compile command, I want to understand what each flag means)

**Response**

Compile and run

**sum.cpp**

g++ -std=c++17 -Wall -Wextra sum.cpp -o sum

Then run it:  
./sum

Expected output:  
Total: 150

**mpg.cpp**

g++ -std=c++17 -Wall -Wextra mpg.cpp -o mpg

Then run it:  
./mpg

Expected output:  
Miles per gallon: 19.5 MPG

<table><tbody><tr><td>Part</td><td>Meaning</td></tr><tr><td><code>g++</code></td><td>Starts the GNU C++ compiler. It reads C++ source code and creates an executable program.</td></tr><tr><td><code>-std=c++17</code></td><td>Uses the C++17 language standard. Your assignment specifically requests this standard.</td></tr><tr><td><code>-Wall</code></td><td>Enables a common set of compiler warnings. Warnings help identify code that may be legal C++ but could be a mistake.</td></tr><tr><td><code>-Wextra</code></td><td>Enables additional warnings that are not automatically included by <code>-Wall</code>.</td></tr><tr><td><code>sum.cpp</code></td><td>The source code file being compiled.</td></tr><tr><td><code>-o</code></td><td>Means “output.” It lets you choose the name of the executable file the compiler creates.</td></tr><tr><td><code>sum</code></td><td>The chosen output executable name. On Windows, the generated program will normally appear as <code>sum.exe</code>.</td></tr></tbody></table>

As I didn't use AI to assist with my decision making and improvements to my codebase or README.md, I decided to write about a decision I made in my code. One decision I made was whether to declare the starting values as 'const' variables or as regular 'int' and 'double' variables. The values in both programs do not change while the program is running, so I considered using 'const'. I reviewed the 'C++ Styling Guide' videos and also reviewed the 'Variables and Symbolic Constants' pdf and I believe I made the correct choice in making the starting variables into constants. In both programs, the starting values do not change after it is initialized. I used uppercasing to correct match the styling for constants.

To verify if my code was working properly, I used a calculator to check if my values were correct. For all 6 operations, my values correctly matched what was expected, so I knew my code was working as intended.
