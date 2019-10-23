
fuzzylegacy
==================


A Fuzzy Logic Control Lib and Frontend in C++
------------------------------------

By: [Yuri Sa](https://about.me/yuri.sa).

Released: 2019-10-22

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


But generally it's easy to use:
- Open file
- Use SETUP page (Giant WIDE button labeled SETUP) to:
    - input variables on the LEFT SIDE PANE
    - output variables on the RIGHT SIDE PANE
    - rules on the BOTTOM PANE
- Note, after defining some variables, click on the "Ab" button and will generate the rules for you.
- You can check if the rules are "Ok" by clicking on the COG icon



Well, the non-geek  part is over, from now on we will drop some serious nerd talk, C++ and all.... so... stay at your voluition.

This work is a fork of the venerable fuzzylite, but as the opensource goes...well, it isn't anymore (#sad).

***

### <a name="license">License</a>
`fuzzylegacy` is licensed under the [**GNU General Public License (GPL) 3.0**](https://www.gnu.org/licenses/gpl.html).

***


### <a name="introduction">Introduction</a>


`fuzzylegacy` is a free and open-source fuzzy logic control library programmed in C++ for multiple platforms (e.g., Windows, Linux, Mac, iOS).
 The **goal** of the FuzzyLegacy Libraries is to **easily** design and **efficiently** operate fuzzy logic controllers following an **object-oriented** programming model **without** relying on external libraries.


#### Reference
If you are using the FuzzyLegacy Libraries, please cite the following reference in your article:

Yuri Sa. fuzzylegacy: a fuzzy logic control library, 2019 URL https://github.com/yurisa2/fuzzylegacy.

```bibtex
 @misc{fl::fuzzylegacy,
 author={Yuri Sa},
 title={fuzzylegacy: a fuzzy logic control library},
 url={https://github.com/yurisa2/fuzzylegacy},
 year={2019}}
```

#### Documentation
The documentation is under heavy development... but as my time for this is very little...It's on the backburner... sry

#### Contributing
All contributions are welcome, provided they follow the following guidelines:
 - Source code is consistent with standards in the library
 - Contribution is appropriately documented and tested, raising issues where appropriate
 - License of the contribution is waived to match the license of the FuzzyLegacy Libraries


***

### <a name="features">Features</a>

**(6) Controllers**: Mamdani, Takagi-Sugeno, Tsukamoto

**(21) Linguistic terms**:  (4) *Basic*: triangle, trapezoid, rectangle, discrete.
(9) *Extended*: bell, cosine, gaussian, gaussian product, pi-shape, sigmoid difference, sigmoid product, spike.
(5) *Edges*: binary, concave, ramp, sigmoid, s-shape, z-shape.
(3) *Functions*: constant, linear, function.

**(7) Activation methods**:  general, proportional, threshold, first, last, lowest, highest.

**(8) Conjunction and Implication (T-Norms)**: minimum, algebraic product, bounded difference, drastic product, einstein product, hamacher product, nilpotent minimum, function.

**(10) Disjunction and Aggregation (S-Norms)**:  maximum, algebraic sum, bounded sum, drastic sum, einstein sum, hamacher sum, nilpotent maximum, normalized sum, unbounded sum,  function.

**(7) Defuzzifiers**:  (5) *Integral*: centroid, bisector, smallest of maximum, largest of maximum, mean of maximum.
(2) *Weighted*: weighted average, weighted sum.

**(7) Hedges**: any, not, extremely, seldom, somewhat, very, function.

**(3) Importers**: FuzzyLegacy Language `fll`, Fuzzy Inference System `fis`, Fuzzy Control Language `fcl`.

**(7) Exporters**: `C++`, `Java`, FuzzyLegacy Language `fll`, FuzzyLegacy Dataset `fld`, `R` script, Fuzzy Inference System `fis`, Fuzzy Control Language `fcl`.

**(30+) Examples**  of Mamdani, Takagi-Sugeno, Tsukamoto, controllers from `fuzzylegacy`, Octave, and Matlab, each included in the following formats: `C++`, `Java`, `fll`, `fld`, `R`, `fis`, and `fcl`.




***

### <a name="example">Example</a>
#### FuzzyLegacy Language
```yaml
#File: ObstacleAvoidance.fll
Engine: ObstacleAvoidance
InputVariable: obstacle
  enabled: true
  range: 0.000 1.000
  lock-range: false
  term: left Ramp 1.000 0.000
  term: right Ramp 0.000 1.000
OutputVariable: mSteer
  enabled: true
  range: 0.000 1.000
  lock-range: false
  aggregation: Maximum
  defuzzifier: Centroid 100
  default: nan
  lock-previous: false
  term: left Ramp 1.000 0.000
  term: right Ramp 0.000 1.000
RuleBlock: mamdani
  enabled: true
  conjunction: none
  disjunction: none
  implication: AlgebraicProduct
  activation: General
  rule: if obstacle is left then mSteer is right
  rule: if obstacle is right then mSteer is left
```
```cpp
//File: ObstacleAvoidance.cpp
#include "fl/Headers.h"

int main(int argc, char* argv[]){
    using namespace fl;
    Engine* engine = FllImporter().fromFile("ObstacleAvoidance.fll");

    std::string status;
    if (not engine->isReady(&status))
        throw Exception("[engine error] engine is not ready:\n" + status, FL_AT);

    InputVariable* obstacle = engine->getInputVariable("obstacle");
    OutputVariable* steer = engine->getOutputVariable("mSteer");

    for (int i = 0; i <= 50; ++i){
        scalar location = obstacle->getMinimum() + i * (obstacle->range() / 50);
        obstacle->setValue(location);
        engine->process();
        FL_LOG("obstacle.input = " << Op::str(location) <<
            " => " << "steer.output = " << Op::str(steer->getValue()));
    }
}
```

#### C++
```cpp
//File: ObstacleAvoidance.cpp
#include "fl/Headers.h"

int main(int argc, char* argv[]){
    using namespace fl;
    //Code automatically generated with fuzzylegacy 6.0.

    using namespace fl;

    Engine* engine = new Engine;
    engine->setName("ObstacleAvoidance");
    engine->setDescription("");

    InputVariable* obstacle = new InputVariable;
    obstacle->setName("obstacle");
    obstacle->setDescription("");
    obstacle->setEnabled(true);
    obstacle->setRange(0.000, 1.000);
    obstacle->setLockValueInRange(false);
    obstacle->addTerm(new Ramp("left", 1.000, 0.000));
    obstacle->addTerm(new Ramp("right", 0.000, 1.000));
    engine->addInputVariable(obstacle);

    OutputVariable* mSteer = new OutputVariable;
    mSteer->setName("mSteer");
    mSteer->setDescription("");
    mSteer->setEnabled(true);
    mSteer->setRange(0.000, 1.000);
    mSteer->setLockValueInRange(false);
    mSteer->setAggregation(new Maximum);
    mSteer->setDefuzzifier(new Centroid(100));
    mSteer->setDefaultValue(fl::nan);
    mSteer->setLockPreviousValue(false);
    mSteer->addTerm(new Ramp("left", 1.000, 0.000));
    mSteer->addTerm(new Ramp("right", 0.000, 1.000));
    engine->addOutputVariable(mSteer);

    RuleBlock* mamdani = new RuleBlock;
    mamdani->setName("mamdani");
    mamdani->setDescription("");
    mamdani->setEnabled(true);
    mamdani->setConjunction(fl::null);
    mamdani->setDisjunction(fl::null);
    mamdani->setImplication(new AlgebraicProduct);
    mamdani->setActivation(new General);
    mamdani->addRule(Rule::parse("if obstacle is left then mSteer is right", engine));
    mamdani->addRule(Rule::parse("if obstacle is right then mSteer is left", engine));
    engine->addRuleBlock(mamdani);

    std::string status;
    if (not engine->isReady(&status))
        throw Exception("[engine error] engine is not ready:\n" + status, FL_AT);

    for (int i = 0; i <= 50; ++i){
        scalar location = obstacle->getMinimum() + i * (obstacle->range() / 50);
        obstacle->setValue(location);
        engine->process();
        FL_LOG("obstacle.input = " << Op::str(location) <<
            " => " << "steer.output = " << Op::str(steer->getValue()));
    }
}
```

### <a name="compile-build-execute">Compile, Link, and Execute</a>

Once you have an engine written in C++, you can compile it to create an executable file which links to the `fuzzylegacy` library. The linking can be either static or dynamic. Basically, the differences between static and dynamic linking are the following.  **Static linking** includes the `fuzzylegacy` library into your executable file, hence increasing its size, but the executable no longer needs to  have access to the `fuzzylegacy` library files. **Dynamic linking** does not include the `fuzzylegacy` library into your executable file, hence reducing its size, but the executable needs to have access to the `fuzzylegacy` shared library file. When using dynamic linking, make sure that  the shared library files are  either in the same directory as the executable, or are reachable via environmental variables:

```posh
rem Windows:
set PATH="\path\to\fuzzylegacy\release\bin;%PATH%"
```
```bash
#Unix:
export LD_LIBRARY_PATH="/path/to/fuzzylegacy/release/bin/:$LD_LIBRARY_PATH"
```

#### Windows
The commands to compile your engine in Windows are the following:

C++11 (default)
```posh
rem static linking:
cl.exe ObstacleAvoidance.cpp fuzzylegacy-static.lib /Ipath/to/fuzzylegacy /EHsc /MD
```
```posh
rem dynamic linking:
cl.exe ObstacleAvoidance.cpp fuzzylegacy.lib /Ipath/to/fuzzylegacy /DFL_IMPORT_LIBRARY /EHsc /MD
```

C++98
```posh
rem static linking:
cl.exe ObstacleAvoidance.cpp fuzzylegacy-static.lib /Ipath/to/fuzzylegacy /DFL_CPP98=ON /EHsc /MD
```
```posh
rem dynamic linking:
cl.exe ObstacleAvoidance.cpp fuzzylegacy.lib /Ipath/to/fuzzylegacy /DFL_IMPORT_LIBRARY /DFL_CPP98=ON /EHsc /MD
```

#### Unix
The commands to compile your engine in Unix are the following:

C++11 (default)
```bash
#static linking
g++ ObstacleAvoidance.cpp -o ObstacleAvoidance -I/path/to/fuzzylegacy -L/path/to/fuzzylegacy/release/bin -lfuzzylegacy-static --std=c++11
```
```bash
#dynamic linking
g++ ObstacleAvoidance.cpp -o ObstacleAvoidance -I/path/to/fuzzylegacy -L/path/to/fuzzylegacy/release/bin -lfuzzylegacy -Wno-non-literal-null-conversion
```

C++98
```bash
#static linking
g++ ObstacleAvoidance.cpp -o ObstacleAvoidance -I/path/to/fuzzylegacy -L/path/to/fuzzylegacy/release/bin -lfuzzylegacy-static -DFL_CPP98=ON
```
```bash
#dynamic linking
g++ ObstacleAvoidance.cpp -o ObstacleAvoidance -I/path/to/fuzzylegacy -L/path/to/fuzzylegacy/release/bin -lfuzzylegacy -DFL_CPP98=ON -Wno-non-literal-null-conversion
```

#### CMake
Alternatively, you can use CMake to build your project linking to `fuzzylegacy`. Please, refer to the example application available at [examples/application]([/examples/application]).



***


### <a name="building">Building  from Source</a>
You can build the `fuzzylegacy` library from source using  `CMake` [(cmake.org)](https://cmake.org/).

The files [`fuzzylegacy/build.bat`](/fuzzylegacy/build.bat) and [`fuzzylegacy/build.sh`](/fuzzylegacy/build.sh) are build scripts for the Windows and Unix platforms, respectively.
After building from source, the resulting binaries will be located in the sub-folders `fuzzylegacy/release/bin` and `fuzzylegacy/debug/bin`.

#### Building Options
For advanced building options, please check the contents of [`fuzzylegacy/CMakeLists.txt`](/fuzzylegacy/CMakeLists.txt).

The following building options available:

* `-DFL_USE_FLOAT=ON` builds the binaries utilizing the `fl::scalar` data type as a `float` represented in 4 bytes. By default, the binaries are built utilizing `-DFL_USE_FLOAT=OFF` to utilize `fl::scalar` as a `double` represented in 8 bytes and hence providing better accuracy. If `fuzzylegacy` is built with `-DFL_USE_FLOAT=ON`, then the applications linking to `fuzzylegacy` also need to specify this compilation flag.

* `-DFL_BACKTRACE=OFF` disables the backtrace information in case of errors (default is ON). In Windows, the backtrace information requires the external library `dbghelp`, which is generally available in your system.

* `-DCMAKE_BUILD_TYPE=[Debug|Release]` sets the mode of your build. You can only build one mode at a time with a single CMake script.


#### Documentation
The source code of `fuzzylegacy` is very well documented using [`doxygen`](www.doxygen.org/) formatting, and the documentation is WIP. If you want to generate the documentation locally, you can produce the `html` documentation from the file [Doxyfile](/Doxyfile) using the command line: `doxygen Doxyfile`. The documentation will be created in the [`documentation`](/documentation) folder.

***

### <a name="binaries">Binaries</a>

After building from source, the following are the relevant binaries that will be created in `Release` mode. In `Debug` mode, the file names end with `-debug` (e.g., `fuzzylegacy-debug.exe`).

#### Windows

- console application: `fuzzylegacy.exe`
- shared library: `fuzzylegacy.dll`, `fuzzylegacy.lib`
- static library: `fuzzylegacy-static.lib`

#### Linux

- console application: `fuzzylegacy`
- shared library: `libfuzzylegacy.so`
- static library: `libfuzzylegacy-static.a`

#### Mac

- console application: `fuzzylegacy`
- shared library: `libfuzzylegacy.dylib`
- static library: `libfuzzylegacy-static.a`


#### Console
The console application of `fuzzylegacy` allows you to import and export your engines. Its usage can be obtained executing the console binary. In addition, the console can be set in interactive mode. The `FuzzyLegacy Interactive Console`  allows you to evaluate a given controller by manually providing the input values. The interactive console is triggered by specifying an input file and an output format. For example, to interact with the `ObstacleAvoidance` controller, the interactive console is launched as follows:

```bash
fuzzylegacy -i ObstacleAvoidance.fll -of fld
```


***
