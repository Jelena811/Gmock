# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
    name = "my_mock",
    hdrs = ["MockDB.h"],
      deps = [
        "//Components/MyComponent:my_components",
        "@googletest//:gtest_main"],
)
cc_test(
    name = "my_test",
    
    #In order to ensure correct incremental rebuilds (and re-execution of tests) after a change,
    #the build system must be aware of the complete set of files that are inputs to the build (or test)
    #When you specify a directory, the build system will perform a rebuild only when the directory itself changes (due to addition or deletion of files),
    #but won't be able to detect edits to individual files as those changes do not affect the enclosing directory
    #Rather than specifying directories as inputs 
    #to the build system, you should enumerate the set of files contained within them, 
    #either explicitly or using the glob() function. (Use ** to force the glob() to be recursive.)
    srcs = glob(["**/*.cpp"]),

    deps = [
        "//Components/MyComponent:my_components",
        "//test:my_mock",
        "@googletest//:gtest_main"], # Only if _test.cc has no main()
                                     # @googletest se odnosi na ime u WORKSPACE file-u
)