# SharedMessages
Centralized message struct format for all Halloween 2025 prop nodes

The project includes several ESP-NOW nodes talking to each other. Creating a library for
structure.h reduced opportunities for errors.

In any sketch that uses this struct:
#include <structure.h>
messages myData;

To update the library, upload changes to the git then:
cd \Users\steve\Documents\Arduino\libraries\SharedMessages
git pull

