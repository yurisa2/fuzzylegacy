
fuzzylegacy
==================


A Fuzzy Logic Control Lib and Frontend in C++
------------------------------------

By: [Yuri Sa](https://about.me/yuri.sa).

Released: 2019-10-22

I included a single FIS file ("Tanques.fis") on the windows release so you can open and fiddle with it.

But generally it's easy to use:
- Open file
- Use SETUP page (Giant WIDE button labeled SETUP) to:
    - input variables on the LEFT SIDE PANE
    - output variables on the RIGHT SIDE PANE
    - rules on the BOTTOM PANE
- Note, after defining some variables, click on the "Ab" button and will generate the rules for you.
- You can check if the rules are "Ok" by clicking on the COG icon


We have package releases of qtfuzzylegacy (GUI for FISs creation) ready for deployment:
Windows:
[zip archive](https://github.com/yurisa2/fuzzylegacy/blob/master/Binaries/Windows/FuzzyLegacy.zip)

Linux:
[Lib](https://github.com/yurisa2/fuzzylegacy/blob/master/Binaries/Linux/libfuzzylegacy.so)
[Executable](https://github.com/yurisa2/fuzzylegacy/blob/master/Binaries/Linux/qtfuzzylegacy)
In the linux release you will need the qt4 libs (debian: **apt-get install qt4-standard**) but you really want to do it by hand you can download it [here](https://download.qt.io/archive/qt/4.8/4.8.7/)

Here are some screenshots...
![Main Window](https://raw.githubusercontent.com/yurisa2/fuzzylegacy/master/Binaries/Windows/open.PNG)

![Variable Editing](https://raw.githubusercontent.com/yurisa2/fuzzylegacy/master/Binaries/Windows/editVariable.PNG)
![The control screen](https://raw.githubusercontent.com/yurisa2/fuzzylegacy/master/Binaries/Windows/control.PNG)
