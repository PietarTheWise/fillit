<h1 align="center">
  <br>
    Fillit
  <br>
</h1>

<h3 align="center">A recursive backtracking algorithm for finding smallest square of tetriminos</h3>

<p align="center">
  
</p>

<p align="center">
  <a href="#what-it-does">What it does?</a> •
  <a href="#how-to-use">How To Use</a> •
  <a href="#disclaimer">Disclaimer</a>
</p>

## What it does?

* Takes in a file as a parameter where tetriminos are read.
* Organizes the tetriminos to smallest possible square.
* Prints the result to a command line.
* Uses bitwise operations which makes this algorithm perform very well
* Has a good error handling
* The algorithm does not rotate the tetriminos

## How To Use

To clone and run this application, you'll need [Git](https://git-scm.com) and gcc compiler installed on your computer. This has been tested only on MacOs and linux. Run the following commands on the command line:

```bash
# Clone this repository
$ git clone https://github.com/PietarTheWise/fillit.git
# Build the project by running:
$ make
# in the root

#To test it create a file
$ touch test.txt

```
## Next add this to the test.txt file:

```bash
...#
...#
...#
...#

....
....
....
####

.###
...#
....
....

....
..##
.##.
....
```
## Output:

```bash

ABBBB
ACCC.
A..C.
ADD..
DD...

```

## DISCLAIMER

<p>
This is a project from 42 school, which is a school that utilizes peer to peer learning.
We're only given a document that gives us the details of the assignment, therefore each implementation
is unique. Each assignment is tested for crashes and other bugs thoroughly by other peers. Apart from some exceptions, existing
libraries are banned, these projects utilize our self made version of libc called libft.
</p>
