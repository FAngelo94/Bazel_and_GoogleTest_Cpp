# Use Bazel to build and run a cpp application

In this example you can see how to use bazel to build and test a cpp application with google-test framework.\
To see a more details tutorial only about bazel look this my example: https://github.com/FAngelo94/Bazel_Tutorial\

I also added the possibilit to debug the application following this tutorial: https://shanee.io/blog/2019/05/28/bazel-with-visual-studio-code/ \
Put the breakpoint in the line ou want to interrupt the code and press the green arrow in the debug section (usually you can find it in the right of the visual studio code window).\
The 2 files .json, called task.json and launch.json, contain the configuration to use the debug.

## Commands

Run this command to build the entire application:
```
bazel build ...
```

Run this command to build and execute the test:
```
bazel test ...
```

Run this command to build and run a specific target in your application
```
bazel run //src/mainfolder:bazeltarget
```