cc_library(
    name = "celsius",
    srcs = ["celsius.cc"],
    hdrs = ["celsius.h"],
)

cc_test(
    name = "celsius_test",
    srcs = ["celsius_test.cc"],
    deps = [
        ":celsius",
        "@catch2//:catch2_main",
    ],
)
