<h1>Meow Shell 🐱 - Shell inside Shell! 🤯</h1>
<p>In this repository, you will find a project consisting of the closest possible recreation of a simple UNIX command interpreter in C programming language, that is, a shell of its own.</p>
<br>
<h2>Ok! but, a Shell? 🤨</h2>
<p>Basically, a shell is a command line interpreter, which contains an interface that allows users to execute commands and perform different actions such as file manipulation on UNIX-based operating systems.</p>

<img src="https://opensource.com/sites/default/files/lead-images/bash_command_line.png">

<p><i><b>Img source:</b> https://opensource.com/article/19/9/getting-started-zsh</i></p>
<br>
<h2>Importance of each <i>function</i> 🤝🏻</h2>
<p>Each of the files you can see plays an important role for the project, because when all of them are finally compressed (compiled) and form an executable file, it will contain the correct shell operation.  Here is a brief description of each one:</p>
<br>
<table>
    <thead>
        <tr>
            <th>File</th>
            <th>Description</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_built-in.c" target="_blank">_built-in.c</a></td>
            <td>Find the built-in or non-built-in command</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_env.c" target="_blank">_env.c</a></td>
            <td>Prints a list of environment variables</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_execute.c" target="_blank">_execute.c</a></td>
            <td>Execute non-built-ins commands</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_exit.c" target="_blank">_exit.c</a></td>
            <td>Exits the program</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_findpath.c" target="_blank">_findpath.c</a></td>
            <td>Find the PATH in the environment variables</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_freestrs.c" target="_blank">_freestrs.c</a></td>
            <td>Frees the memory occupied by any string</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_notfound.c" target="_blank">_notfound.c</a></td>
            <td>Displays an error when the user input is not a valid command</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_printnumber.c" target="_blank">_printnumber.c</a></td>
            <td>Prints an integer</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_strcat.c" target="_blank">_strcat.c</a></td>
            <td>Concatenates two strings</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_strcmp.c" target="_blank">_strcmp.c</a></td>
            <td>Compares two strings</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_strcpy.c" target="_blank">_strcpy.c</a></td>
            <td>Copies a string</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_strlen.c" target="_blank">_strlen.c</a></td>
            <td>Returns the length of a string</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/_strtok.c" target="_blank">_strtok.c</a></td>
            <td>Tokenize strings</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/shell.c" target="_blank">shell.c</a></td>
            <td>Main shell functionality</td>
        </tr>
        <tr>
            <td><a href="https://github.com/FranRM15/simple_shell/blob/main/shell.h" target="_blank">shell.h</a></td>
            <td>All prototypes of the functions used</td>
        </tr>
    </tbody>
</table>
<br>
<h2>How the program works? 🤔📊</h2>
<p>Let us consider a flowchart that will help us to understand the operation of the program in a logical way:</p>

[![Simple-Shell-Flowchart.png](https://i.postimg.cc/ydvDmFy7/Simple-Shell-Flowchart.png)](https://postimg.cc/ZBvYZvQQ)

<br>
<h2>Compilation ⚙️</h2>
<p>You can compile the program with gcc and different flags that will check for correct operation, which check for errors, warnings and so on. Here is the complete command:</p>
<pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o <b>shell</b></code></pre>
<p><b>shell</b> will be the name of the file that will be created as executable.</p>
<p>In addition, after compiling the program, you can run it with the <b>valgrind</b> tool, which helps in debugging memory and performance problems of a program. For this, we will provide you with the command ready with the respective flags, these serve a similar function to those provided for the previous compilation, to help verify the correct operation of the program in general, as well as to make it portable for different devices. Take it below:</p>
<pre><code>valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --vgdb=no<b> ./shell</b></code></pre>
<br>
<h2>Execution examples 🔍️</h2>
<p>This shell can be executed in two different ways:</p>
<h3><b><i>Interactive mode</i></b></h3>
<p>Running the executable file and accessing it directly:</p>

<img src="https://i.postimg.cc/3w6CvTR9/Shell-Interactive-mode-example.png">

<h3><b><i>Non-interactive mode</i></b></h3>
<p>Without directly accessing the executable file:</p>

[![Shell-Non-Interactive-mode-example.png](https://i.postimg.cc/3JcLJSW7/Shell-Non-Interactive-mode-example.png)](https://postimg.cc/KRt705ns)

<br>
<h2>Authors 👨‍💻</h2>
<ul dir="auto">
    <li>
        <p dir="auto"><i><b>Francisco Ramírez</b></i> |&nbsp;<a href="https://twitter.com/FranciscoR_15"> Twitter</a> |&nbsp;<a href="https://github.com/FranRM15" rel="nofollow"> GitHub</a></p>
    </li>
    <li>
        <p dir="auto"><i><b>Johan Blandón</b></i> |&nbsp;<a href="https://twitter.com/blandonxx">Twitter</a> |&nbsp;<a href="https://github.com/SebastianBlandon" rel="nofollow">GitHub</a></p>
    </li>
</ul>
<br>
