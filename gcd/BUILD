cc_library(
    name = "gcd",
    srcs = ["gcd.cc"],
    hdrs = ["gcd.h"],
)

cc_library(
    name = "lcm",
    srcs = ["lcm.cc"],
    hdrs = ["lcm.h"],
    deps = [
        ":gcd",
    ],
)

cc_test(
    name = "gcd_test",
    srcs = ["gcd_test.cc"],
    deps = [
        ":gcd",
        "@catch2//:catch2_main",
    ],
)

cc_test(
    name = "lcm_test",
    srcs = ["lcm_test.cc"],
    deps = [
        ":lcm",
        "@catch2//:catch2_main",
    ],
)
