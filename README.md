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
        <p dir="auto"><i><b>Francisco Ramírez</b></i> |&nbsp;<a href="https://twitter.com/FranciscoR_15"> Twitter</a> |&nbsp;<a href="https://github.com/DevPacho" rel="nofollow"> GitHub</a></p>
    </li>
    <li>
        <p dir="auto"><i><b>Johan Blandón</b></i> |&nbsp;<a href="https://twitter.com/blandonxx">Twitter</a> |&nbsp;<a href="https://github.com/SebastianBlandon" rel="nofollow">GitHub</a></p>
    </li>
</ul>
<br>
<h1>Detailed project description 📑</h1>
<h2>Background Context</h2>
<p>Write a simple UNIX command interpreter.</p>
</div>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
    <li><a href="https://intranet.hbtn.io/rltoken/RsZhUQ_26du3YUYKXO3gXA" target="_blank" title="Unix shell">Unix shell</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/CNhUqQ5TFpdvFGsd1Meyig" target="_blank" title="Thompson shell">Thompson shell</a></li>
    <li><a href="https://intranet.hbtn.io/rltoken/G_kMmrcR7rm3uXsiVk1F0w" target="_blank" title="Ken Thompson">Ken Thompson</a></li>
    <li><strong>Everything you need to know to start coding your own shell</strong> concept page</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
    <li><code>sh</code> (<em>Run&nbsp;<code>sh</code> as well</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a href="https://intranet.hbtn.io/rltoken/J2Xchn4MO6tV6oZGCCtfQQ" target="_blank" title="explain to anyone">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
    <li>Who designed and implemented the original Unix operating system</li>
    <li>Who wrote the first version of the UNIX shell</li>
    <li>Who invented the B programming language (the direct predecessor to the C programming language)</li>
    <li>Who is Ken Thompson</li>
    <li>How does a shell work</li>
    <li>What is a pid and a ppid</li>
    <li>How to manipulate the environment of the current process</li>
    <li>What is the difference between a function and a system call</li>
    <li>How to create processes</li>
    <li>What are the three prototypes of&nbsp;<code>main</code></li>
    <li>How does the shell use the&nbsp;<code>PATH</code> to find the programs</li>
    <li>How to execute another program with the&nbsp;<code>execve</code> system call</li>
    <li>How to suspend the execution of a process until one of its children terminates</li>
    <li>What is&nbsp;<code>EOF</code> / &ldquo;end-of-file&rdquo;?</li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
    <li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
    <li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
    <li>All your files should end with a new line</li>
    <li>A&nbsp;<code>README.md</code> file, at the root of the folder of the project is mandatory</li>
    <li>Your code should use the&nbsp;<code>Betty</code> style. It will be checked using&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" title="betty-style.pl">betty-style.pl</a> and&nbsp;<a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" title="betty-doc.pl">betty-doc.pl</a></li>
    <li>Your shell should not have any memory leaks</li>
    <li>No more than 5 functions per file</li>
    <li>All your header files should be include guarded</li>
    <li>Use system calls only when you need to (<a href="https://intranet.hbtn.io/rltoken/StgX3y26fwPNV_DqlZLErw" target="_blank" title="why?">why?</a>)</li>
</ul>
<h2>More Info</h2>
<h3>Output</h3>
<ul>
    <li>Unless specified otherwise, your program&nbsp;<strong>must have the exact same output</strong> as&nbsp;<code>sh</code> (<code>/bin/sh</code>) as well as the exact same error output.</li>
    <li>The only difference is when you print an error, the name of the program must be equivalent to your&nbsp;<code>argv[0]</code> (See below)</li>
</ul>
<p>Example of error with&nbsp;<code>sh</code> :</p>
<pre><code>$ echo &quot;qwerty&quot; | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo &quot;qwerty&quot; | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
</code></pre>
<p>Same error with your program&nbsp;<code>hsh</code> :</p>
<pre><code>$ echo &quot;qwerty&quot; | ./hsh
./hsh: 1: qwerty: not found
$ echo &quot;qwerty&quot; | ./././hsh
./././hsh: 1: qwerty: not found
$</code></pre>
<h3>List of allowed functions and system calls</h3>
<ul>
    <li><code>access</code> (man 2 access)</li>
    <li><code>chdir</code> (man 2 chdir)</li>
    <li><code>close</code> (man 2 close)</li>
    <li><code>closedir</code> (man 3 closedir)</li>
    <li><code>execve</code> (man 2 execve)</li>
    <li><code>exit</code> (man 3 exit)</li>
    <li><code>_exit</code> (man 2 _exit)</li>
    <li><code>fflush</code> (man 3 fflush)</li>
    <li><code>fork</code> (man 2 fork)</li>
    <li><code>free</code> (man 3 free)</li>
    <li><code>getcwd</code> (man 3 getcwd)</li>
    <li><code>getline</code> (man 3 getline)</li>
    <li><code>getpid</code> (man 2 getpid)</li>
    <li><code>isatty</code> (man 3 isatty)</li>
    <li><code>kill</code> (man 2 kill)</li>
    <li><code>malloc</code> (man 3 malloc)</li>
    <li><code>open</code> (man 2 open)</li>
    <li><code>opendir</code> (man 3 opendir)</li>
    <li><code>perror</code> (man 3 perror)</li>
    <li><code>read</code> (man 2 read)</li>
    <li><code>readdir</code> (man 3 readdir)</li>
    <li><code>signal</code> (man 2 signal)</li>
    <li><code>stat</code> (__xstat) (man 2 stat)</li>
    <li><code>lstat</code> (__lxstat) (man 2 lstat)</li>
    <li><code>fstat</code> (__fxstat) (man 2 fstat)</li>
    <li><code>strtok</code> (man 3 strtok)</li>
    <li><code>wait</code> (man 2 wait)</li>
    <li><code>waitpid</code> (man 2 waitpid)</li>
    <li><code>wait3</code> (man 2 wait3)</li>
    <li><code>wait4</code> (man 2 wait4)</li>
    <li><code>write</code> (man 2 write)</li>
</ul>
<h3>Compilation</h3>
<p>Your shell will be compiled this way:</p>
<pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
</code></pre>
<h3>Testing</h3>
<p>Your shell should work like this in interactive mode:</p>
<pre><code>$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
</code></pre>
<p>But also in non-interactive mode:</p>
<pre><code>$ echo &quot;/bin/ls&quot; | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$</code></pre>
<br>
<h1>Tasks</h1>
<h2>0. README, man, AUTHORS</h2>
<ul>
    <li>Write a&nbsp;<code>README</code></li>
    <li>Write a&nbsp;<code>man</code> for your shell.</li>
    <li>You should have an&nbsp;<code>AUTHORS</code> file at the root of your repository, listing all individuals having contributed content to the repository. Format, see&nbsp;<a href="https://intranet.hbtn.io/rltoken/xvzr_eas4Z83gL3Fp0slag" target="_blank" title="Docker">Docker</a></li>
</ul>
<li><b><i>Files:</b>&nbsp;<code>README.md, man_1_simple_shell, AUTHORS</i></code></li>
<br>
<h2>1. Betty would be proud</h2>
<div>
    <p>Write a beautiful code that passes the Betty checks</p>
</div>
<div>
    <div></div>
</div>
<br>
<h2>2. Simple shell 0.1</h2>
<p>Write a UNIX command line interpreter.</p>
<ul>
    <li>Usage:&nbsp;<code>simple_shell</code></li>
</ul>
<p>Your Shell should:</p>
<ul>
    <li>Display a prompt and wait for the user to type a command. A command line always ends with a new line.</li>
    <li>The prompt is displayed again each time a command has been executed.</li>
    <li>The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.</li>
    <li>The command lines are made only of one word. No arguments will be passed to programs.</li>
    <li>If an executable cannot be found, print an error message and display the prompt again.</li>
    <li>Handle errors.</li>
    <li>You have to handle the &ldquo;end of file&rdquo; condition (<code>Ctrl+D</code>)</li>
</ul>
<p>You don&rsquo;t have to:</p>
<ul>
    <li>use the&nbsp;<code>PATH</code></li>
    <li>implement built-ins</li>
    <li>handle special characters :&nbsp;<code>&quot;</code>,&nbsp;<code>&apos;</code>,&nbsp;<code>`</code>,&nbsp;<code>\</code>,&nbsp;<code>*</code>,&nbsp;<code>&amp;</code>,&nbsp;<code>#</code></li>
    <li>be able to move the cursor</li>
    <li>handle commands with arguments</li>
</ul>
<pre><code>julien@ubuntu:~/shell$ ./shell 
#cisfun$ ls
./shell: No such file or directory
#cisfun$ /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c  stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ /bin/ls -l
./shell: No such file or directory
#cisfun$ ^[[D^[[D^[[D
./shell: No such file or directory
#cisfun$ ^[[C^[[C^[[C^[[C
./shell: No such file or directory
#cisfun$ exit
./shell: No such file or directory
#cisfun$ ^C
julien@ubuntu:~/shell$ echo &quot;/bin/ls&quot; | ./shell
#cisfun$ barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell.c stat.c         wait
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     stat test_scripting.sh  wait.c
#cisfun$ julien@ubuntu:~/shell$</code></pre>
<br>
<h2>3. Simple shell 0.2</h2>
<p>Simple shell 0.1 +</p>
<ul>
    <li>Handle command lines with arguments</li>
</ul>
<br>
<h2>4. Simple shell 0.3</h2>
<p>Simple shell 0.2 +</p>
<ul>
    <li>Handle the&nbsp;<code>PATH</code></li>
    <li><code>fork</code> must not be called if the command doesn&rsquo;t exist</li>
</ul>
<pre><code>julien@ubuntu:~/shell$ ./shell_0.3
:) /bin/ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
:) ls
barbie_j       env-main.c  exec.c  fork.c  pid.c  ppid.c    prompt   prompt.c  shell_0.3  stat    test_scripting.sh  wait.c
env-environ.c  exec    fork    mypid   ppid   printenv  promptc  shell     shell.c    stat.c  wait
:) ls -l /tmp 
total 20
-rw------- 1 julien julien    0 Dec  5 12:09 config-err-aAMZrR
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-colord.service-V7DUzr
drwx------ 3 root   root   4096 Dec  5 12:09 systemd-private-062a0eca7f2a44349733e78cb4abdff4-rtkit-daemon.service-ANGvoV
drwx------ 3 root   root   4096 Dec  5 12:07 systemd-private-062a0eca7f2a44349733e78cb4abdff4-systemd-timesyncd.service-CdXUtH
-rw-rw-r-- 1 julien julien    0 Dec  5 12:09 unity_support_test.0
:) ^C
julien@ubuntu:~/shell$</code></pre>
<br>
<h2>5. Simple shell 0.4</h2>
<p>Simple shell 0.3 +</p>
<ul>
    <li>Implement the&nbsp;<code>exit</code> built-in, that exits the shell</li>
    <li>Usage:&nbsp;<code>exit</code></li>
    <li>You don&rsquo;t have to handle any argument to the built-in&nbsp;<code>exit</code></li>
</ul>
<br>
<h2>6. Simple shell 1.0</h2>
<p>Simple shell 0.4 +</p>
<ul>
    <li>Implement the&nbsp;<code>env</code> <strong>built-in</strong>, that prints the current environment</li>
</ul>
<pre><code>julien@ubuntu:~/shell$ ./simple_shell
$ env
USER=julien
LANGUAGE=en_US
SESSION=ubuntu
COMPIZ_CONFIG_PROFILE=ubuntu
SHLVL=1
HOME=/home/julien
C_IS=Fun_:)
DESKTOP_SESSION=ubuntu
LOGNAME=julien
TERM=xterm-256color
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
DISPLAY=:0
$ exit
julien@ubuntu:~/shell$</code></pre>
