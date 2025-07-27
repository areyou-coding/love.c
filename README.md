# love.c

Love.c is a program that's like donut.c; it animates a visualisation whose shape is equal to that of the source code. In this, donut.c creates a silly spinning donut whereas love.c fills your terminal with endlessly regenerating digital hearts. To do so, love.c directly derives the shape of it's initial visualisation from the shape of its source code, and animates it by using a Cellular Automaton model on a 2D grid of bits with a special next state function applied to derive new frames.

to run: `gcc -o love love.c -w && ./love`

<img width="2047" height="897" alt="side-by-side" src="https://github.com/user-attachments/assets/8f5d4cad-6922-425e-915d-7ce22a9a144d" />
