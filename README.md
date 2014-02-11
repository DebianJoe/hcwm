hcwm
====

Heavily Commented Window Manager

Project Goal
====
I really like cwm, and I also really like tiling.  Since cwm gives the option to spawn a new window manager from within the session, I hacked up a stripped-down version of dwm from suckless.org that would allow me right-stack dynamic tiling, and by keybinds, return back to cwm.

Installation
====
Clone this repo.  cd into it.  Edit config.h with whatever terminals and programs you wish to attach to keybinds.  After that, "make install" should build it (with some 'minor warnings from gcc'...ignore those, real men don't care about compiler warnings.)  "make clean" to remove extra junk.  From there, run it.

Usage
====
All of the keybinds are listed in the config.h header.  I didn't write a man page.  If you wish to make some kind of a change that occurs when wm swapping (such as spawning hcwm from another wm, then edit the 'hcwmrc' bash script before you "make install".  This file needs to be manually copied into ~/.hcwmrc, so future edits can be done directly to this file without having to rebuild.  It's just bash, be creative.  

FAQ
====
Q. I don't have a window manager that allows shifting wm's on the fly.  Wat do?
A. hcwm WILL run as a standalone window manager.

Q. I need mouse support in a program.
A. Well, the mouse will still work inside your program, but I don't like controlling windows with the mouse.  If you do, then find a window manager that supports it.

Q. How do I launch programs if I don't want to write keybinds for them?
A. Use dmenu.

Q. I want to see (______) feature, will you add it?
A. NO!  Get a wm that suits you.  I don't care if you use my stuff or not.

Q. Why "heavily commented?"
A. I would like to see more people simply change stuff that they don't like in programs themselves rather than bloating up a perfectly good program through feature requests.  I only ever use 4 virtual desktops, so that's all I wrote it to handle.  If you want more, find the comments about it and change it yourself.  Take control.  I'm not your slave.

License
====
Due to my "borrowing" large portions of code from dwm and catwm, this is released under the MIT/X consortium license.  Please read the included License file.  Without all of their previous work, I wouldn't have been able to screw it up and make this. - joe
