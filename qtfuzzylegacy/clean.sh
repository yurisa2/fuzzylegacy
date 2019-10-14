#!/bin/bash
make -f Makefile clean
rm -rf Makefile CMakeFiles CMakeScripts Debug qtfuzzylegacy.build qtfuzzylegacy.xcodeproj tmp cmake_install.cmake CMakeCache.txt qtfuzzylegacy.app moc_*
rm *.h *.cxx Info.plist 
