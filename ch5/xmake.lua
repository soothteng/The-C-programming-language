add_rules("mode.debug", "mode.release")

-- 5.11 source code

target("qsort_n")
    set_kind("binary")
    add_files("5-11/src/qsort_n/*.c")
    add_files("alloc.c")
    add_files("read_write.c")
    add_files("numcmp.c")
