#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mailio" for configuration ""
set_property(TARGET mailio APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mailio PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/usr/local/lib/libmailio.so"
  IMPORTED_SONAME_NOCONFIG "libmailio.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mailio )
list(APPEND _IMPORT_CHECK_FILES_FOR_mailio "/usr/local/lib/libmailio.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
