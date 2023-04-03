cc_library(
    name = "fibonacci",
    srcs = ["fibonacci.cc"],
    hdrs = ["fibonacci.h"],
)

cc_test(
    name = "fibonacci_test",
    srcs = ["fibonacci_test.cc"],
    deps = [
        ":fibonacci",
        "@catch2//:catch2_main",
    ],
)
