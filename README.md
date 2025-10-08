# SharedMessages
Centralized message struct format for all Halloween 2025 prop nodes

The project includes several ESP-NOW nodes talking to each other.<br>
Creating a library for structure.h reduced opportunities for errors.<br>

In any sketch that uses this struct:<br>
  #include <structure.h><br>
  messages myData;<br>

To update the library, upload changes to the git then:<br>
  cd \Users\steve\Documents\Arduino\libraries\SharedMessages<br>
  git pull<br>

