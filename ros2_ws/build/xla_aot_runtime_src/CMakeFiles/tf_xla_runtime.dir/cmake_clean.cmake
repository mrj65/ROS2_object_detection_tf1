file(REMOVE_RECURSE
  "libtf_xla_runtime.a"
  "libtf_xla_runtime.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/tf_xla_runtime.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
