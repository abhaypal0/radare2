r_reg_sources = [
  'arena.c',
  'rcond.c',
  'double.c',
  'profile.c',
  'reg.c',
  'rvalue.c',
]

r_reg = library('r_reg', r_reg_sources,
  include_directories: [platform_inc],
  c_args: library_cflags,
  dependencies: [r_util_dep],
  install: true,
  implicit_include_directories: false,
  install_rpath: rpath_lib,
  soversion: r2_libversion
)

r_reg_dep = declare_dependency(link_with: r_reg,
                               include_directories: [platform_inc])

if get_option('blob')
r_reg_static = static_library('r_reg_static', r_reg_sources,
  include_directories: [platform_inc],
  c_args: library_cflags,
  dependencies: [r_util_static_dep],
  install: true,
  implicit_include_directories: false,
)

r_reg_static_dep = declare_dependency(link_with: r_reg_static,
  include_directories: [platform_inc])
endif

pkgconfig_mod.generate(r_reg,
  subdirs: 'libr',
  version: r2_version,
  name: 'r_reg',
  filebase: 'r_reg',
  libraries: pkgcfg_sanitize_libs,
  requires: [
    'r_util'
  ],
  description: 'radare foundation libraries'
)
