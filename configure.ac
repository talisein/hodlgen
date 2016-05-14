AC_PREREQ([2.68])
AC_INIT([hodlgen], [0.0.1], [https://github.com/talisein/hodlgen])
AM_INIT_AUTOMAKE([subdir-objects])
AC_CONFIG_SRCDIR([src/main.cc])
AC_CONFIG_HEADERS([config.h])
AX_PREFIX_CONFIG_H(generated/hodlgen_generated_config.h)
AC_CONFIG_MACRO_DIR([m4])
AC_LIBTOOL_DLOPEN
AC_PROG_LIBTOOL

AC_CANONICAL_HOST

AX_IS_RELEASE([git-directory])

# Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_CXX
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_LANG([C++])

AX_CXX_COMPILE_STDCXX_14([noext])
AX_COMPILER_FLAGS([WARN_CFLAGS],[WARN_LDFLAGS])

# Checks for libraries.
PKG_CHECK_MODULES([CPPUTEST], [cpputest >= 3.7.0])

AC_SUBST([CPPUTEST_LIBS])
AC_SUBST([CPPUTEST_CFLAGS])


# Checks for header files.
AC_CHECK_HEADERS([stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC

LT_INIT
AC_CONFIG_FILES([Makefile])

AC_OUTPUT
