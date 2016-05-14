ACLOCAL_AMFLAGS = -I m4

bin_PROGRAMS = hodlgen

lib_LIBRARIES = lib/libhodlgen.a

HODLGEN_TESTS = hodlgen_tests

check_PROGRAMS = $(HODLGEN_TESTS)

TESTS = $(check_PROGRAMS)

hodlgen_SOURCES = \
	src/main.cc

lib_libhodlgen_a_SOURCES = \
	src/diceBitConverter.cc \
	src/diceBitConverter.h

#hodlgen_CXXFLAGS=$(hodlgen_CXXFLAGS) -Wall -Wextra -pedantic -Werror
#hodlgen_CFLAGS=$(hodlgen_CFLAGS) -Wall -Wextra -pedantic -Werror

hodlgen_LDADD = lib/libhodlgen.a $(HODLGEN_LDADD)

hodlgen_tests_CPPFLAGS = $(HODLGEN_CPPFLAGS)
hodlgen_tests_CFLAGS = $(HODLGEN_CFLAGS) $(CPPUTEST_CFLAGS) -Isrc/
hodlgen_tests_CXXFLAGS = $(HODLGEN_CXXFLAGS) -Isrc/
hodlgen_tests_LDADD = lib/libhodlgen.a $(HODLGEN_LDADD)
hodlgen_tests_LDFLAGS = $(AM_LDFLAGS) $(HODLGEN_LDFLAGS) $(CPPUTEST_LIBS)

hodlgen_tests_SOURCES = \
	tests/test_runner.cc \
	tests/diceBitConverterTest.cc

RUN_HODLGEN_TESTS = ./$(HODLGEN_TESTS)

tdd: $(HODLGEN_TESTS)
	./$(HODLGEN_TESTS) -c -v

