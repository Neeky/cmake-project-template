aux_source_directory(. tool_src_files)
message("tool_src_files: " ${tool_src_files})
add_library(tools ${tool_src_files})
