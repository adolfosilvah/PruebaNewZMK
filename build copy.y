# This file generates the GitHub Actions matrix.
# For simple board + shield combinations, add them to the top level board and
# shield arrays, for more control, add individual board + shield combinations
# to the `include` property. You can also use the `cmake-args` property to
# pass flags to the build command and `artifact-name` to assign a name to
# distinguish build outputs from each other:
#
# board: [ "nice_nano_v2" ]
# shield: [ "corne_left", "corne_right" ]
# include:
#   - board: bdn9_rev2
#   - board: nice_nano_v2
#     shield: reviung41
#   - board: nice_nano_v2
#     shield: corne_left
#     cmake-args: -DCONFIG_ZMK_USB_LOGGING=y
#     artifact-name: corne_left_with_logging
#
---
include:
  - board: nice_nano
    shield: corne_left
  - board: nice_nano
    shield: corne_right
