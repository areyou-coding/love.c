# love.c

Love.c is a program that's inspired by [donut.c](https://www.youtube.com/results?search_query=donut.c); it animates a visualisation whose shape is similar to that of the source code. But, whereas donut.c creates a silly spinning donut, love.c fills your terminal with endlessly regenerating digital hearts. To do so, love.c also directly derives the shape of it's initial visualisation from the shape of its source code, and animates it by using a Cellular Automaton model on a 2D grid of bits with a special next state function applied to derive new frames.

Fun facts:\
  🌿 Branchless; no if-statements used\
  🎥 Stable framerate and buffered display\
  ⏰ Animation runs forever, always returning to hearts eventually\
  💓 Spreads love

to run: `gcc -o love love.c -w && ./love`

<img width="2046" height="900" alt="side-by-side-2" src="https://github.com/user-attachments/assets/a1fb9847-8b59-479b-81bd-1f9a08db3c6b" />

