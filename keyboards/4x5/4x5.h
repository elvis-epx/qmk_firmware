
#ifndef FOURX5_H
#define FOURX5_H

#include "quantum.h"
#define ___ KC_NO

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array

#define LAYOUT_ortho_4x5( \
    K00, K01, K02, K03, \
    K10, K11, K12, K13, \
    K20, K21, K22,      \
    K30, K31, K32, K33, \
    K40,      K42       \
) \
{ \
    { K00, K01, K02, K03 }, \
    { K10, K11, K12, K13 }, \
    { K20, K21, K22, KC_NO }, \
    { K30, K31, K32, K33 }, \
    { K40, KC_NO, K42, KC_NO }  \
}

#endif
