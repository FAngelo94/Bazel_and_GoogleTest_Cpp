# Use Bazel to build and run a cpp application

In this example you can see how to use bazel to build and test a cpp application with google-test framework.\
To see a more details tutorial only about bazel look this my example: https://github.com/FAngelo94/Bazel_Tutorial

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